// Sentencias de repetición: Media de 20 valores leídos de teclado
#include <iostream>

using namespace std;

const int REPETICIONES = 10;

int main(){
	int veces, numero, suma;

	cout << "Escriba 10 numeros: ";
	veces = 0;
	suma = 0;
	while(veces < REPETICIONES){
		cin >> numero;
		suma += numero;
		veces++;
	}

	cout << "La media vale " << suma/10.0 << endl; // Usamos 10.0 para que salga con decimales

	return 0;
}
