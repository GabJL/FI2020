// Ejercicio: Cifrado César circular (suponiendo solo minúsculas)
#include <iostream>

using namespace std;

const int NUM_LETRAS = 'Z' - 'A' + 1;

int main(){
	int desplazamiento;
	char letra;

	cout << "Desplazamiento: ";
	cin >> desplazamiento;
	cout << "Letra: ";
	cin >> letra;

	letra = ((letra - 'a') + desplazamiento)%NUM_LETRAS + 'a';

	cout << "Letra codificada: " << letra << endl;
	return 0;
}