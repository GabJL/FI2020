// Tema 4: Sentencias de selección múltiple: ecuación de grado 2
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, discriminante;

	cout << "Dime los coeficientes: ";
	cin >> a >> b >> c;

	discriminante = b*b - 4*a*c;

	if(a == 0 && b == 0 && c == 0){ // Infinitas soluciones
		cout << "Tiene infinitas soluciones" << endl;
	} else if(a == 0 && b == 0){ // No tiene solución (c != 0)
		cout << "No tiene solucion" << endl;
	} else if(discriminante < 0){ // No tiene soluciones (reales)
		cout << "No tiene soluciones reales" << endl;
	} else if(a == 0){ // Es un sistema de orden 1
		cout << "Tiene una solucion x = " << -c/b << endl;
	} else if(discriminante == 0){ // Al no tener discriminante la parte de más/menos se va y solo hay una solución (o dos pero iguales)
		cout << "Tiene una solucion x = " << -b/(2*a) << endl;
	} else {
		cout << "Hay dos soluciones x1 = " <<  (-b + sqrt(discriminante))/(2*a) 
			 << " x2 = " << (-b - sqrt(discriminante))/(2+a) << endl;
	}

	return 0;
}
