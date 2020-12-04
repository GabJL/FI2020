#include <iostream>
#include <array>
using namespace std;

const int TAM = 10;
typedef array <double,TAM> TDatos;

void leer_datos(TDatos &d) {
    for(int i=0;i<TAM;i++) {
        cin >> d[i];
    }
}

void escribir_datos(const TDatos &d) {
    cout << "[";
    for(int i=0;i<TAM-1;i++) {
        cout << d[i] << ",";
    }
    cout << d[TAM-1] << "]";
}

void correccion(TDatos &d) {
    for(int i=0;i<TAM;i++) {
        d[i]-=31.512;
    }
}

bool media(const TDatos &d) {
    double suma=0.0;
    for(int i=0; i<TAM;i++) {
        suma+=d[i];
    }
    return ((suma/TAM) < 600); // media de tiempo en segundos
}

double menor(const TDatos &d) {
    double m=d[0];
    for(int i=0;i<TAM;i++) {
        if (d[i]<m) {
            m=d[i];
        }
    }
    return m;
}

bool umbral(const TDatos &d) {
    int i=0;
    while (i<TAM && d[i]<900) { //900=15*60
        i++;
    }
    return (i==TAM);
}

int main() {

    TDatos tiempos = {428.308,320.215,601.807,331.091,539.773,973.544,329.454,313.898,896.431,896.697};

    cout << "Datos iniciales: ";
    escribir_datos(tiempos);
    correccion(tiempos);
    cout << endl;
    cout << "Datos corregidos: ";
    escribir_datos(tiempos);
    cout << endl;
    cout << "El menor tiempo ha sido " << menor(tiempos);
    cout << endl;
    cout << "CONDICION 1 (media evacuación < 10 minutos): El protocolo de evacuación ";
    if (!media(tiempos)) {
        cout << "NO ";
    }
    cout << "ha funcionado correctamente.";
    cout << endl;
    cout << "CONDICION 2 (ninguna persona ha tardado más de 15 minutos): El protocolo de evacuación ";
    if (!umbral(tiempos)) {
        cout << "NO ";
    }
    cout << "ha funcionado correctamente.";

    cout << endl;
    return 0;
}
