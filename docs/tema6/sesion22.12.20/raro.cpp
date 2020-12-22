// Ejercicio de array incompletos
#include <iostream>
#include <array>

using namespace std;

// Tipos (Apartado A)
const int MAX = 50;
typedef array<int, MAX> tArray;

typedef struct{
	tArray 	valores;
	int		tam;
} tArrayIncompleto;

// Funciones
// Apartado B
bool buscar(const tArrayIncompleto &a, int valor, int &pos){
	pos = 0;

	// miramos si no nos pasamos del final y el valor actual no es el buscado
	while(pos < a.tam && a.valores[pos] != valor) pos++;

	// si hemos salido antes de llegar al final es que lo hemos encontrado
	return pos < a.tam;
}

// Apartado C
void insertar(tArrayIncompleto &a, int valor){
	int pos;
	if(a.tam < MAX && !buscar(a, valor, pos)){ // No está lleno y no está
		// La primera pos libre es a.tam 
		a.valores[a.tam] = valor;
		a.tam++; // Ahora hay un valor más
	}
}

// Apartado D
void eliminar(tArrayIncompleto &a, int valor){
	int pos;
	if(buscar(a,valor, pos)){ // Si está devuelve true y en pos donde está
		// Machamos su valor por el del final
		a.valores[pos] = a.valores[a.tam-1];
		a.tam--; // Ahora hay uno menos
	}
}

// Apartado E
void escribir(const tArrayIncompleto &a){
	for(int i = 0; i < a.tam; i++){
		cout << a.valores[i] << " ";
	}
}

// Apartado F
int main(){
	tArrayIncompleto ar;
	int v;
	
	ar.tam = 0; // Está vacío
	
	cout << "Escriba acabado en 0: ";
	cin >> v;
	while(v != 0){
		eliminar(ar, -v);
		insertar(ar, v);
		cin >> v;
	}

	cout << "Los valores leidos son: ";
	escribir(ar);
	cout << endl;

	return 0;
}
