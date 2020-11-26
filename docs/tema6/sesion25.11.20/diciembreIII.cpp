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

// Apartado K
int primerDiaLibre(const TDiasLibres &l){
	int i = 0;

	while( i < MAX and !l[i]) i++;

	return i+1;
}

// Apartado L
int ultimoDiaEstudio(const TDiasLibres &l){
	int i = MAX - 1;

	while( i >= 0 and l[i]) i--;

	return i+1;
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

	// Apartado J
	int dia = 0;
	while(dia < MAX and diciembre[dia] > 8) dia++;

	if(dia < MAX){
		cout << "El dia " << i+1 << " estudias mucho" << endl;
	} else {
		cout << "No hay ningun dia que estudies mas de 8 horas" << endl;
	}

	// Uso del apartado K
	int dia_libre = primerDiaLibre(libres);
	if(dia_libre > MAX){
		cout << "No hay dias libres :(" << endl;
	} else {
		cout << "El primer dia libre es " << dia_libre << endl;
	} 

	// Uso del apartado L
	int ultimo_dia = ultimoDiaEstudio(libres);
	if(ultimo_dia <= 0){
		cout << "No hay dias de estudio" << endl;
	} else {
		cout << "El ultimo dia de estudio es " << ultimo_dia << endl;
	} 

	return 0;
}
