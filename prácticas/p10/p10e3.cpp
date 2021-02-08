#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 500;
const int MAX_REP = 20;
// Tipos (apartado A)
typedef array<int, MAX_REP> TPosiciones;
typedef struct{
    string palabra;
    int cantidad;
    TPosiciones posiciones;
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
    bool encontrado = false;
    int pos = -1;
    int i = 0;

    while(i < lp.tam && !encontrado){
        if(lp.palabras[i].palabra == palabra){
            pos = i;
            encontrado = true;
        }
        i++;
    }

    return pos;
}

void insertar(TListaPalabras &lp, string palabra, int pos){
    lp.palabras[lp.tam].palabra = palabra;
    lp.palabras[lp.tam].cantidad = 1;
    lp.palabras[lp.tam].posiciones[0] = pos;

    lp.tam++;
}

void leer(TListaPalabras &lp){
    string pal;
    int pos;
    int pos_leida = 1;

    inicializar(lp);
    cin >> pal;

    while(pal != "FIN"){
        pos = buscar(lp, pal);
        if(pos == -1){
            insertar(lp, pal, pos_leida);
        } else {
            lp.palabras[pos].posiciones[lp.palabras[pos].cantidad] = pos_leida;
            lp.palabras[pos].cantidad++;
        }
        cin >> pal;
        pos_leida++;
    }
}

// Funciones (Apartado C)
void mostrar_palabra(const TPalabra &p){
    cout << p.palabra << " aparece" << p.cantidad << " veces ( ";
    for(int i = 0; i < p.cantidad; i++){
        cout << p.posiciones[i] << " ";
    }
    cout << ")." << endl;
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
    for(int i = 0; i < lp.tam; i++){
        if(lp.palabras[i].palabra[0] == c){
            insertar_registro(res, lp.palabras[i]);
        }
    }
}

// Funciones (Apartado G)
void eliminar_posicion(TListaPalabras &lp, int pos){
    lp.palabras[pos] = lp.palabras[lp.tam-1];
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

// Nuevo apartado
bool esta(const TPosiciones &pos, int tam, int x){
    int i = 0;
    bool encontrada = false;
    while(i < tam && !encontrada){
        if(pos[i] == x){
            encontrada = true;
        }
        i++;
    }
    return encontrada;
}

string palabra_en_pos(const TListaPalabras &lp, int p){
    int i = 0;
    string palabra;
    bool encontrada = false;
    while(i < lp.tam && !encontrada){
        if(esta(lp.palabras[i].posiciones, lp.palabras[i].cantidad, p)){
            encontrada = true;
            palabra = lp.palabras[i].palabra;
        }
        i++;
    }
    return palabra;
}

void reconstruir(const TListaPalabras &lp){
    int maximo = cantidad_palabras(lp);
    for(int i = 0; i <= maximo; i++){
        cout << palabra_en_pos(lp, i) << " ";
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

    cout << "El texto leido fue: "; 
    reconstruir(lp);
    cout << endl;

    string pal;
    cout << "Indique la palabra a borrar: ";
    cin >> pal;
    eliminar(lp, pal);
    cout << "El resultado es: " << endl;
    mostrar(lp);

    return 0;
}