#include <iostream>
#include <array>

using namespace std;

const int MAX = 31;

// Apartado A
typedef array<int, MAX> TEstudio;

// Apartado H
typedef array<bool, MAX> TDiasLibres;

// Apartado B
void leerHoras(TEstudio &e){
	for(int i = 0; i < MAX; i++){
		cout << "Horas del dia " << i+1 << ": ";
		cin >> e[i];
	}
}

// Apartado C
int horasTotales(const TEstudio &e){
	int total = 0;
	for(int i = 0; i < MAX; i++){
		 total += e[i];
	}
	return total;
}

int main(){
	// Apartado D
	TEstudio diciembre;
	leerHoras(diciembre);
	cout << "En total estudiaremos " << horasTotales(diciembre) << " horas" << endl;

	return 0;
}

