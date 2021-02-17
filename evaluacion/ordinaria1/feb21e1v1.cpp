#include <iostream>
#include <array>

using namespace std;

const int MAX = 30;

typedef array<int, MAX> TArray;

typedef struct{
    TArray valores;
    int tam;
} TLista;

int frecuencia(const TLista &l, int valor){
    int contador = 0;
    for(int i = 0; i < l.tam; i++){
        if(l.valores[i] == valor){
            contador++;
        }
    }
    return contador;
}

void buscar_frecuencias(const TLista &l, int &menor, int &mayor){
    int frec_menor, frec_mayor, frec_aux;
    if(l.tam > 0){
        frec_menor = frec_mayor = frecuencia(l, l.valores[0]);
        menor = mayor = l.valores[0];
        for(int i = 1; i < l.tam; i++){
            frec_aux = frecuencia(l, l.valores[i]);
            if(frec_aux < frec_menor){
                menor = l.valores[i];
                frec_menor = frec_aux;
            }
            if(frec_aux > frec_mayor){
                mayor = l.valores[i];
                frec_mayor = frec_aux;
            }

        }
    }
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
