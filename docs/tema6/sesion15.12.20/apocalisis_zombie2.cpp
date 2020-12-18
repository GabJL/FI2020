#include <iostream>
#include <array>

using namespace std;

// Constantes
const int N = 10;
const int M = 15;

// Tipos
typedef array<int, M> TFila;
typedef array<TFila, N> TMatriz;

void inicializar(TMatriz &m, int x1, int y1, int x2, int y2){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            m[i][j] = 0;
        }
    }
    m[x1][y1] = m[x2][y2] = 1;
}

bool llena(const TMatriz &m){
    bool hay0s = false;
    int i = 0, j = 0;
    while(i < N && !hay0s){
        j = 0;
        while(j < M && !hay0s){
            if(m[i][j] == 0){
                hay0s = true;
            }
            j++;
        }
        i++;
    }
    return !hay0s;
}

bool es_valido(int i, int j){
    return ((i >= 0) && (j >= 0) && (i < N) && (j < M));
}

int minvecino(const TMatriz &m, int x, int y){
    int menor = N*M;
    for(int i = x-1; i <= x+1; i++){
        for(int j = y-1; j <= y+1; j++){
            if(es_valido(i,j) && m[i][j] != 0 && m[i][j] < menor){
                menor = m[i][j];
            }
        }
    }
    if(menor == N*M){
        menor = -1;
    }
    return menor;
}

void actualizar(TMatriz &m){
    TMatriz m1 = m;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(m[i][j] == 0){
                m1[i][j] = minvecino(m,i,j)+1;
            } 
        }
    }
    m = m1;
}

void mostrar(const TMatriz &m){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

TMatriz generar(int x1, int y1, int x2, int y2){
    TMatriz m;
    inicializar(m, x1, y1, x2, y2);
    cout << "Inicial: " << endl;
    mostrar(m);
    while(!llena(m)){
        actualizar(m);
        cout << "Nuevo dia: " << endl;
        mostrar(m);
    }
    
    return m;
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