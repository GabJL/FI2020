// Sentencias de repetición: Media de valores leídos de teclado (hasta 0)
#include <iostream>

using namespace std;

int main(){
	int veces, numero, suma;

	cout << "Escriba numeros acabados en 0: ";
	veces = 0;
	suma = 0;
	cin >> numero;
	while(numero != 0){
		suma += numero;
		veces++;
		cin >> numero;
	}

	if(veces > 0){
		cout << "La media vale " << double(suma)/veces << endl; 
	} else {
		cout << "No hubo numeros correctos" << endl;
	}
	
	return 0;
}
