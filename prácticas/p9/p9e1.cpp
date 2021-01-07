// Ejercicio 1: Repaso de registros

#include <iostream>

using namespace std;

// Definición de tipos
typedef struct{
    string  nombre, apellido1, apellido2;
    int     telefono;
    string  email;
} TPersona;

// Funciones
void leerPersona(TPersona &p){
    cout << "Nombre: ";
    getline(cin, p.nombre); // Para conseguir leer más de una palabra
    cout << "Apellidos: ";
    cin >> p.apellido1 >> p.apellido2; // Aquí usamos cin para leer una única palabra para cada apellido
    cout << "Telefono: ";
    cin >> p.telefono;
    cout << "Email: ";
    cin >> p.email;
}

string obtenerClave(const TPersona &p){
    string clave = ""; // Empezamos sin nada
    clave += p.nombre[0]; 
    clave += p.apellido1[0]; 
    clave += p.apellido2[0];
    clave += char(p.telefono%10 + '0');
    return clave;
}

int main(){
    TPersona p;

    cout << "Introduzca los datos de la persona: " << endl;
    leerPersona(p);
    cout << "Su clave es " << obtenerClave(p) << endl;
    return 0;
}
