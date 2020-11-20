#include <iostream>

using namespace std;

// Funciones
bool es_impar(int num){
    return (num%2 != 0);
}

int leer_numero_impar(){
    int res;
    do{
        cout << "Dime un numero impar: ";
        cin >> res;
    }while(!es_impar(res));

    return res;
}

void dibujar_muchas_letras(char l, int veces){
    for(int i = 0; i < veces; i++){
        cout << l;
    }
}

void dibujar_triangulo_superior(int altura){
    int num_lineas = (altura + 1)/2;
    // Primera linea
    int num_ast = 1;
    int num_esp = (altura - 1)/2;

    for(int linea = 0; linea < num_lineas; linea++){
        dibujar_muchas_letras(' ', num_esp);
        dibujar_muchas_letras('*', num_ast);
        cout << endl;

        // actualizar valores
        num_ast += 2; // num_ast = num_ast + 2;
        num_esp--;
    }
}

void dibujar_triangulo_inferior(int altura){
    int num_lineas = (altura - 1)/2;
    // Primera linea
    int num_ast = altura - 2;
    int num_esp = 1;

    for(int linea = 0; linea < num_lineas; linea++){
        dibujar_muchas_letras(' ', num_esp);
        dibujar_muchas_letras('*', num_ast);
        cout << endl;

        // actualizar valores
        num_ast -= 2; // num_ast = num_ast - 2;
        num_esp++;
    }    
}

void dibujar_figura(int altura){
    dibujar_triangulo_superior(altura);
    dibujar_triangulo_inferior(altura);
}

int main(){
    int n;
    
    // Leer un numero impar
    n = leer_numero_impar();
    
    // Dibujar la figura
    dibujar_figura(n);

    return 0;
}
