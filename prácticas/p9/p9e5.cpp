#include <iostream>
#include <array>

using namespace std;

// Tipos y constantes
const int MAX = 100;
typedef array<int, MAX> TDatos;

typedef struct{
    TDatos  datos;
    int     tam;
} TArray;

// Funciones
void insertar(TArray &a, int valor){
    // La última posición ocupada es a.tam-1
    // -> la primera libre es a.tam
    a.datos[a.tam] = valor;
    a.tam++;
}

bool esta(const TArray &a, int valor){
    int i = 0; 
    while(i < a.tam && a.datos[i] != valor) i++;
    return i < a.tam;
}

int contar_coincidencias(const TArray &a, const TArray &b){
    TArray c;
    c.tam = 0; // Al principio c está vacío
    for(int i = 0; i < a.tam; i++){
        if(esta(b, a.datos[i]) && !esta(c, a.datos[i])){
            insertar(c, a.datos[i]);
        }
    }
    return c.tam; // El tamaño es la cantidad de valores coincidentes sin repeticiones
}

int main(){
    TArray a1, a2;
    a1 = {{142, 3, 7, 1, 1}, 5};
    a2 = {{8, 1, 47, -5, 7, 1}, 6};

    cout << "La cantidad de valores comunes son: " << contar_coincidencias(a1, a2) << endl;
    
    return 0;
}
