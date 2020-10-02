/*
    Descripción: Dada el tiempo (en Km) y el tiempo (en minutos) que se tardó un recorrido
    nos devuelve la velocidad media del viaje (en km/h)
*/
#include <iostream>

using namespace std;

int main(){
    // Definimos las variables a utilizar
    int distancia, tiempo; // en km y minutos respectivamente
    double velocidad, horas; // en km/h la velocidad

    // Obtenemos los datos (tiempo y distancia)
    cout << "Cuantos km hiciste? ";
    cin >> distancia;

    cout << "En cuanto tiempo? ";
    cin >> tiempo;

    // Calculamos las horas
    // Nota que tiempo/60 es todo entero y dará un número entero. 
    // Para conseguir que sea real, algo de la expresión debe ser real:
    // Opción 1: tiempo/60.0 <- Ahora el 60 es real y la división la hará con decimales
    // Opción 2: double(tiempo)/60 <- Le decimos explícitamente que considere tiempo como real
    // Opción 3: (tiempo*1.0)/60 <- Al multiplicar tiempo * 1.0 (que es real) el resultado es real
    horas = tiempo/60.0;

    // Ahora calculamos la velocidad media
    // Nota que ahora como horas ya es real no dará problemas la división
    velocidad = distancia/horas;

    // Mostramos el resultado
    cout << "La velocidad media fue " << velocidad << " km/h" << endl;

    return 0;
}