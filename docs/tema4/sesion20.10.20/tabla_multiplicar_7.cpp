// Sentencias de repetición: Tabla de multiplicar
// Este ejercicio sería más adecuado hacerlo con for pero aún no lo hemos visto
#include <iostream>

using namespace std;

int main(){
	int num = 1;

	while(num <= 10){
		cout << "7 x " << num << " = " << 7*num << endl;
		num++;
	}
	return 0;
