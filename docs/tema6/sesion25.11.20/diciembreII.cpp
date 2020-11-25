#include <iostream>
#include <array>

using namespace std;

const int MAX = 31;

// Apartado A
typedef array<int, MAX> TEstudio;

// Apartado H
typedef array<bool, MAX> TDiasLibres;

// Apartado B
void leerHoras(TEstudio &e){
	for(int i = 0; i < MAX; i++){
		cout << "Horas del dia " << i+1 << ": ";
		cin >> e[i];
	}
}

// Apartado C
int horasTotales(const TEstudio &e){
	int total = 0;
	for(int i = 0; i < MAX; i++){
		 total += e[i];
	}
	return total;
}

// Apartado E
int cantidadDiasLibres(const TEstudio &e){
	int cantidad = 0;
	for(int i = 0; i < MAX; i++){
		if(e[i] == 0) cantidad++;
	}
	return cantidad;
}

// Apartado G
int diaMasEstudio(const TEstudio &e){
	int dia = 0; // Consideramos que el primer día es cuando estudio más
	for(int i = 1; i < MAX; i++){
		if(e[i] > e[dia]){
			dia = i;
		}
	}
	return dia + 1; // La pos 0 es día 1, la 1 es dia 2...
}

// Apartado I
void diasLibres(const TEstudio &e, TDiasLibres &l){
	for(int i = 0; i < MAX; i++){
		l[i] = (e[i] == 0);
	}
}

int main(){
	// Apartado D
	TEstudio diciembre;
	leerHoras(diciembre);
	cout << "En total estudiaremos " << horasTotales(diciembre) << " horas" << endl;
	// Apartado F
	cout << "La cantidad media de horas/dia es " << horasTotales(diciembre)/(MAX*1.0 - cantidadDiasLibres(diciembre)) << endl;
	// Uso de apartado G
	cout << "El dia que mas estudio es el " << diaMasEstudio(diciembre) << endl;

	// Uso de apartado I
	TDiasLibres libres;
	diasLibres(diciembre, libres);
	cout << "Los dias libres en diciembre son: ";
	for(int i = 0; i < MAX; i++)
		if(libres[i]) cout << i+1 << " ";
	cout << endl;

	return 0;
}
