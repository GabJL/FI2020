// Ejercicio extra: repaso de uso básico de arrays
#include <iostream>
#include <array> // Para el uso de los arrays

using namespace std;

// Apartado A: Tipos
const int MAX = 10;
typedef array< int, MAX > TRecaudacion;

// Apartado B: Lectura
// Recorrido completo del array (de 0 a MAX-1) guardando en cada posición el valor leído
// Como queremos modificar el array -> Parámetro de salida (con & sin const)
void leerRecaudaciones(TRecaudacion &r){
	for(int i = 0; i < MAX; i++)
		cin >> r[i];
}

// Apartado C: Inflacción
// Modificar todas las posiciones -> Recorrido completo
// Array modificable -> con & sin const (entrada/salida)
void incluirInflaccion(TRecaudacion &r){
	for(int i = 0; i < MAX; i++)
		if(r[i] < 100) r[i] *= 1.1; // Tambien -> r[i] = r[i]*1.1;
}

// Función auxiliar para escribir
void mostrarRecaudaciones(const TRecaudacion &r){
	for(int i = 0; i < MAX; i++)
		cout << r[i] << " ";
	cout << endl;
}

// Apartado D: Billonarias
// Contar las que cumplen alguna propiedad -> Recorrido completo
// Solo consultar datos -> Parámetro de entrada -> con & y con const
int cantidadBillonarias(const TRecaudacion &r){
	int cantidad = 0;
	for(int i = 0; i < MAX; i++)
		if(r[i] >= 1000) cantidad++;

	return cantidad;
}

// Apartado E: Más taquillera
// Valor máximo
int masTaquillera(const TRecaudacion &r){
	int mayor = r[0];
	for(int i = 1; i < MAX; i++)
		if(r[i] > mayor) mayor = r[i];

	return mayor;
}

// Apartado F: Existe peli entre cantidades
// Buscar si hay alguna que cumpla cierta propiedad y cuando la encontremos si hay paramos -> Recorrido parcial
bool existe(const TRecaudacion &r, int c1, int c2){
	int pos = 0;

	while(pos < MAX && (r[pos] < c1 || r[pos] > c2))
		pos++;

	return pos < MAX;
}

// Programa principal: uso de las funciones
int main(){
	TRecaudacion rec;

	// Probando apartado B
	cout << "Dime las recaudaciones: ";
	leerRecaudaciones(rec);

	cout << "Recaudaciones leidas: ";
	mostrarRecaudaciones(rec);

	// Probado apartado C
	cout << "Recaudaciones ajustadas con la inflaccion: ";
	incluirInflaccion(rec);
	mostrarRecaudaciones(rec);

	// Probando apartado D
	cout << "Hay " << cantidadBillonarias(rec) << " peliculas que superaron el billon de dolares" << endl;

	// Probado apartado E
	cout << "La peli mas taquillera recaudo " << masTaquillera(rec) << " millones de dolares" << endl;

	// Probando apartado F
	int c1, c2;
	cout << "Dime dos cantidades ordenadas: ";
	cin >> c1 >> c2;
	if(existe(rec, c1, c2))
		cout << "Hay alguna peli entre " << c1 << " y " << c2 << endl;
	else
		cout << "No hay alguna peli entre " << c1 << " y " << c2 << endl;

	return 0;
}
