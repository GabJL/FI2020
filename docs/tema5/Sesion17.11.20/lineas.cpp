#include <iostream>

using namespace std;

// Funciones
bool punto_corte(double m1, double n1, double m2, double n2, double &x, double &y){
	bool cortan = false;

	if(m1 != m2){ // Se cortan
		cortan = true;
		x = (n2-n1)/(m1-m2);
		y = m1*x + n1;
	}

	return cortan;	
}

void leer_recta(double &m, double &n){
	cout << "Dime la pendiente: ";
	cin >> m;
	
	cout << "Dime el termino independiente: ";
	cin >> n;
}

int main(){
	double m1, m2, n1, n2, x, y;

	cout << "Dime la primera recta: " << endl;
	leer_recta(m1, n1);
	
	cout << "Dime la segunda recta: " << endl;
	leer_recta(m2, n2);

	if(punto_corte(m1,n1, m2, n2, x, y)){
		cout << "Se cortan en (" << x << ", " << y << ")" << endl;
	} else {
		cout << "No se cortan" << endl;
	}
	return 0;
}
