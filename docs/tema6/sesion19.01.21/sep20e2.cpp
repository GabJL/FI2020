#include <iostream>
#include <array>

using namespace std;

const int MAX_EVENTOS = 100;

typedef struct{
    string dni;
    string edificio;
    double hora;
    int dia;
} TEvento;

typedef array<TEvento, MAX_EVENTOS> TArrayEventos;

typedef struct{
    TArrayEventos eventos;
    int tam;
} TListaEventos;

int numero_registros(const TListaEventos &l, const TEvento &e){
    int contador = 0;
    for(int i = 0; i < l.tam; i++){
        if(l.eventos[i].dni == e.dni && l.eventos[i].edificio == e.edificio
           && l.eventos[i].dia == e.dia){
            contador++;
        }
    }

    return contador;
}

bool anyadir_registro(TListaEventos &l, const TEvento &e){
    int cantidad = numero_registros(l, e);
    bool insertado;
    if(cantidad < 2){
        if(l.tam < MAX_EVENTOS){
            insertar(l,e);
            insertado = true;
        } else {
            insertado = false;
        }
    } else { // hay 2 eventos de ese usuario, ese dia y ese edificio
        int pos = busca_hora_mayor(l, e);
        l.eventos[pos].hora = e.hora;
        insertado = true;
    }
    return insertado;
}

int main(){
    return 0;
}
