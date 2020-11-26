#include <iostream>
using namespace std;

// Funciones
int es_divisor(int i, int N){
	return N%i == 0;
}

bool es_primo(int N){
	int i = 2;

	while(N%i != 0) i++;

	return (i == N);
}

int veces_divide(int i, int N){
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
		if(es_divisor(i, N) && es_primo(i)){
			cout << " x " << i << "^" << veces_divide(i, N);
		}
	}
	cout << endl;

	return 0;
}
