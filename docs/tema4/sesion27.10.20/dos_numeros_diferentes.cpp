// Sentences de repetición: Lectura adelantada de dos valores
#include <iostream>

using namespace std;

int main(){
	int num1, num2;

	cout << "Diga dos valores diferentes: ";
	cin >> num1 >> num2;

	while(num1 == num2){
		cout << "Diga dos valores diferentes: ";
		cin >> num1 >> num2;
	}

	cout << "Gracias!" << endl;
	
	retur
