// Deducir si la cadena abc está en un texto
// Solución con estados

#include <iostream>

using namespace std;

// Posibles estados (los valores da un poco igual)
const int ESPERANDO_A = 1;
const int ESPERANDO_B = 2;
const int ESPERANDO_C = 3;

int main(){
	int estado = ESPERANDO_A;
	char letra;
	bool encontrado = false;

	cout << "Dime un texto acabado en punto: ";
	cin >> letra;

	while(letra != '\n'){
		if(letra == 'a') estado = ESPERANDO_B;
		else if(letra == 'b' && estado == ESPERANDO_B) estado = ESPERANDO_C;
		else if(letra == 'c' && estado == ESPERANDO_C) encontrado = true;
		else estado = ESPERANDO_A;

		cin >> letra;
	}

	if(encontrado) cout << "La cadena abc SI esta en el texto" << endl;
	else cout << "La cadena abc NO esta en el texto" << endl;

	return 0;
}
