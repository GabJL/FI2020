// Sentencias de selección: Cantidad de pares e impares en 30 valores
#include <iostream>

using namespace std;

const int REPETICIONES = 30;

int main(){
	int veces, numero, cont_pares, cont_impares;

	veces = cont_pares = cont_impares = 0; // Ponemos todo a 0
	cout << "Dime " << REPETICIONES << " valores: ";
	while(veces < REPETICIONES){
		cin >> numero;
		if(numero%2 == 0){ // par
			cont_pares++;
		} else {
			cont_impares++;
		}
		veces++;
	}

	cout << "Hay " << cont_pares << " pares y " << cont_impares << " impares" << endl;
	return 0;
}
