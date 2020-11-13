// Ejercicio 3: Par

#include <iostream>

using namespace std;

// Funciones
bool esPar(int num)
{
    bool par;
    if(num % 2 == 0) par = true;
    else             par = false;
    return par;
    // Estas cuatro sentencias pueden resumirse en:
    // return (num%2 == 0);
}

//----------------------------------------------------------------------------------------

int main()
{
    int num, contadorDePares = 0;
    cout << "Dime 10 valores: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        if(esPar(num)) // Esto es igual que poner esPar(num) == true
            contadorDePares++; // Como solo es una sentencia dentro del if podemos ahorrarnos de poner las {}
    }
    cout << "Has introducido " << contadorDePares << " numeros pares." << endl;

    return 0;
}
