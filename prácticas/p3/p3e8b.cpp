// Ejercicio 8: Adivinar un numero
#include <iostream>
#include <ctime>   // Tiempo
#include <cstdlib> // Numeros aleatorios

using namespace std;

const int MAX = 100;
const int MIN = 1;
const int MAX_INTENTOS = 5;

int main(){
	// Declaracion de variables
	int numeroSecreto, numeroJug, intentos = 0;
	bool acertado = false;

	srand(time(0)); // Para usar los numeros aleatorios (semilla)

	// NO TOCAR: Eleccion de la jugada del ordenador:
	cout << "El ordenador esta pensando un numero del " << MIN << " al " << MAX << " ..." << endl;
	numeroSecreto =  rand()%MAX + MIN;

	while(!acertado && intentos < MAX_INTENTOS){
		cout << "Cual cree que es el numero? ";
		cin >> numeroJug;
		intentos++;
		if(numeroJug > numeroSecreto){
			cout << "Lo siento, el numero era menor. Te quedan " << MAX_INTENTOS - intentos << " intentos " <<  endl;
		}else if(numeroJug < numeroSecreto){
			cout << "Lo siento, el numero era mayor. Te quedan " << MAX_INTENTOS - intentos << " intentos " << endl;
		} else {
			cout << "Enhorabuena! Has acertado" << endl;
			acertado = true;
		}
	}

	if(!acertado){
		cout << "No has acertado! El numero era " << numeroSecreto << endl;
	}

    // FIN del programa
    return 0;
}
