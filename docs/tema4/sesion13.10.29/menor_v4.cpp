// Tema 4: Sentencias de selección (alternativas)
// Programa que calcule el menor de dos números (version 4)
#include <iostream>

using namespace std;

int main(){
	int a, b, menor;
	
	cout << "Dime dos numeros: ";
	cin >> a >> b;

	menor = b;
	if(a < b){
		menor = a;
	}
	cout << "El menor es: " << menor << endl;

	return 0;
}
