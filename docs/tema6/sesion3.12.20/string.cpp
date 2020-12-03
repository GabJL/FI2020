#include <iostream>
#include <string>
#include <cctype> // Para usar el toupper

using namespace std;

// Funciones
void pasar_a_mayuscula(string &palabra){
    int tam = palabra.size();
    for(int i = 0; i < tam;i++){
        palabra[i] = toupper(palabra[i]);
    }
}

// acortar_acronimo:
// Si tiene <= 3 letras -> No hace nada
// Sino -> Devuelve una nueva palabra que contenga 3 letras: las dos primeras y la última del acronimo
string acortar_acronimo(string acronimo){
    string nuevo_acronimo = acronimo;
    if(acronimo.size() > 3){
        nuevo_acronimo = "" + acronimo[0] + acronimo[1] + acronimo[acronimo.size()-1];
    }
    return nuevo_acronimo;
}

int main(){
    string palabra, mayor = "", mas_corta, acronimo = "";
    int contador = 0;
    
    cout << "Diga unas palabras acabadas en FIN: ";
    cin >> palabra;
    mayor = palabra;
    mas_corta = palabra;
    while(palabra != "FIN"){
        // Hacer lo que se pida con palabras
        contador++;
        if(palabra > mayor){
            mayor = palabra;
        }

        if(palabra.size() < mas_corta.size()){
            mas_corta = palabra;
        }

        acronimo = acronimo + palabra[0];

        cin >> palabra;
    }

//    char letra = 'a';
//    char letra_may = toupper(letra);
    pasar_a_mayuscula(acronimo);
    cout << "El acronimo es: " << acortar_acronimo(acronimo) << endl;
    cout << "La cantidad de palabras han sido " << contador << endl;
    cout << "La mayor palabra fue " << mayor << endl;
    cout << "La palabra mas corta es " << mas_corta << " con tamanio " << mas_corta.size() << endl;

    return 0;
}
