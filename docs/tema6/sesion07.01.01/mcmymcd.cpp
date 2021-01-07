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

// Apartado B
// No comprobamos que se llene suponemos que no ocurre.
void generarArray(TArrayIncompleto &a, int valor){
	int div = 2;
	a.tam = 1;
	a.valores[0] = 1;

	while(div <= valor){
		if(valor%div == 0){
			a.valores[a.tam] = div;
			a.tam++;
			valor = valor/div;
		} else {
			div++;
		}
	}
}

// Apartado C
int obtenerNumero(const TArrayIncompleto &a){
	int num = 1;
	for(int i = 0; i < a.tam; i++){
		num *= a.valores[i];
	}
	return num;
}

// Apartado D
void interseccionArray(const TArrayIncompleto &a, const TArrayIncompleto &b, TArrayIncompleto &c){
	int posA = 0, posB = 0;
	c.tam = 0;
	while(posA < a.tam && posB < b.tam){
		if(a.valores[posA] == b.valores[posB]){
			c.valores[c.tam] = a.valores[posA];
			c.tam++;
			posA++;
			posB++;
		} else if(a.valores[posA] < b.valores[posB]){
			posA++;
		} else {
			posB++;
		}
	}
}	

// Apartado E
void unionArray(const TArrayIncompleto &a, const TArrayIncompleto &b, TArrayIncompleto &c){
	int posA = 0, posB = 0;
	c.tam = 0;
	while(posA < a.tam && posB < b.tam){
		if(a.valores[posA] == b.valores[posB]){
			c.valores[c.tam] = a.valores[posA];
			c.tam++;
			posA++;
			posB++;
		} else if(a.valores[posA] < b.valores[posB]){
			c.valores[c.tam] = a.valores[posA];
			c.tam++;
			posA++;
		} else {
			c.valores[c.tam] = b.valores[posB];
			c.tam++;
			posB++;
		}
	}

	while(posA < a.tam){
		c.valores[c.tam] = a.valores[posA];
		c.tam++;
		posA++;
	}

	while(posB < b.tam){
		c.valores[c.tam] = b.valores[posB];
		c.tam++;
		posB++;
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

	generarArray(a, numA);
	escribir(a);
	generarArray(b, numB);
	escribir(b);

	interseccionArray(a, b, c);
	escribir(c);

	cout << "MCD(" << numA << "," << numB << ") = " << obtenerNumero(c) << endl;
	
	unionArray(a, b, c);
	escribir(c);
	
	cout << "mcm(" << numA << "," << numB << ") = " << obtenerNumero(c) << endl;

	return 0;
}
