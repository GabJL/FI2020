#include <iostream>

using namespace std;

// Prototipos
void leerNumeros(int &x, int &y);
void escribirPrimos(int a, int b);
int leerEnRango(int a, int b);
bool esPrimo(int n);

int main(){
	int n1, n2;
	leerNumeros(n1, n2);
	cout << "Los primos en ese rango son: ";
	escribirPrimos(n1,n2);
	cout << endl;
	return 0;
}

// Código de funciones
void leerNumeros(int &x, int &y){
	x = leerEnRango(1, 20);
	y = leerEnRango(x,100);
}

int leerEnRango(int a, int b){
	int n;
	do{
		cout << "Dime un valor entre " << a << " y " << b << ": ";
		cin >> n;
	}while(n < a or n > b);
	return n;
}

void escribirPrimos(int a, int b){
	for(int i = a; i <= b; i++){
		if(esPrimo(i)){
			cout << i << " ";
		}
	}
}

bool esPrimo(int n){
	int div = 2;
	while(n%div != 0) div++;
	return div == n;
}	
