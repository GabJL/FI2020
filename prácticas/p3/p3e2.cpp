// Ejercicio 2: Número de aprobado
#include <iostream>

using namespace std;

const int NUM_ALUMNOS = 80;

int main(){
	double nota;
	int aprobados = 0, veces = 0;

	cout << "Introduce " << NUM_ALUMNOS << " notas: ";

	while(veces < NUM_ALUMNOS){
		cin >> nota;
		if(nota >= 5){
			aprobados++;
		}
		veces++;
	}

	cout << "Hay " << aprobados << " alumnos aprobados" << endl;

	return 0;
}
