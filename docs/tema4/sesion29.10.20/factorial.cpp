// Sentencia de repetición: factorial
#include <iostream>

using namespace std;

int main(){
	int factorial = 1, N;

	cout << "Dime el valor del que quiere calcular el factorial: ";
	cin >> N;

	for(int i = 2; i <= N; i++){
		factorial = factorial * i;
	}

	cout << N << "! = " << factorial << endl;	

	return 0;
}
