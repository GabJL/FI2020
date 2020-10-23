// Sentencia de repetición: centinelas y su uso en la condición
#include <iostream>
#include <cctype>

using namespace std;

const int REPETICIONES = 20;

int main(){
	int veces = 0;
	char letra;
	bool hay_vocales = false; // Aún no hemos visto ninguna vocal
	
	cout << "Escribe " << REPETICIONES << " letras: ";
	while(veces < REPETICIONES && !hay_vocales){
		cin >> letra;
		letra = tolower(letra); // Así solo necesitamos comparar minúsculas
		if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			hay_vocales = true; // Hemos visto una vocal
		} // No poner un else ya que no hay que poner a false el valor
		veces++;
	}

	if(hay_vocales){
		cout << "Aparecen vocales en el texto" << endl;
	} else {
		cout << "No hay ninguna vocal en el texto" << endl;
	}

	return 0;
}
