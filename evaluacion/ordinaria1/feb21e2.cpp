#include <iostream>
#include <array>

using namespace std;

const int MAX_PER = 500;

// Tipos (Apartado A/B)
typedef struct{
    string nombre;
    string actor, serie;
    int votos;
} TPersonaje;

typedef array<TPersonaje, MAX_PER> TArrayPersonajes;

typedef struct{
    TArrayPersonajes per;
    int tam;
} TListaPersonajes;

// Funciones (Apartado A)

int buscar_personaje(const TListaPersonajes &lp, string nombre, string actor, string serie){
    int pos = -1;
    int i = 0;

    while(i < lp.tam && pos == -1){
        if(lp.per[i].nombre == nombre && lp.per[i].actor == actor && lp.per[i].serie == serie){
            pos = i;
        }
        i++;
    }

    return pos;
}

bool lleno(const TListaPersonajes &lp){
    return lp.tam == MAX_PER;
}

void insertar_personaje(TListaPersonajes &lp, string nombre, string actor, string serie){
    lp.per[lp.tam].actor = actor;
    lp.per[lp.tam].nombre = nombre;
    lp.per[lp.tam].serie = serie;
    lp.per[lp.tam].votos = 1;
    lp.tam++;
}

bool incluir_voto(TListaPersonajes &lp, string nombre, string actor, string serie){
    int pos = buscar_personaje(lp, nombre, actor, serie);
    bool insertado = true;
    if(pos == -1){
        if(lleno(lp)){
            insertado = false;
        } else {
            insertar_personaje(lp, nombre, actor, serie);
        }
    } else {
        lp.per[pos].votos++;
    }
    return insertado;
}

// Apartado B
void mejor_de_la_serie(const TListaPersonajes &lp, string serie, TPersonaje &p){
    bool encontrado = false;
    for(int i = 0; i < lp.tam; i++){
        if(lp.per[i].serie == serie){
            if(!encontrado){
                p = lp.per[i];
                encontrado = true;
            } else if(p.votos < lp.per[i].votos){
                p = lp.per[i];
            }
        }
    }
}

// Tipos y constantes (Apartado C)
const int MAX_SER = 20;
const int MAX_PER_SER = 10;

typedef array<string, MAX_PER_SER> TNombres;

typedef struct{
    string serie;
    int num_personajes;
    TNombres personajes;
} TSerie;

typedef array<TSerie, MAX_SER> TSeries;

typedef struct{
    string actor;
    int num_series;
    TSeries series;
} TActor;

// Funciones (Apartado C)
int buscar_serie(const TActor &a, string s){
    int i = 0; 
    while(i < a.num_series && a.series[i].serie != s){
        i++;
    }
    if(i == a.num_series) i = -1;
    return i;
}

bool esta(const TActor &a, string s){
    return buscar_serie(a, s) != -1;
}

void insertar_serie(TActor &a, string s){
    if(!esta(a, s)){
        a.series[a.num_series].serie = s;
        a.series[a.num_series].num_personajes = 0;
        a.num_series++;
    }
}

void anadir_series(const TListaPersonajes &lp, TActor &a){
    for(int i = 0; i < lp.tam; i++){
        if(lp.per[i].actor == a.actor){
            insertar_serie(a, lp.per[i].serie);
        }
    }
}

void anadir_personajes(const TListaPersonajes &lp, TActor &a){
    int pos;
    for(int i = 0; i < lp.tam; i++){
        pos = buscar_serie(a, lp.per[i].serie);
        if(pos != -1){
            a.series[pos].personajes[a.series[pos].num_personajes] = lp.per[i].nombre;
            a.series[pos].num_personajes++;
        }
    }
}

void actor_participa(const TListaPersonajes &lp, string actor, TActor &a){
    a.actor = actor;
    a.num_series = 0;
    anadir_series(lp, a);
    anadir_personajes(lp, a);    
}

// Auxiliares
void mostrar_personajes(const TListaPersonajes &lp){
    for(int i = 0; i < lp.tam; i++){
        cout << lp.per[i].nombre << " de " << lp.per[i].serie 
             << " (" << lp.per[i].actor << "): " << lp.per[i].votos << endl;
    }
}

void mostrar_actor(const TActor &a){
    cout << endl <<  "El actor " << a.actor << " participa en: " << endl;
    for(int i = 0; i < a.num_series; i++){
        cout << "- " << a.series[i].serie << " ( ";
        for(int j = 0; j < a.series[i].num_personajes; j++){
            cout << a.series[i].personajes[j] << " ";
        }
        cout << ")" << endl;
    }
}

int main(){
    TListaPersonajes lp = {
        {{
            {"Marianne", "Emilia Clarke", "Futurama", 5},
            {"Escobar", "Wagner Moura", "Narcos", 28},
            {"Oberyn Martell", "Pedro Pascal", "Juego de Tronos", 10},
            {"Din Djarin", "Pedro Pascal", "El Mandaloriano", 20},
            {"Jon Nieve", "Kit Harington", "Juego de Tronos", 50},
            {"Tyrion Lannister", "Peter Dinklage", "Juego de Tronos", 75},
            {"Cara Dune", "Gina Carano", "El Mandaloriano", 7},
            {"Javier Pena", "Pedro Pascal", "Narcos", 30},
            {"Daenerys Targaryen", "Emilia Clarke", "Juego de Tronos", 70},
            {"Moff Gideon", "Giancarlo Esposito", "El Mandaloriano", 7}
        }},
        10
    };

    cout << "Lista inicial: " << endl;
    mostrar_personajes(lp);
    cout << endl << "Tras incluir voto a Daenerys Targaryen" << endl;
    incluir_voto(lp, "Daenerys Targaryen", "Emilia Clarke", "Juego de Tronos");
    mostrar_personajes(lp);
    cout << endl <<  "Tras incluir voto a Antony Starr (Patriota en The Boys)" << endl;
    incluir_voto(lp, "Patriota", "Antony Starr", "The Boys");
    mostrar_personajes(lp);

    TPersonaje p;
    mejor_de_la_serie(lp, "Juego de Tronos", p);
    cout << endl <<  "El mas votado de Juego de Tronos es " << p.nombre << endl;
    mejor_de_la_serie(lp, "El Mandaloriano", p);
    cout << endl <<  "El mas votado de El Mandaloriano es " << p.nombre << endl;
    mejor_de_la_serie(lp, "Futurama", p);
    cout << endl <<  "El mas votado de Futurama es " << p.nombre << endl;

    TActor a;
    actor_participa(lp, "Pedro Pascal", a);
    mostrar_actor(a);
    actor_participa(lp, "Emilia Clarke", a);
    mostrar_actor(a);
    actor_participa(lp, "Peter Dinklage", a);
    mostrar_actor(a);
    actor_participa(lp, "Santiago Segura", a);
    mostrar_actor(a);

    return 0;
}
