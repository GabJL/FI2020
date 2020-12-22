#include <iostream>
#include <array>

using namespace std;

// constantes
const int MAX_FIL = 3;
const int MAX_COL = 4;

// tipo
typedef array<double, MAX_COL> TFila;
typedef array<TFila, MAX_FIL> TMatriz;

// funciones
bool es_valida(int i, int j){
    return i >= 0 && i < MAX_FIL && j >= 0 && j < MAX_COL;
}

bool es_maximo(const TMatriz &m, int i, int j){
    int fila = -1, col = -1;
    bool maximo = true;
    while(fila <= 1 && maximo){
        col = -1;
        while(col <= 1 && maximo){
            if(es_valida(i+fila, j+col) && m[i+fila][j+col] > m[i][j]){
                maximo = false;
            }
            col++;
        }
        fila++;
    }
    return maximo;
}

void maximo_relativo(const TMatriz &m, int &i, int &j){
    i = j = -1;
    int fila = 0, col = 0;
    while(fila < MAX_FIL && i == -1){
        col = 0;
        while(col < MAX_COL && i == -1){
            if(es_maximo(m, fila, col)){
                i = fila;
                j = col;
            }
            col++;
        }
        fila++;
    }
    
}

void test(const TMatriz &m, int i_c, int j_c){
    int i, j;
    cout << "La posicion del maximo es (" << i_c << ", " << j_c << ") ";
    maximo_relativo(m, i, j);
    cout << " y tu programa dice que es (" << i << ", " << j << ").";
    if(i_c == i && j_c == j){
        cout << " Correcto!!!" << endl;
    } else {
        cout << " Has fallado vilmente :(" << endl;
    }
}

int main(){
    TMatriz m1 = {{ {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12} }};

    test(m1, 2, 3);

    m1 = {{ {7, 2, 3, 4},
            {5, 6, 15, 8},
            {9, 10, 11, 12} }};

    test(m1, 0, 0);

    m1 = {{ {1, 2, 3, 4},
            {5, 6, 15, 8},
            {9, 10, 11, 12} }};

    test(m1, 1, 2);

    return 0;
}