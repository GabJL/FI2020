// Ejercicio 4: media de los aprobados con lectura adelantada
#include <iostream>

using namespace std;

int main(){
	double nota, suma = 0;
	int aprobados = 0;

	cout << "Introduce notas (acabe con una incorrecta: ";
	
	cin >> nota;
	while(nota >= 0 && nota <= 10){
		if(nota >= 5){
			suma += nota; // suma = suma + nota;
			aprobados++;
		}
		cin >> nota;
	}

	if(aprobados == 0){
		cout << "No hay aprobados" << endl;
	}else {
		cout << "Hay " << aprobados << " alumnos aprobados con nota media de " << suma/aprobados << endl;
	}

	return 0;
}
