// Tema 4: Sentencia de selección switch: calculadora simple

#include <iostream>

using namespace std;

int main(){
	double op1, op2;
	char operador;
	
	cout << "Dime el primer operando: ";
	cin >> op1;
	cout << "Fime el segundo operando: ";
	cin >> op2;
	cout << "Dime la operacion: ";
	cin >> operador;

	cout << "El resultado es: ";
	switch(operador){
		case '+': cout << op1 + op2 << endl; break;
		case '-': cout << op1 - op2 << endl; break;
		case '*': cout << op1 * op2 << endl; break;
		case '/': if(op2 == 0){
				cout << "ERROR: Diviendo entre 0" << endl;
			} else {
				cout << op1 / op2 << endl; 
			}; break;
		default: cout << "ERROR: La operacion no esta permitida" << endl;
	} 

	return 0;
}
