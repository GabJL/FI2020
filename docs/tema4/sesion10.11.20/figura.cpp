// Más figuras
#include <iostream>

using namespace std;

int main(){
	int rep, alt, numEsp, numAst;

	cout << "Dime la altura: ";
	cin >> alt;

	cout << "Numero de repeticiones: ";
	cin >> rep;

	cout << endl;

	numEsp = alt-1;
	numAst = 1;

	for(int linea = 1; linea <= alt; linea++){
		for(int r = 1; r <= rep; r++){
			for(int e = 1; e <= numEsp; e++) cout << " ";
			for(int a = 1; a <= numAst; a++) cout << "*";
			cout << " ";
		}
		cout << endl;
		numEsp--;
		numAst++;
	}

	return 0;
}
