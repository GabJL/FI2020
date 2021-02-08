#include <iostream>
#include <array>

using namespace std;

// constantes
const int MAX1 = 10;
const int MAX2 = 5;

// Tipos
typedef array<int, MAX1> TArray;

typedef array<int, MAX2> TArrayC;

typedef struct{
    TArrayC v;
    int tam;
} TLista;

void inicializar(TLista &l){
    l.tam  = 0;
}

void insertar_ordenado_sin_repetir(TLista &l, int x){

}

void lista_ordenada_sin_repeticiones(const TArray &a, TLista &l){
    inicializar(l);
    for(int i = 0; i < MAX1; i++){
        insertar_ordenado_sin_repetir(l, a[i]);
    }
}

void mostrar(const TLista &l){
    for(int i = 0; i < l.tam; i++){
        cout << l.v[i] << " ";
    }
    cout << endl;
}

int main(){
    TArray a = {12, 10, 4, 3, 12, 4, 12, 8, 2, 10};
    TArray b = {9, -5, 9, 6, -5, 6, -5, 9, 2, 2};
    TLista la, lb;
    
    cout << "Ejemplo 1: ";
    lista_ordenada_sin_repeticiones(a, la);
    mostrar(la);
    
    cout << "Ejemplo 2: ";
    lista_ordenada_sin_repeticiones(b, lb);
    mostrar(lb);

    return 0;
}