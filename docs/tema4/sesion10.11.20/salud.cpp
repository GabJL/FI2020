// Ejercicio largo sobre pasos diarios
#include <iostream>

using namespace std;

const int SEDENTARIO = 2000;
const int NORMAL = 6000;
const int MAX_DIAS = 31;

const int ESPERANDO_SEDENTARIO = 0;
const int ESPERANDO_NORMAL = 1;
const int ESPERANDO_ACTIVO = 2;

int main(){
	int pasos, cantidad, num_sedentario, num_normal, num_activo, suma_activo;
	int dia_activo, estado, num_series ;

	cout << "Indique los pasos: ";
	cin >> pasos;
	cantidad = 0;
	num_sedentario = num_normal = num_activo = 0;
	suma_activo = 0;
	dia_activo = 0;
	
	estado = ESPERANDO_SEDENTARIO;
	num_series = 0;
	
	while(pasos >= 0 && cantidad < MAX_DIAS){
		cantidad++;

		if(pasos < SEDENTARIO){
			num_sedentario++;
			estado = ESPERANDO_NORMAL;
		} else if(pasos < NORMAL){
			num_normal++;
			if(estado == ESPERANDO_NORMAL){
				estado = ESPERANDO_ACTIVO;
			} else {
				estado = ESPERANDO_SEDENTARIO;
			}
		} else {
			num_activo++;		
			suma_activo += pasos;
			if(dia_activo == 0) dia_activo = cantidad;
			if(estado == ESPERANDO_ACTIVO){
				num_series++;
			}
			estado = ESPERANDO_SEDENTARIO;
		}

		cin >> pasos;
	}
	
	cout << "Hubo " << num_sedentario << " dias sedentarios, "
		<< num_normal << " dias normales y "
		<< num_activo << " dias activos." << endl;
	if(num_activo > 0){
		cout << "La media de los dias activos es " << suma_activo*1.0/num_activo << endl;
		cout << "El primer dia activo fue el " << dia_activo << endl;
	} else {
		cout << "No hubo dias activos" << endl;
	}
	cout << "Hubo " << num_series << " de series de 3 dias con estado diferente" << endl;
	return 0;
}
