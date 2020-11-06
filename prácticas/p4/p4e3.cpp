// Ejercicio 3: Números perfecto
#include <iostream>

using namespace std;

int main(){
	int n, suma = 0;

	cout << "Dime un numero: ";
	cin >> n;

	for(int i = 1; i < n; i++){
		if(n%i == 0){
			suma += i;
		}
	}

	cout << "El " << n;
	if(suma == n){
		cout << " es perfecto" << endl;
	} else {
		cout << " no es perfecto" << endl;
	} 

	return 0;
}
