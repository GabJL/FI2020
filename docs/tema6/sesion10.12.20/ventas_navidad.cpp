#include <iostream>
#include <array>

using namespace std;

// constantes
const int TRAB = 3;
const int PROD = 4;

typedef array<int, PROD> TProductos;
typedef array<TProductos, TRAB> TTrabajador;

// Funciones
void leer(TTrabajador &m){
    for(int trabajador = 0; trabajador < TRAB; trabajador++){
        cout << "Diga las ventas del trabajador " << trabajador+1 << ": ";
        for(int producto = 0; producto < PROD; producto++){
            cin >> m[trabajador][producto];
        }
        cout << endl;
    }
}

void ventasTotal(const TTrabajador &m){
    int total = 0;
    cout << "Ventas totales: ";
    for(int trabajador = 0; trabajador < TRAB; trabajador++){
        for(int producto = 0; producto < PROD; producto++){
            total += m[trabajador][producto];
        }
    }
    cout << total << endl;
}

void ventasTrabajador(const TTrabajador &m){
    int total = 0;
    for(int trabajador = 0; trabajador < TRAB; trabajador++){
        cout << "Ventas totales del trabajador " << trabajador+1 << ": ";
        total = 0;
        for(int producto = 0; producto < PROD; producto++){
            total += m[trabajador][producto];
        }
        cout << total << endl;
    }
}

void ventasProductos(const TTrabajador &m){
    int total = 0;
    for(int producto = 0; producto < PROD; producto++){
        cout << "Ventas totales del producto " << producto+1 << ": ";
        total = 0;
        for(int trabajador = 0; trabajador < TRAB; trabajador++){
            total += m[trabajador][producto];
        }
        cout << total << endl;
    }
}

void productoMasVendido(const TTrabajador &m){
    int total = 0, max_total = -1, max_producto;
    for(int producto = 0; producto < PROD; producto++){
        total = 0;
        for(int trabajador = 0; trabajador < TRAB; trabajador++){
            total += m[trabajador][producto];
        }
        if(total > max_total){
            max_total = total;
            max_producto = producto+1;
        }
    }
    cout << "El producto mas vendido fue: " << max_producto << " con " << max_total << " ventas" << endl;
}


int main(){
    TTrabajador ventas;
    
    leer(ventas);
    ventasTotal(ventas);
    ventasTrabajador(ventas);
    ventasProductos(ventas);
    productoMasVendido(ventas);
    
    return 0;
}
