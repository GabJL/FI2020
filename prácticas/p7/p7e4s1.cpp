#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 6;
typedef array<int, MAX> TArray;

// Funciones
void inicializar(TArray &a){
    for(int i = 0; i < MAX; i++){
        a[i] = 0;
    }
}

TArray solo_positivos(const TArray &a){
    TArray b;
    int pos_b = 0;

    inicializar(b);
    for(int i = 0; i < MAX; i++){
        if(a[i] >= 0){
            b[pos_b] = a[i];
            pos_b++;
        }
    }
    return b;
}

bool son_encajables(const TArray &a, const TArray &b){
    TArray positivos_a = solo_positivos(a);
    TArray positivos_b = solo_positivos(b);

    return (positivos_a == positivos_b);
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
