#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;

typedef array<int, MAX> TArray;
typedef struct{
    TArray v;
    int tam;
} TLista;

void mostrar(const TLista &a){
    for(int i = 0; i < a.tam; i++){
        cout << a.v[i] << " ";
    }
}

int buscar(const TLista &l, int x){
    int pos = -1;
    // Solucion 1: Muy ineficiente
    /*
    for(int i = 0; i < v.tam; i++){
        if(l.v[i] == x){
            pos = i;
        }
    }
    */
    bool encontrado = false;
    int i = 0;
    // Solucion 2: Más eficiente sirve para arrays ordenados y no ordenados
    /*
    while(i < v.tam && !encontrado){ // !encontrado <-> encontrado == false
        if(l.v[i] == x){
            pos = i;
            encontrado = true;
        }
        i++;
    }
    */
    // Solucion 3: Solo funciona para arrays ordenados
    bool me_he_pasado = false;
    while(i < l.tam && !encontrado && !me_he_pasado){ // !encontrado <-> encontrado == false
        if(l.v[i] == x){
            pos = i;
            encontrado = true;
        } else if(l.v[i] > x){
            me_he_pasado = true;
        }
        i++;
    }

    return pos;
}

void eliminar_posicion(TLista &l, int pos){
    for(int i = pos; i < l.tam-1; i++){
        l.v[i] = l.v[i+1];
    }
    l.tam--;
}

void eliminar_ordenado(TLista &l, int elemento){
    int pos = buscar(l, elemento); // Devuelve la posición donde está el elemento o -1 si no está
    if(pos != -1){
        eliminar_posicion(l, pos);
    }
}

int buscar_donde_insertar(const TLista &l, int x){
    int i = 0;
    while(i < l.tam && l.v[i] < x){ // Mientras no llego al final y los valores son más pequeños
        i++; // avanzo
    }
    return i;
}

void insertar_en_posicion(TLista &l, int pos, int x){
    // Mover a la derecha los valores desde pos hasta el final
    for(int i = l.tam-1; i >= pos; i--){
        l.v[i+1] = l.v[i];
    }
    // meter el valor en pos
    l.v[pos] = x;
    l.tam++;
}

void insertar_ordenado(TLista &l, int elemento){
    if(l.tam < MAX){ // ¿Hay hueco para el nuevo valor?
        int pos = buscar_donde_insertar(l, elemento);
        insertar_en_posicion(l, pos, elemento);
    }
}


int main(){
    TLista a = {
                    {1, 4, 6, 9, 10, 12, 20},   // valores
                    7                           // tamaño
                };

    mostrar(a);
    cout << endl;
    insertar_ordenado(a, 8);
    mostrar(a);
    cout << endl;
    eliminar_ordenado(a, 6);
    mostrar(a);
    cout << endl;
    eliminar_ordenado(a, 2);
    mostrar(a);
    cout << endl;

    return 0;
}
