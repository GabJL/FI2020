
// Tema 4: Sentencias de selección: fecha correcta
#include <iostream>

using namespace std;

int main(){
	int dia, mes, anio, max_dias;

	cout << "Dime el dia: ";
	cin >> dia;
	cout << "Dime el mes: ";
	cin >> mes;
	cout << "Dime el anio: ";
	cin >> anio;

	if(anio < 0){
		cout << "El anio no puede ser negativo" << endl;
	} else if (mes < 1 || mes > 12){
		cout << "El mes tiene que estar entre 1 y 12" << endl;
	} else {
		switch(mes){
			case 2: 
				if( (anio%4 == 0 && anio%100 != 0) || (anio%400 == 0) ){
					max_dias = 29;
				} else {
					max_dias = 28;
				}
				break;
			case 4: 
			case 6: 
			case 9: 
			case 11: max_dias = 30; break;
			default: max_dias = 31; break;
		}
	
		if(dia < 1 || dia > max_dias){
			cout << "El dia debe estar entre 1 y " << max_dias << endl;
		} else {
			cout << "Fecha correcta" << endl;
		}
	}

	return 0;
}
