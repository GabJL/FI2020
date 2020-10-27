// Sentencias de repetición (do-while): leer dos números diferentes
#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	
	do{
		cout << "Diga dos numeros diferentes: ";
		cin >> num1 >> num2;
	}while(num1 == num2);

	cout << "Gracias!" << endl;
	
	return 0;
}
