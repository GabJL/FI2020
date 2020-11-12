#include <iostream>
using namespace std;

const double GASTOS_ENVIO=6;

const double MAX_X=50;
const double MAX_Y=60;
const double MAX_Z=40;

int main() {
    int n, i=0, x;
    double precio_producto, precio_total=0, precio_final;

    double x, y, z;
    char opcion;

    cout << "Cuantos productos se han comprado: ";
    cin >> n;
    cout << "Precios de los productos: ";

    while(i<n) {
        cin >> precio_producto;
        precio_total=precio_total+precio_producto;
        i++;
    }
    cout << "Precio total: " << precio_total << endl;
    
    precio_final = precio_total;
    
    if (precio_total<=50) {
        precio_final = precio_total + GASTOS_ENVIO;
    }
    if (precio_total>=100) { // 3% de descuento
        precio_final = precio_total - precio_total * 0.03;
    }
    if (precio_total>=200) { // cada 20 euros a partir de 200 un 1% con un tope del 10%
        x = (int(precio_total)-200)/20; // ¿Cuántos 20 euros hay a partir de 200?
        if (x>10) { // El tope de rebaja sería 10% y ya se ha aplicado un 3%
            x=7;
        }
        precio_final = precio_final - x*(precio_total*0.01);
    }
    cout << "Precio final: " << precio_final;
    
    cout << "Dimensiones del paquete: ";
    cin >> x >> y >> z;

    if (x<MAX_X && y<MAX_Y && z<MAX_Z)
    {
        cout << "El paquete SI puede almacenarse en el armario." << endl;
    }
    else
    {
        cout << "El paquete NO puede almacenarse en el armario." << endl;
        cout << "Se puede girar (s/n): ";
        cin >> opcion;
        if (opcion=='s')
        {
            if (x < MAX_X && y < MAX_Z && z < MAX_Y)
            {
                cout << "El paquete SI puede almacenarse en el aramario";
            }
            else if (x < MAX_Y && y < MAX_X && z < MAX_Z)
            {
                cout << "El paquete SI puede almacenarse en el aramario";
            }
            else if (x < MAX_Y && y < MAX_Z && z < MAX_X)
            {
                cout << "El paquete SI puede almacenarse en el aramario";
            }
            else if (x < MAX_Z && y < MAX_X && z < MAX_Y)
            {
                cout << "El paquete SI puede almacenarse en el aramario";
            }
            else if (x < MAX_Z && y < MAX_Y && z < MAX_X)
            {
                cout << "El paquete SI puede almacenarse en el aramario";
            }
            else
            {
                cout << "El paquete TAMPOCO puede almacenarse en el aramario.";
            }
        }
    }
    
    return 0;
}
