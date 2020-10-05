// Ejercicio: Cifrado César sin comprobar límites
#include <iostream>

using namespace std;

int main(){
	int desplazamiento;
	char letra;

	cout << "Desplazamiento: ";
	cin >> desplazamiento;
	cout << "Letra: ";
	cin >> letra;

	letra = letra + desplazamiento;

	cout << "Letra codificada: " << letra << endl;
	return 0;
}