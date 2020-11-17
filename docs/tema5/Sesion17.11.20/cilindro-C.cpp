#include <iostream>

using namespace std;

const double PI = 3.14159;

double areaCirculo(double radio){
	double area;
	area = PI*radio*radio;
	return area;
}

double longitudCirculo(double radio){
	double longitud;
	longitud = 2*PI*radio;
	return longitud;
}

double areaRectangulo(double base, double altura){
	return base*altura;
}

double areaCilindro(double radio, double altura){
	return 2*areaCirculo(radio) + areaRectangulo( longitudCirculo(radio), altura);
}

double volumenCilindro(double radio, double altura){
	return areaCirculo(radio)*altura;
}

void mostrarMenu(){
	cout << "1.- Calcular area" << endl;
	cout << "2.- Calcular volumen" << endl;
}

int leerOpcion(){
	int opt;
	do{
		mostrarMenu();
		cout << "Dime la opcion: ";
		cin >> opt;
	}while(opt != 1 and opt != 2);
	return opt;
}

void leerValores(double &radio, double &altura){
	do{
		cout << "Introduce el radio: ";
		cin >> radio;
	}while(radio <= 0);

	do{
		cout << "Introduce la altura: ";
		cin >> altura;
	}while(altura <= 0);
}

int main(){
	double r, h;

	leerValores(r,h);

	int opcion = leerOpcion();

	switch(opcion){
		case 1: cout << "El area del cilindro es: " << areaCilindro(r, h) << endl; break;
		case 2: cout << "El volumen del cilindro es: " << volumenCilindro(r, h) << endl; break;
	}

	return 0;
}
