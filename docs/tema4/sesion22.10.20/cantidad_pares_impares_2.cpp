// Sentencias de selección: Cantidad de pares e impares de valores positivos
#include <iostream>

using namespace std;

int main(){
	int numero, cont_pares, cont_impares;

	cont_pares = cont_impares = 0; 
	cout << "Dime valores acabados en un negativo: ";
	cin >> numero; // Lectura adelantada
	while(numero >= 0){
		if(numero%2 == 0){ 
			cont_pares++;
		} else {
			cont_impares++;
		}
		cin >> numero; // Lectura para la siguiente iteración	
	}

	cout << "Hay " << cont_pares << " pares y " << cont_impares << " impares" << endl;
	return 0;
}
