// Mostrando qué carácter escribe en diferentes casos
#include <iostream>

using namespace std;

int main(){
    char letra1, letra2 = 'a'; // código ASCII de ‘a’:  97
    char letra3 = 50; // código ASCII de ‘2’: 50

    cout << "Caso 1: ";
    cout << letra2;
    
    cout << endl << "Caso 2: ";
    letra1 = letra2 + 3;
	cout << letra1;
    
    cout << endl << "Caso 3: ";
    cout << letra2 + 3;
    
    cout << endl << "Caso 4: ";
    cout << char(letra2 + 3);
    
    cout << endl << "Caso 5: ";
    cout << letra3;
    
    cout << endl << "Caso 6: ";
    cout << int(letra3);
    
    cout << endl << "Caso 7: ";
    cout << letra3 - '0';
    
    cout << endl << "Caso 8: ";
    cout << char(letra3 - '0');
    cout << endl;

    return 0;
}
