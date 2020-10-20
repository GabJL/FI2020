// Sentencias de repetición: Suma de 20 valores leídos de teclado
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
		suma += numero; // suma = suma + numero; Acumulamos lo que llevábamos más el nuevo valor leído
		veces++;
	}

	cout << "La suma vale " << suma << endl;

	return 0;
}
