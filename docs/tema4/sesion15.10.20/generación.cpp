// Tema 4: Sentencias de selección múltiple: generación
#include <iostream>

using namespace std;

int main(){
	int anio;

	cout << "En que anio naciste: ";
	cin >> anio;

	cout << "Eres de la generación ";
	if(anio < 1946){
		cout << "no disponible" << endl;
	} else if(anio < 1962){
		cout << "Baby Boomer" << endl;
	} else if(anio < 1981){
		cout << "Generacion X" << endl;
	} else if(anio < 1997){
		cout << "Generacion Y (millenials)" << endl;
	} else if(anio < 2011){
		cout << "Generacion Z" << endl;
	} else {
		cout << "Generacion T (tactil)" << endl;
	}
	
	return 0;
}
