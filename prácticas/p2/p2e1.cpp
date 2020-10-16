// Ejercicio 1: Mayor de dos valores
#include <iostream>

using namespace std;

int main(){
	int num1, num2, mayor;

	cout << "Dime dos numeros: ";
	cin >> num1 >> num2;

	mayor = num1;
	if(num2 > mayor){
		mayor = num2;
	}

	cout << "El " << mayor << " es el mayor" << endl;
	return 0;
}
