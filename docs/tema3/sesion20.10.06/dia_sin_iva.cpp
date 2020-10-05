// Ejercicio: Calcular el precio de un objeto sin IVA
#include <iostream>

using namespace std;

const double IVA = 1.21;

int main(){
	double precio;

	cout << "Precio: "; 
	cin >> precio;

	cout << "Sin IVA es " << precio/IVA << endl;

	return 0;
}