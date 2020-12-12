// Ejercicio sobre array de frecuencias
#include <iostream>
#include <array>

using namespace std;

// tipos
const int MAX = 128; // Cantidad de letras
typedef array<int, MAX> TFrecuencias;

// Funciones auxiliares

// Pone a 0 todos los valores
void inicializar(TFrecuencias &f){ // Queremos cambiar f -> con & y sin const
	for(int i = 0; i < MAX; i++)
		f[i] = 0;
}

// mostramos la frecuencia de las letras != 0
void mostrarFrecuencias(const TFrecuencias &f){ // Ahora solo queremos consultarlo -> con const
	for(int i = 0; i < MAX; i++)
		if(f[i] != 0)
			cout << "\t" << char(i) << " aparece " << f[i] << " veces" << endl;
}

// la más frecuente
char masFrecuente(const TFrecuencias &f){
	int mayor = 0;
	for(int i = 1; i < MAX; i++)
		if(f[mayor] < f[i]) mayor = i;

	return char(mayor);
}

// cantidad de letras diferentes
int cantidadLetras(const TFrecuencias &f){
	int cantidad = 0;
	for(int i = 0; i < MAX; i++)
		if(f[i] != 0) cantidad++;

	return cantidad;
}

int main(){
	TFrecuencias f;
	char l;

	inicializar(f);

	cout << "Diga un texto acabado en punto: ";
	cin >> l;
	while(l != '.'){
		f[l]++; // Aumentamos las apariciones de la letra
		cin >> l;
	}

	cout << "Frecuencia de las letras: " << endl;
	mostrarFrecuencias(f);
	cout << "La letra que más aparece es " << masFrecuente(f) << endl;
	cout << "Aparecen " << cantidadLetras(f) << " letras diferentes" << endl;

	return 0;
}
