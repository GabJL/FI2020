// Tema 4: Sentencia de selección múltiple: nota a calificación
#include <iostream>

using namespace std;

int main(){
	double nota;

	cout << "Dime la nota: ";
	cin >> nota;

	cout << "Tu calificacion es: ";
	if(nota < 5){
    		cout << "Suspenso :(" << endl;
	}else if(nota < 7){
		cout << "Aprobado" << endl;
	}else if(nota < 9){
		cout << "Notable" << endl;
	}else if(nota < 10){
    		cout << "Sobresaliente" << endl;
	}else{
    		cout << "Matricula de Honor" << endl;
	}

	return 0;
}
