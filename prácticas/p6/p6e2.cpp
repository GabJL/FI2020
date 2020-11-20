#include <iostream>
#include <cmath>
using namespace std;

bool enfriamiento(double velocidad, double temperatura, double& indice)
{
	bool calculado=false;
	if (temperatura < 10){
		calculado = true;
		indice = 13.12 + 0.6215*temperatura-11.37*pow(velocidad,0.16)+0.3965*temperatura*pow(velocidad,0.016);
	}
	return calculado;
}

int main()
{
	double v, t, i;
	cout << "Velocidad: ";
	cin >> v;
	cout << "Temperatura: ";
	cin >> t;

	if (enfriamiento(v,t,i)) {
		cout << "El índice de enfriamiento es " << i;
	} else {
		cout << "ERROR: no se puede calcular el índice para una temperatura mayor de 10º";
	}

	return 0;
}


