#include <iostream>
#include <array> // Para los arrays

using namespace std;

// Constantes 
const int MAX = 100;

// tipos (Apartado A)
typedef array<int, MAX> TDatos; // Array completo


// Array incompleto: incluye el array y cuántas posiciones ocupadas tiene
typedef struct {
	TDatos v; // velocidades
	int	   t; // tamaño (posiciones ocupadas y también primera libre)
} TVelocidades;

// Apartado B
// Debemos hacer lectura adelantada para parar cuando se lea un 0 (que puede ser el primero)
// Cualquier bucle que vaya accediendo a un array debe comprobar que la posición es válida
// Como queremos cambiar el array debe ser salida
// Recordar en cambiar el tamaño
void leer(TVelocidades &v){
	int valor, i = 0;
	cin >> valor;
	while(i < MAX && valor != 0){
		v.v[i] = valor;
		cin >> valor;
		i++;
	}

	v.t = i; // Podríamos haber utilizado todo el rato v.t en vez de i
}

// Apartado C
// Similar a la escritura en arrays completos pero en vez de ir hasta MAX hay que ir hasta el tamaño
void escribir(const TVelocidades &v){
	for(int i = 0; i < v.t; i++)
		cout << v.v[i] << " ";
	cout << endl;
}

// Apartado D
// Recorrido completo (hasta v.t) que cuente cuantos negativos hay y luego devuelva la tas (en porcentaje)
double tasaError(const TVelocidades &v){
	int cont = 0;
	for(int i = 0; i < v.t; i++)
		if(v.v[i] < 0) cont++;
	return cont*100.0/v.t; // Cuidado con los cambios de tipo para que haga la división bien
}

// Apartado E
// Devolver otro array: hay que llevar dos contadores:
// - Uno donde estamos leyendo en el array original que siempre avanza
// - Otro donde escribimos en el nuevo que solo avanza cuando metemos uno (aunque podemos usar el tamaño, por claridad no lo haré)
// No olvidar poner bien el tamaño del array nuevo
void sinErrores(const TVelocidades &orig, TVelocidades &nuevo){
	int pos_escribir = 0;
	for(int pos_leer = 0; pos_leer < orig.t; pos_leer++){
		if(orig.v[pos_leer] >= 0){
			nuevo.v[pos_escribir] = orig.v[pos_leer];
			pos_escribir++;
		}
	} 

	nuevo.t = pos_escribir;
}

// Apartado F
// Recorrido posiblemente incompleto (si no lo son) -> while
bool sonIguales(const TVelocidades &v1, const TVelocidades &v2){
	bool iguales = false;
	if(v1.t == v2.t){
		int i = 0; 
		while(i < v1.t && v1.v[i] == v2.v[i]) i++;
		iguales = (i == v1.t); // Son iguales si llegamos al final
	}
	return iguales;
}

// Apartado G
// Uso de las funciones: programa principal
int main(){
	TVelocidades s1, s2;
	cout << "Dime las velocidades del sensor 1: ";
	leer(s1);
	cout << "Dime las velocidades del sensor 2: ";
	leer(s2);
	cout << "En el sensor 1 se leyo: ";
	escribir(s1);
	cout << "En el sensor 2 se leyo: ";
	escribir(s2);

	int tasa_s1 = tasaError(s1);
	int tasa_s2 = tasaError(s2);

	if(tasa_s1 >= 20){
		cout << "La tasa de error del sensor 1 es muy alta (" << tasa_s1 << ") debe revisarlo" << endl;
	} else if(tasa_s2 >= 20){
		cout << "La tasa de error del sensor 2 es muy alta (" << tasa_s2 << ") debe revisarlo" << endl;
	} else{
		cout << "Las tasas de error son aceptables" << endl;
		TVelocidades s1_aux, s2_aux;
		sinErrores(s1, s1_aux);
		sinErrores(s2, s2_aux);

		if(sonIguales(s1_aux, s2_aux)){
			cout << "Las mediciones de los sensores son coherentes" << endl;
		} else {
			cout << "Las mediciones de los sensores discrepan" << endl;
		}
	}
	return 0;
}
