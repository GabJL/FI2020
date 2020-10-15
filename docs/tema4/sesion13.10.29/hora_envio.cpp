// Tema 4: Sentencias de selección anidamiento: Hora de envío de un mensaje (satélite)
#include <iostream>

using namespace std;

const int RETRASO = 24;

int main(){
	int hora, minuto;
	string dia;

	cout << "Horas y minutos de la recepcion: ";
	cin >> hora >> minuto;

	if(minuto >= RETRASO){ // No cambiamos de hora
		minuto -= RETRASO; // minuto = minuto - RETRASO;
		dia = "Hoy";
	} else { // Cambiamos de hora
		minuto = minuto - RETRASO + 60;
		if(hora == 0){ // Cambiamos de dia
			hora = 23;
			dia = "ayer";
		} else { // No cambiamos de día
			hora--;
			dia = "hoy";
		}
	}

	cout << "El mensaje fue enviado a las " << hora << ":" << minuto << " (" << dia << ")" << endl; 
	return 0;
}
