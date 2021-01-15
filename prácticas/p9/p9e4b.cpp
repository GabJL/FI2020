#include <iostream>
#include <array>

using namespace std;

// Definición de tipos y constantes
const int MAX = 5;

typedef array<int, MAX> TFila;
typedef array<TFila, MAX> TMatriz;

// Funciones
int sumaDiagonalPrincipal(const TMatriz &m){
    int suma = 0;
    for(int i = 0; i < MAX; i++){
        suma += m[i][i];
    }
    return suma;
}

int sumaDiagonalSecundaria(const TMatriz &m){
    int suma = 0;
    int columna = MAX - 1;
    for(int i = 0; i < MAX; i++){
        suma += m[i][columna]; // Se podría haber evitado la var columna y poner MAX-i-1
        columna--;
    }
    return suma;
}

int sumaFila(const TMatriz &m, int fila){
    int suma = 0;
    for(int i = 0; i < MAX; i++){
        suma += m[fila][i];
    }
    return suma;
}

int sumaColumna(const TMatriz &m, int columna){
    int suma = 0;
    for(int i = 0; i < MAX; i++){
        suma += m[i][columna];
    }
    return suma;
}

bool es_magica(const TMatriz &m){
    bool magica = true;
    int valor = sumaDiagonalPrincipal(m); // todo debe sumar este valor

    if(valor != sumaDiagonalSecundaria(m)){ // Comprobamos si la otra diagonal lo suma
        magica = false;
    } else {
        int i = 0; 
        while(i < MAX && magica){
            magica = (valor == sumaFila(m, i)); // Miramos si la fila i suma valor
            magica = magica && (valor == sumaColumna(m,i)); // y si también la columna suma valor
            i++;
        }
    }
    return magica;
}

int main(){
    TMatriz m = {15, 8, 1, 24, 17, 16, 14, 7, 5, 23, 22, 20, 13, 6, 4, 3, 21, 19, 12, 10, 9, 2, 25, 18, 11};
    if(es_magica(m))    cout << "Es magica" << endl;
    else                cout << "No es magica" << endl;
    return 0;
}
