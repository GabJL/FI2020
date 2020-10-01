#include <iostream>

using namespace std;


int main(){
    int color = 2, lima, marron = 1, amarillo, rojo = 3, naranja;
    double blanco, verde, azul, morado = 0.3E1, crayon = -1.3;
    
    naranja = marron + color / rojo;
    cout << "Caso 1: " << naranja << endl;
    
    naranja = marron + color / morado;
    cout << "Caso 2: " << naranja << endl;

    blanco = marron + color / morado;
    cout << "Caso 3: " << blanco << endl;

    lima = amarillo + rojo;		
    cout << "Caso 4: " << lima << endl;

    rojo *= 4;						
    cout << "Caso 5: " << rojo << endl;

    blanco = color * 2.5 / morado;			
    cout << "Caso 6: " << blanco << endl;

    lima = color * 2.5 / morado;			
    cout << "Caso 7: " << lima << endl;

    verde = rojo / color;					
    cout << "Caso 8: " << verde << endl;

    azul = (color + marron) / (crayon + 1.3);	
    cout << "Caso 9: " << azul << endl;


    lima = rojo / color + rojo % color - 356;	
    cout << "Caso 10: " << lima << endl;

    verde = morado % 2; // Esto no es compilable debe comentarse
    cout << "Caso 11: " << verde << endl;

    return 0;
}