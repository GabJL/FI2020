/******************************************************************************
* Programa para el cálculo del diámetro, longitud y  área de una
* circunferencia. Se pide al usuario que se introduzca el radio por teclado
* y se muestran los resultados por pantalla.
*
* Programador: Patricio Estrella
* Fecha: 09/10/2020
*******************************************************************************/

#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
  double radio, longitud, area, diametro; // Declaración de variables

  cout << "Teclee la medida del radio de la circunferencia en cm" << endl;
  cin >> radio;

  // Cálculos de magnitudes
  diametro = 2.0 * radio;
  longitud = PI * diametro;
  area = PI * radio * radio;

  // Salida de resultados del programa //

  cout << "DATOS DEL CIRCULO:" << endl;
  cout << "Radio introducido por el usuario: " << radio << " cm" << endl;
  cout << "Diametro de la circunferencia: " << diametro << " cm" << endl;
  cout << "Longitud de la circunferencia: " << longitud << " cm" << endl;
  cout << "Area de la circunferencia: " << area << " cm2" << endl;

}
