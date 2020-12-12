#include <iostream>
#include <array>

using namespace std;

// constantes
const int MAX = 10;

// tipos
typedef array<int, MAX> TArray;

// Funciones
void mostrar(const TArray &a){
    for(int i = 0; i < MAX; i++){
        cout << a[i] << " ";
    }
}

void mover_negativos(TArray &a){
    int pos_esc = 0;
    TArray b;
    // Copiamos los negativos
    for(int pos_lect = 0; pos_lect < MAX; pos_lect++){
        if(a[pos_lect] < 0){
            b[pos_esc] = a[pos_lect];
            pos_esc++;
        }
    }
    // Copiamos los positivos (o 0)
    for(int pos_lect = 0; pos_lect < MAX; pos_lect++){
        if(a[pos_lect] >= 0){
            b[pos_esc] = a[pos_lect];
            pos_esc++;
        }
    }
    // Modificamos a para que tenga el nuevo orden
    a = b;
}


int main(){
    TArray a = {-1, 2, 5, -4, 7, -3, 9, 45, -2, -10};
    mover_negativos(a);
    mostrar(a);
    return 0;
}
