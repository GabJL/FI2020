#include <iostream>
#include <array>
using namespace std;

// Constantes
const int NUM_VENDEDORES = 3;
const int NUM_PRODUCTOS = 4;

// Tipos (Apartado A)
typedef array<int, NUM_PRODUCTOS> TTrabajador; // Cuantos productos de cada tipo ha vendido un trabajador
typedef array<TTrabajador, NUM_VENDEDORES> TEmpresa; // La matriz (las filas son los trabajadores y las columnas los productos)

// Funciones
void leer_datos(TEmpresa &e){
    for(int trabajador = 0; trabajador < NUM_VENDEDORES; trabajador++){
        cout << "Dime las ventas del trabajador " << trabajador << ": " << endl;
        for(int prod = 0; prod < NUM_PRODUCTOS; prod++){
            cout << "\tProducto " << prod << ": ";
            cin >> e[trabajador][prod];
        }
    }
}

void escribir_datos(const TEmpresa &e){
    for(int fila = 0; fila < NUM_VENDEDORES; fila++){
        for(int col = 0; col < NUM_PRODUCTOS; col++){
            cout << e[fila][col] << " ";
        }
        cout << endl;
    }
}

int suma_total(const TEmpresa &e){
    int suma = 0;
    for(int f = 0; f < NUM_VENDEDORES; f++){
        for(int p = 0; p < NUM_PRODUCTOS; p++){
            suma = suma + e[f][p];
        }
    }
    return suma;
}

void escribir_ventas_trabajador(const TEmpresa &e){
    int suma = 0;
    for(int f = 0; f < NUM_VENDEDORES; f++){
        suma = 0; // No he contado nada de este trabajador
        for(int p = 0; p < NUM_PRODUCTOS; p++){
            suma = suma + e[f][p];
        }
        cout << " - El trabajador " << f << " ha vendido " << suma << " productos" << endl;
    }
}

void escribir_ventas_productos(const TEmpresa &e){
    int suma = 0;
    for(int p = 0; p < NUM_PRODUCTOS; p++){
        suma = 0;
        for(int v = 0; v < NUM_VENDEDORES; v++){
            suma = suma + e[v][p];
        }
        cout << " - El producto " << p << " se ha vendido " << suma << " veces" << endl;
    }
}

int producto_mas_vendido(const TEmpresa &e){
    int suma = 0, max_suma = -1;
    int producto_mas_ventas;
    for(int p = 0; p < NUM_PRODUCTOS; p++){
        suma = 0;
        for(int v = 0; v < NUM_VENDEDORES; v++){
            suma = suma + e[v][p];
        }
        // EL producto más vendido es el que tenga una suma mayor
        if(suma > max_suma){
            producto_mas_ventas = p;
            max_suma = suma;
        }
    }
    return producto_mas_ventas;
}

int main(){
    TEmpresa e = {{ {2,3,4,5},
                    {8,6,4,2},
                    {1,5,8,0} }};
    // cout << "Leemos los datos: " << endl;
    // leer_datos(e);
    cout << "Mostramos lo leido: " << endl;
    escribir_datos(e);
    cout << "La cantidad total de productos es " << suma_total(e) << endl;
    cout << "Suma por trabajador: " << endl;
    escribir_ventas_trabajador(e);
    cout << "Suma por producto: " << endl;
    escribir_ventas_productos(e);
    cout << "El producto mas vendido es: " << producto_mas_vendido(e) << endl;

    // e[0][2] = 7; // El trabajador 0 ha vendido 7 unidades del producto 2

    return 0;
}
