// Tema 4: Sentencias de selección (alternativas)
// Programa que calcule el menor de dos números (version 3)
#include <iostream>

using namespace std;

int main(){
	int a, b, menor;
	
	cout << "Dime dos numeros: ";
	cin >> a >> b;

	if(a < b){
		menor = a;
	} else {
		menor = b;
	}
	cout << "El menor es: " << menor << endl;

	return 0;
}
