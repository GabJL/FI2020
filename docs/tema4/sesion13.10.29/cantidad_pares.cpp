// Tema 4: Sentencias de selección secuenciales: Cantidad de pares
#include <iostream>

using namespace std;

int main(){
	int num1, num2, num_pares;

	cout << "Dime dos numeros: ";
	cin >> num1 >> num2;

	num_pares = 0;
	if(num1 % 2 == 0){
		num_pares++;
	}
	if(num2 % 2 == 0){
		num_pares++;
	}
	
	cout << "Has escrito " << num_pares << " numeros pares" << endl;
	return 0;
}
