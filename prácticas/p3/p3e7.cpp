// Menor de un bucle determinista
#include <iostream>

using namespace std;

int main(){
	int numero, menor, N, veces = 0;

	cout << "Cuantos valores hay: ";
	cin >> N;

	cout << "Dime " << N << " numeros: ";
	// Para tener un valor inicial para menor leemos un valor fuera
	cin >> numero;
	menor = numero;
	veces++;

	while(veces < N){
		cin >> numero;
		if(numero < menor){
			menor = numero;
		}
		veces++;
	}

	cout << "El menor es el " << menor << endl;

	return 0;
}
