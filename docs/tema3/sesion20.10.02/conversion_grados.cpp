// Ejemplo: conversor de grados celsius (centígrados) a farenheit
#include <iostream>

using namespace std;

int main(){
	double gradC, gradF;
	cout << "Que temperatura hace: ";
	cin >> gradC;

	gradF = 1.8*gradC + 32;
	cout << "En grados Farenheit son " << gradF << endl;
	return 0;
}
