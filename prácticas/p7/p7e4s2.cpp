#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 6;
typedef array<int, MAX> TArray;

// Funciones

bool son_encajables(const TArray &a, const TArray &b){
    bool iguales = true;
    int iA = 0, iB = 0;
    while(iA < MAX && iB < MAX && iguales){
        if(a[iA] < 0){ // Me salto el negativo de a
            iA++;
        } else if(b[iB] < 0){ // Me salto el negativo de b
            iB++;
        } else if(a[iA] == b[iB]){ // Ambos son positivos e iguales
            iA++;
            iB++;
        } else { // Ambos son positivos y diferentes
            iguales = false;
        }
    }

    // Si quedaron valores en a debe ser negativos
    while(iA < MAX && iguales){
        if(a[iA] >= 0){
            iguales = false;
        }
        iA++;
    }

    // Idem para b
    while(iB < MAX && iguales){
        if(b[iB] >= 0){
            iguales = false;
        }
        iB++;
    }

    return iguales;
}

void mostrar(const TArray &a){
    for(int i = 0; i < MAX; i++){
        cout << a[i] << " ";
    }
}

void test(const TArray &a, const TArray &b, bool cierto){
    cout << "El array [ ";
    mostrar(a);
    cout << "] y el array [";
    mostrar(b);
    cout << "]";
    if(!cierto){
        cout << " NO";
    }
    cout << " son encajables. ";
    if(cierto == son_encajables(a, b)){
        cout << " BIEN!" << endl;
    } else {
        cout << " MAL!" << endl;
    }
}

int main(){
    test({1, -3, 1, 14, -24, -4}, {-7, 1, 1, -8, -6, 14}, true);
    test({1, -3, 1, 14, -24, -4}, {-7, 1, 14, 1, -8, -6}, false);
    test({1, -3, 1, 14, -24, -4}, {1, 1, -8, -6, 14,  7}, false);

    return 0;
}
