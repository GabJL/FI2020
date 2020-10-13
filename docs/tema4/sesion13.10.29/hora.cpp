// Sentencias de selección con condición más compleja
// Calcula la hora en 24h a partir de la hora en am/pm
#include <iostream>

using namespace std;

int main(){
	int hora;
	string periodo;

	cout << "Hora: ";
	cin >> hora >> periodo;

	// Si es por la tarde (pm) hay que sumar 12h salvo que sean las 12
	if(periodo == "pm" && hora != 12){
		hora += 12; // Esto es igual que hora = hora + 12;
	}

	cout << "Son las " << hora << endl;

	return 0;
}
