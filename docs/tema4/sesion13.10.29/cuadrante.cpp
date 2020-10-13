// Tema 4: Sentencias de selección: anidamiento: cuadrante
#include <iostream>

using namespace std;

int main(){
	int x, y, cuadrante;

	cout << "Dime una coordenada: ";
	cin >> x >> y;

	if(x >= 0){
		if(y >= 0){
			cuadrante = 1;
		} else {
			cuadrante = 2;
		}
	} else {
		if(y >= 0){
			cuadrante = 3;
		} else {
			cuadrante = 4;
		}
	}

	cout << "El cuadrante de (" << x << ", " << y << ") es " << cuadrante << endl;
	return 0;
}
