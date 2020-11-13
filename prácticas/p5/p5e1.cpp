// Ejercicio 1: Conversion de Temperaturas

#include <iostream>

using namespace std;

// Funciones
double convertirTemp(double grados)
{
    double temp;
    temp = grados + 273.15;
    return temp;
    // Estas tres sentencias pueden resumirse en:
    // return grados + 273.15;
}

//----------------------------------------------------------------------------------------

int main()
{
    double K,C;
    cout << "Dime los grados centigrados: ";
    cin >> C;
    K = convertirTemp(C);
    cout << "Los grados Kelvin son: " << K << endl;
    // Esas dos ultimas sentencias es equivalente a
    // cout << "Los grados Kelvin son: " << convertirTemp(C) << endl;

    return 0;
}
