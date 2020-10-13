// Tema 4: Sentencia de selección simple
// Programa: Valor absoluto
#include <iostream>

using namespace std;

int main(){
	int num;

	cout << "Dime un numero: ";
	cin >> num;

	// Si es positivo no hay que hacer nada
	// pero si es negativo hay que cambiarle de signo
	if(num < 0){
		num = -num;
	}

	cout << "El valor absoluto es " << num << endl;

	return 0;
}
