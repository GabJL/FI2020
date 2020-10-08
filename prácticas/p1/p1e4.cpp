// Ejercicio 4: Cálculo de las dimensiones de una pantalla
// Conversiones: 1 pulgada = 2.54 cm
// Datos: diagonal, ratioAlto, ratioAncho
// Calculos:
// - ratio = ratioAlto/ratioAncho
// - ancho = sqrt(diagonal² / (ratio² + 1))
// - alto = ancho * ratio

#include <iostream>
#include <cmath>

using namespace std;

const double CM_POR_PULGADA = 2.54;

int main(){
	double diagonal, ratioAncho, ratioAlto, ratio, ancho, alto;

	cout << "Indique la diagonal de la pantalla (en pulgadas): ";
	cin >> diagonal;
	cout << "Indique el ratio: ";
	cin >> ratioAlto >> ratioAncho;

	// Convertimos la diagonal a cm
	diagonal = diagonal * CM_POR_PULGADA;

	// ratio
	ratio = ratioAlto/ratioAncho;

	// Calculamos el alto y ancho
	ancho = sqrt( pow(diagonal, 2.0) / (pow(ratio,2.0) + 1));
	alto = ancho * ratio;

	cout << "La pantalla mide " << alto << "x" << ancho << " cm2" << endl;

	return 0;
}
