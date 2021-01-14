#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX_TIENDAS = 100;
const int MAX_PRODUCTOS = 20;

// Tipos
typedef struct{
    string codigo;
    int cantidad;
} TProducto;

typedef array<TProducto, MAX_PRODUCTOS> TArrayProductos;

typedef struct{
    string encargado;
    string direccion;
    string ciudad;
    int cp;
    int num_prod_distintos;
    TArrayProductos prod;
} TTienda;

typedef array<TTienda, MAX_TIENDAS> TArrayTiendas;

typedef struct{
    TArrayTiendas tiendas;
    int tam;
} TListaTiendas;

int main(){
    TListaTiendas l;

    // Escribir el codigo del septimo producto de la segunda tienda de l
    cout << l.tiendas[1].prod[6].codigo << endl;
}
