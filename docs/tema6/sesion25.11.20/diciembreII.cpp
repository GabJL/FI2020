#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX_DIAS = 31;
// Definición de tipos
typedef array<int, MAX_DIAS> THorasEstudio;
typedef array<bool, MAX_DIAS> TDiasLibres;

// Prototipos o funciones
THorasEstudio pedir_horas_estudio();
int calcular_horas_total(const THorasEstudio &h);
int numero_dias_libres(const THorasEstudio &h);
int dia_mas_estudioso(const THorasEStudio &h);
void dias_libres(const THorasEstudio &h, TDiasLibres &d);

int main(){
    THorasEstudio horas;
    TDiasLibres libres;
    int total_h, dia;

    horas = pedir_horas_estudio();

    total_h = calcular_horas_total(horas);
    cout << "En diciembre estudiaras " << total_h << " horas " << endl;

    cout << "Las horas medias estudiadas son: " << total_h/(MAX_DIAS - numero_dias_libres(horas)) << endl;

    dia = dia_mas_estudioso(horas);
    cout << "El dia que estudie mas es: " << dia << " y estudio " << horas[dia - 1] << " horas" << endl;
    dias_libres(horas, libres);
    cout << "Los dias libres son: ";
    for(int i = 0; i < MAX_DIAS; i++){
        if(libres[i]){
            cout << i+1 << " ";
        }
    }
    cout << endl;
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

int numero_dias_libres(const THorasEstudio &h){
    int dias_libres = 0;
    
    for(int i = 0; i < MAX_DIAS; i++){
        if(h[i] == 0){
            dias_libres++;
        }
    }

    return dias_libres;
}

int dia_mas_estudioso(const THorasEStudio &h){
    int pos_mayor = 0;
    int max_horas = h[0];

    for(int i = 0; i < MAX_DIAS; i++){
        // h[i] <- Lo que he estudiado este dia
        // pos_mayor <- La posición del dia que más horas he estudiado hasta ahora
        if(h[i] > max_horas){
            pos_mayor = i;
            max_horas = h[i];
        }
    }
    // Recordad: dia es la posición + 1 (pos 0 -> Dia 1, pos 1 -> Dia 2...)
    return pos_mayor + 1;
}

void dias_libres(const THorasEstudio &h, TDiasLibres &d){
    for(int i = 0; i < MAX_DIAS; i++){
        if(h[i] == 0){
            d[i] = true;
        } else {
            d[i] = false;
        }
    }
}
