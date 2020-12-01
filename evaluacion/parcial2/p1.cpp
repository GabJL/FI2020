#include <iostream>

using namespace std;

// Prototipo
void dibujar_caracteres(int n, char l);
void dibujar_figura(int n);
void dibujar_superior(int n);
void dibujar_inferior(int n);

// Programa principal
int main(){
    int num;

    cout << "Dime el valor: ";
    cin >> num;
    dibujar_figura(num);

    return 0;
}

void dibujar_caracteres(int n, char l){
    for(int i = 0; i < n; i++){
        cout << l;
    }
}

void dibujar_figura(int n){
    dibujar_superior(n);
    dibujar_inferior(n);
}

void dibujar_superior(int n){
    int num_esp = n-1;
    int num_X = 1;
    for(int linea = 0; linea < n; linea++){
        dibujar_caracteres(num_esp, ' ');
        dibujar_caracteres(num_X, 'X');
        dibujar_caracteres(1, '\n');
        num_esp--;
        num_X++;
    }
}

void dibujar_inferior(int n){
    int num_esp = n;
    int num_X = n;
    for(int linea = 0; linea < n; linea++){
        dibujar_caracteres(num_esp, ' ');
        dibujar_caracteres(num_X, 'X');
        dibujar_caracteres(1, '\n');
        num_X--;
    }
}