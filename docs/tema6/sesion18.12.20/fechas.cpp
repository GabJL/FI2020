// Ejemplo simple de definición de registros y su uso
#include <iostream>

using namespace std;

typedef struct {
	int dia;
	int mes;
	int anio; // También podría haberse puesto: int dia, mes, anio;
} TFecha;

// En general las constantes las declararemos encima de los tipos 
// salvo como en este caso que depende del tipo
const TFecha F_INICIO = {2, 1, 1970}; // El valor inicial se pone entre {} y los campos deben ir en el orden que se definieron en el tipo (es decir el 2 es el día, el 1 el mes y 1970 el año

int main(){
	// Variables de tipo registro
	TFecha ayer = {17, 12, 2020}; // Se les puede dar valor inicial como vimos antes
	TFecha examen; // O declararlos "vacios"

	examen = ayer; // Se puede asignar

	examen.mes = 12; // Se puede acceder a un campo concreto con .campo

	cout << "Dime el dia del examen: ";
	cin >> examen.dia; // No se puede leer de un tirón, hay que leer campo a campo
	
	// Tampoco se puede escribir ni comparar de un tirón
	cout << "El examen es : " << examen.dia << "/" << examen.mes << "/" << examen.anio << endl;
	
	return 0;
}
