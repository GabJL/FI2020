#include <iostream>
#include <array>

using namespace std;

// Constantes
const int MAX = 10;
const int MAX_LINEA = 5;

// TIpos
typedef array<bool, MAX> TFila;
typedef array<TFila, MAX> TTabla;
typedef array<int, MAX_LINEA> TLinea;

// Función
void corregir_linea(const TLinea& l, const TTabla& conex)
{
    int i = 1, correcta = 0;
    cout << l[0] << " ";
    while (i < MAX_LINEA){
        if (conex[l[correcta]][l[i]]){
            correcta = i;
            cout << l[i] << " ";
        }
        i++;
    }
}

int main()
{
    TTabla conexiones = {{
        //   0      1      2      3      4      5      6      7      8      9
         {{false, false, false, false, false, false, false, false, false, false}}, // 0
         {{false, false, false, false, false, false, false, false, false, false}}, // 1
         {{false, false, false, false, false, false, false, true , false, false}}, // 2
         {{false, false, false, false, true , true , false, false, false, false}}, // 3
         {{false, false, false, true , false, false, false, false, false, false}}, // 4
         {{false, false, false, true , false, false, false, true , false, true}},  // 5
         {{false, false, false, false, false, false, false, false, false, false}}, // 6
         {{false, false, true , false, false, true , false, false, false, false}}, // 7
         {{false, false, false, false, false, false, false, false, false, false}}, // 8
         {{false, false, false, false, false, false, false, false, false, false}}  // 9
    }};
    TLinea l1 = {2, 7, 4, 3, 5};

    cout << "El primer ejemplo queda corregido como: ";
    corregir_linea(l1, conexiones);
    cout << " (debe ser: 2 7 5)" << endl;
    
    l1 = {2, 3, 7, 4, 5};
    cout << endl << "El segundo ejemplo queda corregido como: ";
    corregir_linea(l1, conexiones);
    cout << " (debe ser: 2 7 5)" << endl;

    l1 = {2, 3, 7, 5, 9};
    cout << endl << "El tercer ejemplo queda corregido como: ";
    corregir_linea(l1, conexiones);
    cout << " (debe ser: 2 7 5 9)" << endl;

    return 0;
}
