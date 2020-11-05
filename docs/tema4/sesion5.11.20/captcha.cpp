// Sentencias de repetición: captcha
#include <iostream>

using namespace std;

int main(){
    char letra;
    int digito, numero = 0;
    cout << "Introduce la palabra: ";
    // Leer letras hasta encontrar el salto de linea (ENTER)
    letra = cin.get(); // Lectura adelantada
    cout << "Palabra: ";
    while(letra != '\n' ){ // El '\n' es el ENTER ('\t' tabulador)
        // Hago cosas con letra
        // Si no es 0 a 9 -> Escribir
        if(letra < '0' || letra > '9'){
            cout << letra;
        } else { // si es un numero
            digito = letra - '0'; // int(letra) - int('0'); // debo convertirlo a número
            numero = numero*10 + digito; // y acumularlo
        }
        letra = cin.get();
    }
    cout << endl << "Numero: " << numero << endl;


    return 0;
}
