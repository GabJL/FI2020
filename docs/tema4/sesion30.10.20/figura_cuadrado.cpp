// Sentencias de repetición: Anidamiento: Figura: cuadrado
#include <iostream>

using namespace std;

int main(){
	int altura;

	cout << "Dime la altura: ";
	cin >> altura;

	for(int linea = 1; linea <= altura; linea++){ // Dibuja cada línea
		for(int asteriscos = 1; asteriscos <= altura; asteriscos++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
