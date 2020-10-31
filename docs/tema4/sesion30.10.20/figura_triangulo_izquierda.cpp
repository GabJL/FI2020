// Sentencias de repetición: Anidamiento: Figura: Triángulo rectángulo izquierda
#include <iostream>

using namespace std;

int main(){
	int altura, numAsteriscos;

	cout << "Dime la altura: ";
	cin >> altura;
	numAsteriscos = 1;

	for(int linea = 1; linea <= altura; linea++){ // Dibuja cada línea
		for(int asteriscos = 1; asteriscos <= numAsteriscos; asteriscos++){
			cout << "*";
		}
		cout << endl;
		numAsteriscos++;
	}
	return 0;
}
