// Ejercicio 5: Nota media ponderada
#include <iostream>

using namespace std;

int main(){
	double p1, p2, p3, p4, examen;

	cout << "Parcial 1: ";
	cin >> p1;
	cout << "Parcial 2: ";
	cin >> p2;
	cout << "Parcial 3: ";
	cin >> p3;
	cout << "Parcial 4: ";
	cin >> p4;
	cout << "Examen: ";
	cin >> examen;

	cout << "La nota media es: " << (p1 + p2 + p3 + p4)*0.1 + examen*0.6 << endl;
	return 0;
}
