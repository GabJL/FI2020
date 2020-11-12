// Ejercicio 6: polinomio
#include <iostream>

using namespace std;

int main(){
	int grado;
	double x, p_x, coeficiente;

	cout << "n: "; cin >> grado;
	cout << "x: "; cin >> x;
	cout << "Coeficientes: "; cin >> p_x;

	for(int i = 0; i < grado; i++){
		cin >> coeficiente;
		p_x = p_x*x + coeficiente;
	}

	cout << "p(" << x << ") = " << p_x << endl;

	return 0;
