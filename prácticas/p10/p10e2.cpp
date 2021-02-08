#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 500;
// Tipos (apartado A)
typedef struct{
    string palabra;
    int cantidad;
} TPalabra;

typedef array<TPalabra, MAX> TPalabras;

typedef struct{
    TPalabras palabras;
    int tam;
} TListaPalabras;

// Funciones (apartado B)
void inicializar(TListaPalabras &lp){
    lp.tam = 0;
}

int buscar(const TListaPalabras &lp, string palabra){
    int i = 0;

    while(i < lp.tam && lp.palabras[i].palabra < palabra){
        i++;
    }

    return i;
}

void insertar_en_posicion(TListaPalabras &lp, string palabra, int pos){
    for(int i = lp.tam - 1; i >= pos; i--){
        lp.palabras[i+1] = lp.palabras[i]; 
    }
    lp.palabras[pos].palabra = palabra;
    lp.palabras[pos].cantidad = 1;
    lp.tam++;
}

void leer(TListaPalabras &lp){
    string pal;
    int pos;

    inicializar(lp);
    cin >> pal;

    while(pal != "FIN"){
        pos = buscar(lp, pal);
        if(pos == lp.tam || lp.palabras[pos].palabra != pal){
            insertar_en_posicion(lp, pal, pos);
        } else {
            lp.palabras[pos].cantidad++;
        }
        cin >> pal;
    }
}

// Funciones (Apartado C)
void mostrar_palabra(const TPalabra &p){
    cout << p.palabra << " (" << p.cantidad << " veces)." << endl;
}

void mostrar(const TListaPalabras &lp){
    for(int i = 0; i < lp.tam; i++){
        mostrar_palabra(lp.palabras[i]);
    }
}

// Función apartado C
int cantidad_palabras(const TListaPalabras &lp){
    int suma = 0;
    for(int i = 0; i < lp.tam; i++){
        suma = suma + lp.palabras[i].cantidad;
    }
    return suma;
}

// Función (Apartado E)
void palabra_mas_larga(const TListaPalabras &lp, TPalabra &p){
    if(lp.tam > 0){
        p = lp.palabras[0];
        for(int i = 1; i < lp.tam; i++){
            if(p.palabra.size() < lp.palabras[i].palabra.size()){
                p = lp.palabras[i];
            }
        }
    }
}

// Función (Apartado F)
void insertar_registro(TListaPalabras &lp, TPalabra p){
    lp.palabras[lp.tam] = p;
    lp.tam++;
}

void palabras_empiezan_por_letra(const TListaPalabras &lp, char c, TListaPalabras &res){
    inicializar(res);
    int i  = 0;
    while(i < lp.tam && lp.palabras[i].palabra[0] <= c){
        if(lp.palabras[i].palabra[0] == c){
            insertar_registro(res, lp.palabras[i]);
        }
        i++;
    }
}

// Funciones (Apartado G)
void eliminar_posicion(TListaPalabras &lp, int pos){
    for(int i = pos; i < lp.tam-1; i++){
        lp.palabras[i] = lp.palabras[i+1];
    }
    lp.tam--;
}

void eliminar(TListaPalabras &lp, string palabra){
    int pos = buscar(lp, palabra);
    if(pos != -1){
        if(lp.palabras[pos].cantidad > 1){
            lp.palabras[pos].cantidad--;
        } else{
            eliminar_posicion(lp, pos);
        }
    }
}

// Programa principal
int main(){
    TListaPalabras lp;

    cout << "Introduzca un texto acabado en FIN: ";
    leer(lp);

    cout << "Las palabras leidas son: " << endl;
    mostrar(lp);
    cout << "Se leyeron en total: " << cantidad_palabras(lp) << " palabras." << endl;

    TPalabra palabra;
    palabra_mas_larga(lp, palabra);
    cout << "La palabra mas larga es ";
    mostrar_palabra(palabra);

    TListaPalabras lp2;
    char c;
    cout << "Dime una letra: ";
    cin >> c;
    palabras_empiezan_por_letra(lp, c, lp2);
    cout << "Las palabras que empiezan por " << c << " son: " << endl;
    mostrar(lp2);

    string pal;
    cout << "Indique la palabra a borrar: ";
    cin >> pal;
    eliminar(lp, pal);
    cout << "El resultado es: " << endl;
    mostrar(lp);

    return 0;
}