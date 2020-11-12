#include <iostream>

using namespace std;

const double PI = 3.14159;

double area_circulo(double radio){
	double area;
	area = PI*radio*radio;
	return area;
}

double longitud_circulo(double radio){
	double longitud;
	longitud = 2*PI*radio;
	return longitud;
}

double area_rectangulo(double base, double altura){
	return base*altura;
}

double area_cilindro(double radio, double altura){
	return 2*area_circulo(radio) + area_rectangulo( longitud_circulo(radio), altura);
}

int main(){
	double r, h;

	cout << "Introduce el radio: ";
	cin >> r;

	cout << "Introduce la altura: ";
	cin >> h;

	cout << "El area del cilindro es: " << area_cilindro(r, h) << endl;

	return 0;
}
