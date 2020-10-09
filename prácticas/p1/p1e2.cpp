// Ejercicio 2: Tiempo de descarga de un fichero
#include <iostream>

using namespace std;

int main(){
	int tamanio, velocidad;

	cout << "Indique la velocidad de descarga (en Mbps): ";
	cin >> velocidad;
	cout << "Indique el tamanio del fichero a descargar (en MB): ";
	cin >> tamanio;

	cout << "El tiempo de descarga aproximado es " << (tamanio*8)/velocidad << " segundos" << endl;
	return 0;
}
