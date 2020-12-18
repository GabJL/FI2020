#include <iostream>
#include <array>

using namespace std;

// Constantes
const int N = 6;

// Tipos
typedef array<int, N> TClave;

// Funciones
string ordenar(string cifrado, const TClave &clave){
    string text = "";
    for(int i = 0; i < N; i++){
        text += cifrado[clave[i]];
    }
    return text;
}

void test(string cifrado, string ordenado, const TClave &clave){
    string res = ordenar(cifrado, clave);
    cout << "El texto " << cifrado << " se desencripta como " << res;
    if(ordenado == res){
        cout << " es correcto!" << endl;
    } else {
        cout << " pero es incorrecto. Debería ser " << ordenado << endl;
    }
}


int main(){
    test("PRUEBA", "PRUEBA", {0, 1, 2, 3, 4, 5});
    test("RPBAEU", "PRUEBA", {1, 0, 5, 4, 2, 3});
    test("ABEURP", "PRUEBA", {5, 4, 3, 2, 1, 0});
    test("PRUBAE", "PRUEBA", {0, 1, 2, 5, 3, 4});
    return 0;
}