// Ejercicio 1: Repaso de las sentencias de selección
#include <iostream>

using namespace std;

const int SALARIO_HORA = 10;
const int SALARIO_EXTRA = 15;


int main(){
	int horas, extra;
	double salario;

	cout << "Introduzca las horas trabajadas esta semana: ";
	cin >> horas;

	if(horas < 40){
		salario = horas * SALARIO_HORA;
	} else {
		salario = 40 * SALARIO_HORA;
		extra = horas - 40;
		if(extra > 10){
			extra = 10;
		}
		salario += extra*SALARIO_EXTRA;
	}

	if(salario >= 300){
		salario = salario * 0.9;
	}

	cout << "El salario de esta semana es: " << salario << endl;

	return 0;
}
