#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX_NOTAS = 3*30;

// Tipos
typedef array<double, MAX_NOTAS> TNotas;

// Funciones
void leer_notas(TNotas &n){
    int pos;
    double nota;

    for(int i = 0; i < 5; i++){
        cout << "Alumno: "; cin >> pos;
        cout << "Nota: "; cin >> nota;
        n[pos] = nota;
    }
}

void mostrar_notas_G2(const TNotas &n){
    for(int i = 30; i < 60; i++){
        if(n[i] != -1){
            cout << "El alumno " << i << " ha sacado un " << n[i] << endl;
        }
    }
}

int cantidad_alumnos_suspensos(const TNotas &n){
    int res = 0;
    for(int i = 0; i < MAX_NOTAS; i++){
        if(n[i] < 5 && n[i] != -1){// Esta suspenso
            res++;// Incrementar la cantidad de alumnos suspensos
        }
    }
    return res;
}

int cantidad_sobresalientes(const TNotas &n){
    int res = 0;
    for(int i = 0; i < MAX_NOTAS; i++){
        if(n[i] >= 9){// Es sobresaliente
            res++;// Incrementar la cantidad de alumnos suspensos
        }
    }
    return res;
}

bool hay_matricula_honor(const TNotas &n){
    // bool encontrado_mh = false;
    int i = 0; 
    while(i < MAX_NOTAS && n[i] != 10){ // No he llegado al final Y no he encontrado una MH
        i++;
    }
    return (i < MAX_NOTAS); // he acabado antes de llegar al final
}

int main(){
    TNotas n;

    for(int i = 0; i < MAX_NOTAS; i++){
        n[i] = -1; // i = 0, 1, 2, ..., MAX_NOTAS -1
    }

    // leer_notas(n);
    n[4] = 10; n[50] = 3; n[43] = 9; n[78] = 10;

    mostrar_notas_G2(n);

    cout << "Alumnos suspensos " << cantidad_alumnos_suspensos(n) << endl;

    cout << "Alumnos con sobresaliente " << cantidad_sobresalientes(n) << endl;

    return 0;
}
