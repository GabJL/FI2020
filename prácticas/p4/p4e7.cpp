// Ejercicio 7: Texto
#include <iostream>

using namespace std;

int main(){
	char l;

	cout << "Que texto desea enviar: ";
	l = cin.get();

	while(l != '\n'){
		if(l == ' ') cout << endl;
		else cout << l;
		l = cin.get();
	}

	return 0;
}
