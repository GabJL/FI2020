#include <iostream>
#include <ctime>   // Tiempo
#include <cstdlib> // Numeros aleatorios

using namespace std;

const int MAX = 100;
const int MIN = 1;

int main(){
    // Declaracion de variables
    int numeroSecreto;

    srand(time(0)); // Para usar los numeros aleatorios (semilla)

    // NO TOCAR: Eleccion de la jugada del ordenador:
    cout << "El ordenador esta pensando un numero del " << MIN << " al " << MAX << " ..." << endl;
    numeroSecreto =  rand()%MAX + MIN;

    // COMPLETAR: Pedir numeros hasta que acierte mostrando la informacion oportuna

    // NO TOCAR: Numero pensado
    cout << "Numero: " << numeroSecreto;

    // FIN del programa
    return 0;
}
