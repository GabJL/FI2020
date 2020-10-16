// Ejercicio 6: Siguiente transporte
#include <iostream>

using namespace std;

int main(){
	int hora, minutos, periodo;

	cout << "Tiempo: ";
	cin >> hora >> minutos;
	cout << "Periodo: ";
	cin >> periodo;

	hora = (hora + (minutos + periodo)/60)%24;
	minutos = (minutos + periodo)%60;

	cout << "Siguiente: " << hora << ":" << minutos << endl;
	return 0;
}
