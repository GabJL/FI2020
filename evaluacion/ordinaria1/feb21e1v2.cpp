#include <iostream>
#include <array>

using namespace std;

const int MAX = 30;

typedef array<int, MAX> TArray;

typedef struct{
    TArray valores;
    int tam;
} TLista;

typedef struct{
    int valor;
    int cantidad;
} TValor;

typedef array<TValor, MAX> TFrec;

typedef struct{
    TFrec v;
    int tam;
} TFrecuencia;

void inicializar(TFrecuencia &f){
    f.tam = 0;
}

int buscar(const TFrecuencia &f, int v){
    int i = 0;
    while(i < f.tam && f.v[i].valor != v) i++;
    if(i == f.tam) i = -1;
    return i;
}

void insertar(TFrecuencia &f, int v){
    int pos = buscar(f,v);
    if(pos != -1){
        f.v[pos].cantidad++;
    } else {
        f.v[f.tam].valor = v;
        f.v[f.tam].cantidad = 1;
        f.tam++;
    }
}

void mayor_y_menor(const TFrecuencia &f, int &mayor, int &menor){
    int frec_menor, frec_mayor, frec_aux;
    if(f.tam > 0){
        frec_menor = frec_mayor = f.v[0].cantidad;
        menor = mayor = f.v[0].valor;
        for(int i = 1; i < f.tam; i++){
            frec_aux = f.v[i].cantidad;
            if(frec_aux < frec_menor){
                menor = f.v[i].valor;
                frec_menor = frec_aux;
            }
            if(frec_aux > frec_mayor){
                mayor = f.v[i].valor;
                frec_mayor = frec_aux;
            }

        }
    }
}

void buscar_frecuencias(const TLista &l, int &menor, int &mayor){
    TFrecuencia f;
    inicializar(f);
    for(int i = 0; i < l.tam; i++){
        insertar(f, l.valores[i]);
    }
    mayor_y_menor(f, mayor, menor);
}

int main(){
    TLista l = {
        {{3, 5, 3, 6, -4, 3, 5, -4, 12, -4, 6, 3, -1}},
        13
    };
    int mayor, menor;
    buscar_frecuencias(l, menor, mayor);
    cout << "El mas frecuente es " << mayor << " y el menos es " << menor << endl;
}
