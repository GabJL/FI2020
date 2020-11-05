// Sentencias de selección: cantidad de palabras
#include <iostream>

using namespace std;

int main(){
	int cantidad = 0;
	char letra;

	cout << "Introduce un texto acabado en ENTER: ";
	letra = cin.get();
	while(letra != '\n'){
		while(letra == ' '){ // Espacios antes de la palabra
  		letra = cin.get();
		}
    
    if(letra != '\n'){ // La contamos si realmente es una palabra
      cantidad++;  
    }
    
    whil(letra != ' ' && letra != '\n'){ // Nos saltamos la palabra
      letra = cin.get();
    }
  }
	cout << "Hay " << cantidad << " palabras" << endl;
	return 0;
}
