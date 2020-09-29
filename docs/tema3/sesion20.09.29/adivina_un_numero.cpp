// Programa que actúa como jugador del juego "Adivina un número"
// Ejemplo de cómo pasar un algoritmo a código

#include <iostream>

using namespace std;

// Programa principal
int main(){
	// Declaramos las variables:
	int min, max, medio;
	string resp;

	// Solicitamos el rango donde está el valor a buscar
	cout << "Dime el rango: ";
	cin >> min >> max;

	// Repetimos hasta que se acierte
	do{
		// Calculamos el punto medio del rango
		medio = (max + min)/2;
		// Preguntamos si es ese valor
		cout << "Es el " << medio << "? ";
		cin >> resp;

		// Actuamos según la respuesta:
		if(resp == "acierto"){
			cout << "Bien!" << endl;
		} else if (resp == "menor"){
			max = medio;
		} else {
			min = medio;
		}
	}while(resp != "acierto");

	// Terminamos el programa
	return 0;
}
