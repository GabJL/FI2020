// Tema 4: Sentencias de selección con condiciones complejas
// Decidir si un año es bisiesto o no
#include <iostream>

using namespace std;

int main(){
	int anio;
	
	cout << "Anio: ";
	cin >> anio;

	if( (anio%4 == 0 && anio%100 != 0) || (anio%400 == 0) ){
		cout << "Es bisiesto" << endl;
	} else {
		cout << "No es bisiesto" << endl;
	}

	return 0;
}
