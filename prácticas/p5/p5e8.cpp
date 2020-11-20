#include <iostream>
#include <cmath>

using namespace std;

// Función 1: solicita al usuario un punto (x e y) y devuelve los valores leídos.
void leer_punto(double &x, double &y){
    cout << "Dime la x: "; cin >> x;
    cout << "Dime la y: "; cin >> y;
}
// Función 2: comprueba si dos puntos son iguales.
bool son_iguales (double x1, double y1, double x2, double y2){
    return (x1 == x2 && y1 == y2);
}

// Función 3: calcula la distancia euclídea entre dos puntos.
double distancia(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

// Función 4: calcula los parámetros de la recta (pendiente y término independiente) de la recta que pasa por dos puntos.
void calcula_recta(double x1, double y1, double x2, double y2, double &m, double &n){
    // y1 = m*x1 + n
    // y2 = m*x2 + n => n = y2 - m*x2
    // y1-y2 = m*(x1-x2)
    // m = (y1-y2)/(x1-x2)
    m = (y1-y2)/(x1-x2);
    n = y2 - m*x2;
}

// Programa principal: lee dos puntos hasta que sean diferentes y luego muestra el módulo del vector que forman y la recta que pasa por ellos.
int main(){
    double p1x, p1y, p2x, p2y, pendiente, independiente;

    cout << "Dime el primer punto: " << endl;
    leer_punto(p1x, p1y);
    do{
        cout << "Dime el segundo punto: " << endl;
        leer_punto(p2x, p2y);
    }while(son_iguales(p1x,p1y,p2x,p2y));

    cout << "La distancia es " << distancia(p1x,p1y,p2x,p2y) << endl;

    calcula_recta(p1x, p1y, p2x, p2y, pendiente, independiente);

    cout << "La recta es: y = " << pendiente << "*x + " << independiente << endl;

    return 0;
}
