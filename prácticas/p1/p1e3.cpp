// Ejercicio 3: Tiempo de caída de un objeto según distancia
#include <iostream>
#include <cmath>

using namespace std;

const double G = 9.81;

int main(){
	double distancia;
	
	cout << "Indique la altura (m): ";
	cin >> distancia;

	cout << "El tiempo es " << sqrt(distancia*2/G) << " segundos" << endl;
	return 0;
}
