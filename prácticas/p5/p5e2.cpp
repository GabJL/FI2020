// Ejercicio 2: Precio e impuesto

#include <iostream>

using namespace std;

// Funciones
double PrecioConImpuesto(double precio, double impuesto)
{
    double p;
    p = precio*(1+impuesto/100);
    return p;
    // Estas tres sentencias pueden resumirse en:
    // return precio*(1+impuesto/100);
}

//----------------------------------------------------------------------------------------

int main()
{
    double p, imp, precio2;
    cout << "Dime el precio y el impuesto a aplicar: ";
    cin >> p >> imp;
    precio2 = PrecioConImpuesto(p, imp);
    cout << "El precio a pagar es: " << precio2 << endl;
    // Esas dos ultimas sentencias es equivalente a
    // cout << "El precio a pagar es: " << PrecioConImpuesto(p, imp) << endl;

}

