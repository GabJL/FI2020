// Ejercicio 8: Adivinar un numero
#include <iostream>
#include <ctime>   // Tiempo
#include <cstdlib> // Numeros aleatorios

using namespace std;

const int MAX = 100;
const int MIN = 1;

int main(){
    // Declaracion de variables
    int numeroSecreto, numeroJug;
	bool acertado = false;

    srand(time(0)); // Para usar los numeros aleatorios (semilla)

    // NO TOCAR: Eleccion de la jugada del ordenador:
    cout << "El ordenador esta pensando un numero del " << MIN << " al " << MAX << " ..." << endl;
    numeroSecreto =  rand()%MAX + MIN;

    while(!acertado){
    	cout << "Cual cree que es el numero? ";
    	cin >> numeroJug;
        if(numeroJug > numeroSecreto){
        	cout << "Lo siento, el numero era menor" << endl;
        }else if(numeroJug < numeroSecreto){
        	cout << "Lo siento, el numero era mayor" << endl;
        } else {
		cout << "Enhorabuena! Has acertado" << endl;
		acertado = true;
	}
    }

    // FIN del programa
    return 0;
}
