// Ejercicio 5: mejor nota
#include <iostream>

using namespace std;

int main(){
	double nota, suma = 0, mejor;
	int aprobados = 0;

	cout << "Introduce notas (acabe con una incorrecta: ";
	
	cin >> nota;
  mejor = nota; // La primera nota consideramos que es la mejor
	while(nota >= 0 && nota <= 10){
		if(nota >= 5){
			suma += nota; // suma = suma + nota;
			aprobados++;
		}
    if(nota > mejor){ // Si encontramos una mejor actualizamos
      mejor = nota;
    }
		cin >> nota;
	}

	if(aprobados == 0){
		cout << "No hay aprobados" << endl;
	}else {
		cout << "Hay " << aprobados << " alumnos aprobados con nota media de " << suma/aprobados << endl;
	}
  cout << "La mejor nota es " << mejor << endl;

	return 0;
}
