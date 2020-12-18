#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 3;

// Tipos
typedef array<double, MAX> TFila;
typedef array<TFila, MAX> TMatriz;

// Funciones
bool valores_correctos(const TMatriz &m){
    bool correcto = true;
    int i = 0, j = 0;
    while(i < MAX && correcto){
        j = 0;
        while(j < MAX && correcto){
            correcto = (m[i][j] >= 0.0 && m[i][j] <= 1.0);
            j++;
        }
        i++;
    }
    return correcto;
}

double suma_fila(const TMatriz &m, int fila){
    double suma = 0.0;
    for(int col = 0; col < MAX; col++){
        suma += m[fila][col];
    }
    return suma;
}

bool filas_suman_1(const TMatriz &m){
    int i = 0;
    while (i < MAX && suma_fila(m, i) == 1.0) i++;
    return (i == MAX);
}

double suma_columna(const TMatriz &m, int col){
    double suma = 0.0;
    for(int fila = 0; fila < MAX; fila++){
        suma += m[fila][col];
    }
    return suma;
}

bool columnas_suman_1(const TMatriz &m){
    int i = 0;
    while (i < MAX && suma_columna(m, i) == 1.0) i++;
    return (i == MAX);
}


bool es_doblemente_estocastica(const TMatriz &m){
    return valores_correctos(m) && filas_suman_1(m) && columnas_suman_1(m);
}

int main(){
    TMatriz m1 = {{ {0.5, 0.2, 0.3},
                   {0.2, 0.3, 0.5},
                   {0.3, 0.5, 0.2} }};
    
    if(es_doblemente_estocastica(m1)){
        cout << "m1 es doblemente estocastica. OK!" << endl;
    } else {
        cout << "m1 no es doblemente estocastica. Upps, no deberia decir esto. ERROR!" << endl; 
    }

    TMatriz m2 = {{ {1, 0, 0},
                   {0, 1, 0},
                   {0, 0, 1} }};
    
    if(es_doblemente_estocastica(m2)){
        cout << "m2 es doblemente estocastica. OK!" << endl;
    } else {
        cout << "m2 no es doblemente estocastica. Upps, no deberia decir esto. ERROR!" << endl; 
    }

    TMatriz m3 = {{ {0.5, 0.2, 0.3},
                   {0.2, 0.4, 0.5},
                   {0.3, 0.5, 0.2} }};
    
    if(es_doblemente_estocastica(m3)){
        cout << "m3 es doblemente estocastica. Upps, no deberia decir esto. ERROR!" << endl;
    } else {
        cout << "m3 no es doblemente estocastica. OK!" << endl; 
    }

    TMatriz m4 = {{ {-0.1, 0.7, 0.4},
                   {0.7, 0.4, -0.1},
                   {0.4, -0.1, 0.7} }};
    
    if(es_doblemente_estocastica(m4)){
        cout << "m4 es doblemente estocastica. Upps, no deberia decir esto. ERROR!" << endl;
    } else {
        cout << "m4 no es doblemente estocastica. OK!" << endl; 
    }
}

