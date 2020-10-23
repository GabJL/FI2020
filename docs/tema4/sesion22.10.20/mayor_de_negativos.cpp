// Sentencias de repetición: valores especiales y lectura adelantada
#include <iostream>

using namespace std;

int main(){
	int mayor, numero;

	cout << "Diga numeros acadados en uno positivo: ";
	cin >> numero;
	mayor = numero;

	while(numero < 0){
		if(numero > mayor){
			mayor = numero;
		}
		cin >> numero;
	}

	if(mayor >= 0){
		cout << "No dijiste ninguno negativo" << endl;
	} else {
		cout << "El mayor es: " << mayor << endl;
	}

	return 0;
}
