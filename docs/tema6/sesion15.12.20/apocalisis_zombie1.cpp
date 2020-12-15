#include <iostream>
#include <array>

using namespace std;

// Constantes
const int N = 10;
const int M = 15;

// Tipos
typedef array<int, M> TFila;
typedef array<TFila, N> TMatriz;

int minimo(int a, int b){
    int mini = a;
    if(a  > b){
        mini = b;
    }
    return mini;
}

int maximo(int a, int b){
    int maxi = a;
    if(a  < b){
        maxi = b;
    }
    return maxi;
}

int abs(int n){
    if(n < 0){
        n = -n;
    }
    return n;
}

int distancia(int x1, int y1, int x2, int y2){
    return maximo(abs(x1-x2), abs(y1-y2))+1;
}

TMatriz generar(int x1, int y1, int x2, int y2){
    TMatriz m;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            m[i][j] = minimo (distancia(i, j, x1, y1), distancia(i, j, x2, y2));
        }
    }
    
    return m;
}

void mostrar(const TMatriz &m){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    TMatriz m;
    int x1, x2, y1, y2;

    cout << "Dime las coordenadas del primer sitio: ";
    cin >> x1 >> y1;

    cout << "Dime las coordenadas del segundo sitio: ";
    cin >> x2 >> y2;

    m = generar(x1, y1, x2, y2);
    cout << "La propagacion queda de la siguiente forma: " << endl;
    mostrar(m);

    return 0;
}