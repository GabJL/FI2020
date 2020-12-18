// Ejercicio para el uso de registros y funciones ya con más complejidad
#include <iostream>
#include <cstdlib> // Para la generación de aleatorio
#include <ctime> // Para la generación de la semilla de los aleatorios

using namespace std;

typedef struct {
	int valor;
	string figura;
} TCarta;

void leerCarta(TCarta &c){
	do{
		cout << "Dime el valor (1-10) de la carta: ";
		cin >> c.valor;
	}while(c.valor < 1 or c.valor > 10);

	do{
		cout << "Dime la figura (picas, corazones, treboles o diamantes) de la carta: ";
		cin >> c.figura;
	} while(c.figura != "picas" and c.figura != "corazones" and c.figura != "treboles" and c.figura != "diamantes");
}

void mostrarCarta(const TCarta &c){ // Parámetro de entrada: referencia constante
	cout << c.valor << " de " << c.figura << endl;
}

TCarta generarCarta(){
	TCarta c;
	c.valor = rand()%10 + 1;
	switch(rand()%4){
		case 0: c.figura = "picas"; break;
		case 1: c.figura = "corazones"; break;
		case 2: c.figura = "treboles"; break;
		case 3: c.figura = "diamantes"; break;
	}
	return c;
}

bool iguales(const TCarta &c1, const TCarta &c2){
	return c1.valor == c2.valor and c1.figura == c2.figura;
}

bool menor(const TCarta &c1, const TCarta &c2){
	return (c1.valor < c2.valor) or ((c1.valor == c2.valor) and (c1.figura < c2.figura));
}

int main(){
	TCarta cJug, cCPU;

	srand(time(0)); // Inicializamos los números aleatorios

	leerCarta(cJug);
	do{
		cCPU = generarCarta();
	}while(iguales(cJug, cCPU));

	cout << "El ordenador eligio: ";
	mostrarCarta(cCPU);

	if(menor(cCPU, cJug)){
		cout << "Ha ganado el Jugador" << endl;
	} else {
		cout << "Ha ganado la CPU" << endl;
	}

	return 0;
} 
