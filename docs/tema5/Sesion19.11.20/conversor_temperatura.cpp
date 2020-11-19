#include <iostream>

using namespace std;

// Funciones
// Usando un parámetro de salida y el return
double convertir_temperatura(double grados, double &gradosK){
    double gradosF;

    gradosF = (grados*9)/5 + 32;
    gradosK = grados + 273.15;

    return gradosF;
}

// Usando dos parámetros de salida
void convertir_temperatura2(double grados, double &gradosK, double &gradosF){
    gradosF = (grados*9)/5 + 32;
    gradosK = grados + 273.15;
}


int main(){
    double C, F;
    double K;

    cout << "Dime la temperatura en C: ";
    cin >> C;

    F = convertir_temperatura(C, K);
    // convertir_temperatura2(C, K, F); // Con la alternativa

    cout << "Los " << C << " grados centigrados son " << K << " grados kelvin y "
        << F << " grados Farenheit" << endl;

    F = convertir_temperatura(C + 10, K);
    // convertir_temperatura2(C + 10, K, F); // Con la alternativa

    cout << "Los " << C+10 << " grados centigrados son " << K << " grados kelvin y "
        << F << " grados Farenheit" << endl;
    return 0;
}
