// Note que debemos incluir cmath para usar sqrt (raiz cuadrada)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, raiz, x1, x2;

    cout << "Dime los coeficientes: ";
    cin >> a >> b >> c;
    raiz = sqrt(b*b - 4*a*c);
    x1 = (-b + raiz)/(2*a);
    x2 = (-b - raiz)/(2*a);
    cout << "La primera solucion es " << x1 << endl;
    cout << "La segunda solucion es " << x2 << endl;
    
    return 0;
}
