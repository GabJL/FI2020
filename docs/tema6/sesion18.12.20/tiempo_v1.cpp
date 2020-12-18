// Uso de el tipo registro y funciones
#include <iostream>

using namespace std;

typedef struct {
	int hora, minutos, segundos;
} TTiempo;

void leerTiempo(TTiempo &t){
	cout << "Hora: "; cin >> t.hora;
	cout << "Minutos: "; cin >> t.minutos;
	cout << "Segundos: "; cin >> t.segundos;
}

int tiempo_a_segundos(const TTiempo &t){
	return t.hora * 3600 + t.minutos * 60 + t.segundos;
}

int main(){
	TTiempo tiempo;
	leerTiempo(tiempo);
	cout << "Segundos: " << tiempo_a_segundos(tiempo) << endl;
	return 0;
}
