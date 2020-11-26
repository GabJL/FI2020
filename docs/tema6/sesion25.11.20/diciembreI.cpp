#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX_DIAS = 31;
// Definición de tipos
typedef array<int, MAX_DIAS> THorasEstudio;

// Prototipos o funciones
THorasEstudio pedir_horas_estudio();
int calcular_horas_total(const THorasEstudio &h);

int main(){
    THorasEstudio horas;
    int total_h, dia;

    horas = pedir_horas_estudio();

    total_h = calcular_horas_total(horas);
    cout << "En diciembre estudiaras " << total_h << " horas " << endl;

    return 0;
}

// Funciones si se usa prototipos
THorasEstudio pedir_horas_estudio(){
    THorasEstudio res;
    int dia;
    // Posicion es el día - 1
    // Dia es la posicion + 1
    for(int pos = 0; pos < MAX_DIAS; pos++){
        dia = pos + 1;
        cout << "Dime las horas de estudio del dia " << dia << " ";
        cin >> res[pos];
    }

    return res;
}

// Parametros:
// - Tipo simple -> Entrada (no se modifica)    -> TIPO VAR
//               -> Salida (se modifica)        -> TIPO & VAR
// - Tipo complejo -> Entrada (no se modifica)  -> const TIPO & VAR
//                 -> Salida (se modifica)      -> TIPO & VAR

int calcular_horas_total(const THorasEstudio &h){
    int total = 0;

    for(int i = 0; i < MAX_DIAS;i++){
        total += h[i]; // total = total + h[i];
    }

    return total;
}
