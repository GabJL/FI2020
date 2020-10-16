// Ejercicio 2: Índice de masa corporal
#include <iostream>

using namespace std;

int main(){
	double peso, altura, IMC;

	cout << "Dime tu peso (en Kg): ";
	cin >> peso;
	cout << "Fime tu altura (en m): ";
	cin >> altura;

	// Calculamos el IMC
	IMC = peso/(altura*altura);

	if(IMC < 16){
		cout << "Ingreo en el Hospital" << endl;
	} else if(IMC < 18){
		cout << "Bajo peso" << endl;
	} else if(IMC < 25){
		cout << "Peso normal" << endl;
	} else if(IMC < 35){
		cout << "Sobrepeso" << endl;
	} else {
		cout << "Obesidad" << endl;
	}

	return 0;
}
