// Ejercicio 5: capicua
#include <iostream>

using namespace std;

int main(){
	int n, original, inverso = 0;

	cout << "Introduce un numero natural: ";
	cin >> n;
	
	original = n;

	while(n > 0){
		inverso = inverso*10 + n%10;
		n = n/10;
	}

	if(original == inverso){
		cout << "El numero es palindromo" << endl;
	} else {
		cout << "El numero no es palindromo" << endl;
	}

	return 0;
}
