// Tema 4: Sentencias de selección secuenciales (y reutilización de variables): menor de 4 valores
#include <iostream>

using namespace std;

int main(){
	int num, menor;

	cout << "Dime cuatro valores: ";
	cin >> num;
	// Consideramos que el primero leído es el menor y luego vamos leyendo uno a uno el resto y mirando si es menor que el menor
	menor = num;

	cin >> num;
	if(num < menor){
		menor = num;
	}
	
	cin >> num;
	if(num < menor){
		menor = num;
	}
	
	cin >> num;
	if(num < menor){
		menor = num;
	}

	cout << "El menor es " << menor << endl;
	return 0;
}	
