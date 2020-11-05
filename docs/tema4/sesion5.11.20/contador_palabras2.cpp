// Sentencias de selección: cantidad de palabras
#include <iostream>

using namespace std;

int main(){
	int cantidad = 0;
	char letra, anterior = ' ';

	cout << "Introduce un texto acabado en ENTER: ";
	letra = cin.get();
	while(letra != '\n'){
		if(letra != ' ' && anterior == ' '){ // Estamos en el inicio de una palabra
			cantidad++;
		}
		anterior = letra;
		letra = cin.get();
	}

	cout << "Hay " << cantidad << " palabras" << endl;
	return 0;
}
