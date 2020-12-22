#include <iostream>
#include <array>
#include <string>
#include <cctype>
#include "hangman.hpp"
using namespace std;

// CONSTANTES
const int MAX_FALLOS = 6;

// Funciones
string crearString(string s){
	string texto;

	texto = "";
	for(int i = 0; i < s.size(); i++){
		if( (s[i] >= '0' and s[i] <= '9') or // Es un numero
			(tolower(s[i]) >= 'a' and  tolower(s[i])) ){ // o es una letra
			texto += '_';
		} else {
			texto += s[i];
		}
	}

	return texto;
}

int cantidadVeces(string s, char l){
	int contador = 0;

	for(int i = 0; i < s.size(); i++){
		if(tolower(s[i]) == tolower(l)){
			contador++;
		}
	}

	return contador;
}

void reemplazar(string s, string &a, char l){
	int contador = 0;

	for(int i = 0; i < s.size(); i++){
		if(tolower(s[i]) == tolower(l)){
			a[i] = s[i];
		}
	}
}

bool hayGuiones(string s){
	int i = 0;
	while(i < s.size() and s[i] != '_') i++;
	return i < s.size();
}

// Programa principal
int main()
{
    // Ejemplo de uso debe borrarse y adaptarse a lo planteado en el practica
    // Para su funcionamiento el fichero peliculas.txt y hangman.hpp (codigo extra) debe estar 
    // en la misma carpeta que este fichero
    limpiarPantalla();
    dibujarTitulo("Gabriel Luque");
    pausa();
    limpiarPantalla();
    cout << "Pelicula a adivinar: ";
    string secreta = seleccionarPeliAzar();
    cout << secreta << endl;
    pausa();

	char letra;
	int veces, tam = 0, fallo = 0; 
	string adivinado = crearString(secreta);

    do{
        limpiarPantalla();
        cout << "Muneco con " << fallo << " fallos" << endl;
        dibujarHangman(fallo);

		cout << "Pelicula/serie: " << adivinado << endl;
		cout << "Diga una letra: ";
		cin >> letra;
		veces = cantidadVeces(secreta, letra);
		if(veces == 0){
			cout << "Lo siento la letra " << letra << " no esta" << endl;
			fallo++;
		} else {
			cout << "Enhorabuena, hay " << veces << " letra " << letra << endl;
			reemplazar(secreta, adivinado, letra);
		}
		pausa();    
    }while(hayGuiones(adivinado) and fallo <= MAX_FALLOS);

	limpiarPantalla();

	if(!hayGuiones(adivinado)){
		cout << "Enhorabuena! ";
	} else {
		cout << "Mala suerte! ";
	}
	cout << "La pelicula/serie era: " << secreta << endl;
	
    return 0;
}


