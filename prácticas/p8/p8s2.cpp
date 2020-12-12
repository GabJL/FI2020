#include <iostream>
#include <string>
#include <cctype> // Para toupper y tolower

using namespace std;

bool es_separador(char c){
    return c == ' ' || c == '\t' || c == '\n';
}

string corregir_texto(string &text){
    string corregido = "";
    int ini = 0, fin = text.size()-1;

    // Vemos donde empezar y acabar
    while(ini <= fin && es_separador(text[ini])) ini++;
    while(fin >= ini && es_separador(text[fin])) fin--;

    if(ini <= fin){ // Si hay algo que copiar
        corregido += toupper(text[ini]); // Copiamos la primera para tener algo
        // Copiamos y corregimos
        for(int i = ini+1; i <= fin; i++){
            if(es_separador(text[i])){ // Nos encontramos un espacio
                if(!es_separador(corregido[corregido.size()-1])){ // Si no había separado lo añadimos
                    corregido += " ";
                } // Si ya había uno, no ponemos el " " y no hacemos nada (no hay else)
            } else { // Nos encontramos una letra
                if(es_separador(corregido[corregido.size()-1])){ // Es la primera de la palabra -> Mayúscula
                    corregido += toupper(text[i]);
                } else {
                    corregido += tolower(text[i]);
                }
            }
        }
    }

    // Ahora el punto final si no lo tiene
    if(corregido[corregido.size()-1] != '.'){
        corregido += ".";
    }

    return corregido;
}

void test(string s, string s_c){
    string s1 = corregir_texto(s);
    cout << "Es \"" << s1 << "\" igual a \"" << s_c << "\"? ";
    if(s1 == s_c){
        cout << "SI. Bien!" << endl;
    } else {
        cout << "No. Mal :(" << endl;
    }

}

int main(){
    test("hOla", "Hola.");
    test("hOla    que   \ntal", "Hola Que Tal.");
    test("       \nhola\n    que tal     ", "Hola Que Tal.");
    test("       \nhola\n    que tal.     ", "Hola Que Tal.");
    test("  \t\n   ", ".");
    test("", ".");
    test("\t.\t", ".");
    test("  a b  ", "A B.");
    test(".A\n", ".a.");

    return 0;
}
