#include <iostream>

using namespace std;

int main(){
    int numero;
    int posicion; // Numero de valores leídos
    int primer12, ultimo12;
    bool he_encontrado_12 = false;

    cout << "Dime numeros acabados en 0: ";
    cin >> numero;  // lectura adelantada
    posicion = 1; // Hemos leido 1 numero
    primer12 = ultimo12 = 0;
    while(numero != 0){
        cout << "Posicion " << posicion << " es el valor " << numero << endl;
        // Hacer cosas con el numero
        if(numero == 12){
            ultimo12 = posicion;
            if(!he_encontrado_12){ // Nunca antes he visto un 12
                primer12 = posicion;
            }
            he_encontrado_12 = true;
        }
        cin >> numero; // lectura para la siguiente iteración del bucle
        posicion++; // Hemos leido un valor más
    }

    if(!he_encontrado_12){
        cout << "No hay 12s" << endl;
    } else {
        cout << "El primer doce ocurre en la posicion " << primer12 << " y el ultimo en "
            << ultimo12 << endl;
    }

    return 0;
}
