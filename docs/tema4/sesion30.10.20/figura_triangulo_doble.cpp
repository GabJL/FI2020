// Sentencias de repetición: Anidamiento: Figura: Triángulo doble
#include <iostream>

using namespace std;

int main(){
	int altura, numAsteriscos, numEspacios;

	cout << "Dime la altura: ";
	cin >> altura;
	numAsteriscos = 1;
	numEspacios = 2*(altura - 1);

	for(int linea = 1; linea <= altura; linea++){ // Dibuja cada línea
		for(int asteriscos = 1; asteriscos <= numAsteriscos; asteriscos++){
			cout << "*";
		}
		for(int espacios = 1; espacios <= numEspacios; espacios++){
			cout << " ";
		}
		for(int asteriscos = 1; asteriscos <= numAsteriscos; asteriscos++){
			cout << "*";
		}
		cout << endl;
		numAsteriscos++;
		numEspacios = numEspacios - 2;
	}
	return 0;
}
