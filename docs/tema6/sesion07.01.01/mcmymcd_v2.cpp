// Otro ejercicio de arrays incompletos
#include <iostream>
#include <array>

using namespace std;

// tipos (Apartado A)
const int MAX = 200;
typedef array<int, MAX> TNumeros;

typedef struct{
	TNumeros valores;
	int tam;
} TArrayIncompleto;

// funciones auxiliares
void inicializar(TArrayIncompleto &a){
    a.tam = 0;
}

void insertar(TArrayIncompleto &a, int value){
    a.valores[a.tam] = value;
    a.tam++;
}

void insertar_copias(TArrayIncompleto &a, int value, int veces){
    for(int i = 0; i < veces; i++){
        insertar(a, value);
    }
}

int numero_veces(const TArrayIncompleto &a, int value){
    int veces = 0;
    for(int i = 0; i < a.tam; i++){
        if(a.valores[i] == value){
            veces++;
        }
    }
    return veces;
}

int esta(const TArrayIncompleto &a, int value){
    bool encontrado = false;
    int i = 0;
    while(i < a.tam && !encontrado){
        if(a.valores[i] == value){
            encontrado = true;
        }
        i++;
    }
    return encontrado;
}


// Apartado B
// No comprobamos que se llene suponemos que no ocurre.
void generar_array(TArrayIncompleto &a, int valor){
	int div = 2;
	inicializar(a);
	insertar(a, 1);

	while(div <= valor){
		if(valor%div == 0){
            insertar(a, div);
			valor = valor/div;
		} else {
			div++;
		}
	}
}

// Apartado C
int obtener_numero(const TArrayIncompleto &a){
	int num = 1;
	for(int i = 0; i < a.tam; i++){
		num *= a.valores[i];
	}
	return num;
}

// Apartado D
void interseccion_array(const TArrayIncompleto &a, const TArrayIncompleto &b, TArrayIncompleto &c){
    inicializar(c);
    int menor, vecesA, vecesB, valor_buscado;
    for(int i = 0; i < a.tam; i++){
        valor_buscado = a.valores[i];
        if(!esta(c, valor_buscado)){
            vecesA = numero_veces(a, valor_buscado);
            vecesB = numero_veces(b, valor_buscado);
            if(vecesA < vecesB){
                menor = vecesA;
            } else {
                menor = vecesB;
            }
            if(menor > 0){
                insertar_copias(c, valor_buscado, menor);
            }
        }
    }
}

// Apartado E
void union_array(const TArrayIncompleto &a, const TArrayIncompleto &b, TArrayIncompleto &c){
    inicializar(c);
    int mayor, vecesA, vecesB, valor_buscado;
    for(int i = 0; i < a.tam; i++){
        valor_buscado = a.valores[i];
        if(!esta(c, valor_buscado)){
            vecesA = numero_veces(a, valor_buscado);
            vecesB = numero_veces(b, valor_buscado);
            if(vecesA > vecesB){
                mayor = vecesA;
            } else {
                mayor = vecesB;
            }
            insertar_copias(c, valor_buscado, mayor);
        }
    }
    for(int i = 0; i < b.tam; i++){
        valor_buscado = b.valores[i];
        if(!esta(c, valor_buscado)){
            vecesB = numero_veces(b, valor_buscado);
            insertar_copias(c, valor_buscado, mayor);
        }
    }
}

void escribir(const TArrayIncompleto &a){
	for(int i = 0; i < a.tam; i++)
		cout << a.valores[i] << " ";
	cout << endl;
}

int main(){
	TArrayIncompleto a, b, c;
	int numA, numB;

	cout << "Dime un numero: ";
	cin >> numA;
	cout << "Dime otro numero: ";
	cin >> numB;

	generar_array(a, numA);
	escribir(a);
	generar_array(b, numB);
	escribir(b);

	interseccion_array(a, b, c);
	escribir(c);

	cout << "MCD(" << numA << "," << numB << ") = " << obtener_numero(c) << endl;

	union_array(a, b, c);
	escribir(c);

	cout << "mcm(" << numA << "," << numB << ") = " << obtener_numero(c) << endl;

	return 0;
}
