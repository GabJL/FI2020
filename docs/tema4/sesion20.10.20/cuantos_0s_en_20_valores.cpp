// Sentencias de repetición: Leer 20 números y dice cuántos 0s hay
// Uso de contadores selectivos (solo cuénta los 0s)
#include <iostream>

using namespace std;

const int NUM = 20;

int main(){
	int veces, contador0s, numero;

	cout << "Diga 20 numeros: ";
	veces = 0; // No hemos leído ningún valor
	contador0s = 0; // No hemos leído ningún 0
	while(veces < NUM){
		cin >> numero; // Leemos un nuevo valor
		if(numero == 0){ // Si es 0
			contador0s++; // Incrementamos el contador
		}
		veces++; // Indicamos que hemos leído un nuevo valor
	}
	
	cout << "Has escrito " << contador0s << " ceros." << endl;

	return 0;
}
