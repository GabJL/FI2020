// Ejercicio 4: Positivos

#include <iostream>

using namespace std;

// Funciones
int numPositivos()
{
    int num, contador = 0;
    cout << "Dime 10 valores: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        if(num > 0 )
            contador++;
    }
    return contador;
}

//----------------------------------------------------------------------------------------

int main()
{
    cout << "El porcentaje de positivos es " << numPositivos()*10 << "." << endl;

    return 0;
}

