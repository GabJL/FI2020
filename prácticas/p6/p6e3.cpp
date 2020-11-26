#include <iostream>
using namespace std;

// Funciones
int esDivisor(int i, int N){
	return N%i == 0;
}

bool esPrimo(int N){
	int i = 2;

	while(N%i != 0) i++;

	return (i == N);
}

int vecesDivide(int i, int N){
	int contador = 0;
	while(N%i == 0){ 
		N = N/i;
		contador++;
	}
	return contador;
}

int main()
{
	int N;

	cout << "Diga un numero: ";
	cin >> N;

	cout << N << " = 1^1";
	for(int i = 2; i <= N; i++)
	{
		if(esDivisor(i, N) && esPrimo(i))
			cout << " x " << i << "^" << vecesDivide(i, N);
	}
	cout << endl;

	return 0;
}
