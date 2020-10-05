// Ejercicio: Calcular la edad en años a partir de meses
#include <iostream>

using namespace std;

int main(){
	int meses;

	cout << "Edad en meses: ";
	cin >> meses;

	cout << "Tiene " << meses/12 << " anios y " << meses%12 << " meses" << endl;
	return 0;
}