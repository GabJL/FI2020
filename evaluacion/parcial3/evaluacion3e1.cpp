#include <iostream>
#include <array>

using namespace std;

// Constantes
const int N = 10;

// Tipos
typedef array<double, N> TArray;

bool es_positivo(const TArray &a){
    int i = 0;
    while(i < N && a[i] > 0) i++;
    return (i == N);
}

double maximo(const TArray &a){
    int maxi = a[0];
    for(int i = 1; i < N; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    return maxi;
}

void filtrar(TArray &a, double n){
    int pos = N-1;
    double filtro;
    if(n >= 0.5 && n <= 1.0 && es_positivo(a)){
        filtro = n*maximo(a);
        for(int i = N-1; i >= 0; i--){
            if(a[i] > filtro){
                a[i] = a[pos];
                a[pos] = 0;
                pos--;
            }
        }
    }
}

void mostrar(const TArray &a){
    cout << "[";
    for(int i = 0; i < N-1; i++){
        cout << a[i] << ", ";
    }
    cout << a[N-1] << "]";
}

void test(const TArray &a, double n, const TArray &filtrado){
    TArray b = a;
    cout << "Original: ";
    mostrar(a);
    cout << "\n\tTu codigo: ";
    filtrar(b, n);
    mostrar(b);
    cout << "\n\tCorrecto:  ";
    mostrar(filtrado);
    cout << " (los numeros diferentes de 0 pueden estar en otro orden)." << endl;
}

int main(){
    test({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 1.2, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    test({1, 2, 3, 0, 5, 6, 7, 8, 9, 10}, 0.8, {1, 2, 3, 0, 5, 6, 7, 8, 9, 10});
    test({4, 8, 2, 3, 9, 10, 1, 7, 4.5, 10}, 0.5, {4, 2, 3, 1, 4.5, 0, 0, 0, 0, 0});
    test({4, 8, 2, 3, 9, 10, 1, 7, 4.5, 10}, 0.99, {4, 8, 2, 3, 9, 4.5, 1, 7, 0, 0});
    test({9, 8, 8.5, 7, 9, 10, 10, 7, 9.5, 10}, 0.5, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    return 0;
}
