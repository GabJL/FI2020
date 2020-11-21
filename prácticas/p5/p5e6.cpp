// Ejercicio 6: Area de triangulo

#include <iostream>

using namespace std;

// Funciones
double altura(double lado)
{
    return lado*sqrt(3.0)/2.0;
}
double area(double lado)
{
    return lado*altura(l)/2.0;
}

//----------------------------------------------------------------------------------------

int main()
{
    double l;
    cout << "Dime el lado del triangulo";
    cin >> l;
    cout << "El area es " << area(l) << endl;

    return 0;
}
