// Tema 4: Sentencias de selección switch: mes a día
#include <iostream>

using namespace std;

int main(){
	int mes, dias;

	cout << "Dime el numero del mes: ";
	cin >> mes;
	switch(mes){
		case 2: dias = 28; break;
		case 4: 
		case 6: 
		case 9: 
		case 11: dias = 30; break;
		default: dias = 31; break;
	}

	cout << "El mes " << mes << " tiene " << dias << " dias" << endl;

	return 0;
}
