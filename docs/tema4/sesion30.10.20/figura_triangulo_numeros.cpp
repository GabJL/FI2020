// Sentencias de repetición: Anidamiento: Figura: Triángulo rectángulo derecha
#include <iostream>

using namespace std;

int main(){
	int altura, numNumeros, numEspacios;

	cout << "Dime la altura: ";
	cin >> altura;
	numNumeros = 1;
	numEspacios = altura - 1;

	for(int linea = 1; linea <= altura; linea++){ // Dibuja cada línea
		for(int espacios = 1; espacios <= numEspacios; espacios++){
			cout << "  ";
		}
		for(int numeros = 1; numeros <= numNumeros; numeros++){
			cout << numeros << " ";
		}
		cout << endl;
		numNumeros++;
		numEspacios--;
	}
	return 0;
}
