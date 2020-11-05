// Sentencias de repetición: captcha
#include <iostream>

using namespace std;

int main(){
	int numero = 0;
	char letra;

	cout << "Introduzca la palabra: ";
	letra = cin.get();
	cout << "Palabra: ";
	while( letra != '\n'){
		if(letra >= '0' && letra <= '9'){
			numero = numero * 10 + (letra - '0');
		} else {
			cout << letra;
		}
		letra = cin.get();
	}
	cout << endl << "Numero: " << numero << endl;
	return 0;
}
