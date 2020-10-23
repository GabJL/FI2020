// Ejercicio 3: media de los aprobados
#include <iostream>

using namespace std;

const int NUM_ALUMNOS = 80;

int main(){
	double nota, suma = 0;
	int aprobados = 0, veces = 0;

	cout << "Introduce " << NUM_ALUMNOS << " notas: ";

	while(veces < NUM_ALUMNOS){
		cin >> nota;
		if(nota >= 5){
			suma += nota; // suma = suma + nota;
			aprobados++;
		}
		veces++;
	}

	if(aprobados == 0){
		cout << "No hay aprobados" << endl;
	}else {
		cout << "Hay " << aprobados << " alumnos aprobados con nota media de " << suma/aprobados << endl;
	}

	return 0;
}
