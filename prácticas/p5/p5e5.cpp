// Ejercicio 5: Escribir X numeros

#include <iostream>

using namespace std;

// Funciones
void escribirNumeros(int N)
{
    for(int i = 1; i < N; i++)
        cout << i << " ";
}

//----------------------------------------------------------------------------------------
int main()
{
    int x;
    cout << "Dime cuantos numeros quieres escribir: ";
    cin >> x;
    escribirNumeros(x);

    return 0;
}
