// Uso de el tipo registro y funciones
#include <iostream>

using namespace std;

typedef struct {
	int hora, minutos, segundos;
} TTiempo;

TTiempo leerTiempo(){
	TTiempo t;
	cout << "Hora: "; cin >> t.hora;
	cout << "Minutos: "; cin >> t.minutos;
	cout << "Segundos: "; cin >> t.segundos;
	return t;
}

int tiempo_a_segundos(const TTiempo &t){
	return t.hora * 3600 + t.minutos * 60 + t.segundos;
}

int main(){
	TTiempo tiempo;
	tiempo = leerTiempo();
	cout << "Segundos: " << tiempo_a_segundos(tiempo) << endl;
	return 0;
}
