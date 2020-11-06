// Ejercicio 1: Tres valores ordenados
#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;

	do{
		cout << "Introduzca tres valores crecientes: ";
		cin >> n1 >> n2 >> n3;
	}while(n1 >= n2 || n2 >= n3);

	cout << "Gracias!" << endl;

	return 0;
}
