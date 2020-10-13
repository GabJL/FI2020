// Tema 4: Sentencia de selección binaria
// Programa que decide si un número es negativo o positivo
#include <iostream>

using namespace std;

int main(){
	int num;

	cout << "Dime un numero: ";
	cin >> num;

	// Depediendo del signo del número hay que escribir cosas opuestas
	cout << "El numero " << num << " es ";
	if(num < 0){
		cout << "negativo" << endl;
	} else {
		cout << "positivo (o 0)" << endl;
	}

	return 0;
}
