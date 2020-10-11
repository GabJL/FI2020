#include <iostream>
#include <ctime>   // Tiempo
#include <cstdlib> // Numeros aleatorios

using namespace std;

// NO TOCAR
string Numero2Texto(int num){
    string texto;

    switch(num){
        case 1: texto = "Piedra"; break;
        case 2: texto = "Papel"; break;
        default: texto = "Tijera";
    }

    return texto;
}

int main(){
    // Declaracion de variables
    int jugadaCPU, jugadaJug;

    srand(time(0)); // Para usar los numeros aleatorios (semilla)

    // COMPLETAR: Mensaje de bienvenida/ayuda

    // NO TOCAR: Eleccion de la jugada del ordenador:
    cout << "Eligiendo la jugada del ordenador ..." << endl;
    jugadaCPU =  rand()%3 + 1;

    // COMPLETAR: Pedir la jugada al jugador

    // NO TOCAR: Mostrar las jugadas
    cout << "Ha elegido " << Numero2Texto(jugadaJug) << endl;
    cout << "El ordenador habia elegido " << Numero2Texto(jugadaCPU) << endl;

    // COMPLETAR: Decidir ganador (o empate) y mostrar por pantalla

    // FIN del programa
    return 0;
}
