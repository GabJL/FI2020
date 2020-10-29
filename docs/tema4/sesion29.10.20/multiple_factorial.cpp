// Sentencia de repetición: factorial de varios valores
#include <iostream>

using namespace std;

int main(){
	int factorial, num1, num2;

	// Leer límites
	do{
		cout << "Dime el primer numero: ";
		cin >> num1;
		cout << "Dime el segundo numero: ";
		cin >> num2;
	}while(num1 >= num2);
	
	// recorremos todos los valores:
	for(int N = num1; N <= num2; N++){
		// Calculamos el factorial de N
		factorial = 1;
		cout << N << "! = 1";
		for(int i = 2; i <= N; i++){
			cout << "*" << i;
			factorial = factorial * i;
		}
		cout <<  " = " << factorial << endl;	
	}

	return 0;
}
