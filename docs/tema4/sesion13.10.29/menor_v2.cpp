// Tema 4: Sentencias de selección (alternativas)
// Programa que calcule el menor de dos números (version 2)
#include <iostream>

using namespace std;

int main(){
	int a, b;
	
	cout << "Dime dos numeros: ";
	cin >> a >> b;

	if(a < b){
		b = a;
	} else {
		b = b;
	}
	cout << "El menor es: " << b << endl;

	return 0;
}
