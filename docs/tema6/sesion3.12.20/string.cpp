#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void pasarMayuscula(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    string palabra, mayor, mas_corta, acronimo;
    int contador = 0;

    cout << "Diga palabras acabadas en FIN: ";

    cin >> palabra;
    mayor = mas_corta = palabra;
    while(palabra != "FIN"){
        contador++;
        if(palabra > mayor) mayor = palabra;
        if(palabra.size() < mas_corta.size()) mas_corta = palabra;
        acronimo += palabra[0];
        cin >> palabra;
    }

    cout << "Se han leido " << contador << " palabras validas" << endl;
    cout << "La palabra mayor es: " << mayor << endl;
    cout << "La palabra mas corta es: " << mas_corta << endl;
    pasarMayuscula(acronimo);
    cout << "El acronimo es " << acronimo << endl;

    return 0;
}
