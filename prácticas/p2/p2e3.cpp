// Ejercicio 3: Clasificar letra
#include <iostream>
#include <cctype> // Para usar tolower 

using namespace std;

int main(){
	char c;

	cout << "Escriba una letra: ";
	cin >> c;

	c = tolower(c); // Convierte c en minúscula

	cout << "El caracter " << c << " es ";
	if(c >= 'a' && c <= 'z'){ // ¿Es una letra?
		if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ // Sabemos que es una letra y comprobamos si es una vocal
			cout << "una vocal" << endl;
		} else { // es una consonante ya que no es vocal
			cout << "una consonante" << endl;
		}
	} else if(c >= '0' && c <= '9'){ // ¿Es un dígito?
		cout << "un numero" << endl;
	} else { // Si no es letra ni número es un símbolo
		cout << "un símbolo" << endl;
	}

	return 0;
}
