#include <iostream>
#include <cmath>
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
	int a, b, min, mcm = 1, vecesA, vecesB;

	cout << "Diga dos numero: ";
	cin >> a >> b;
	
	max = a;
	if(b > a) max = b;

	for(int i = 2; i <= max; i++)
	{
		if(esPrimo(i)){
			if(esDivisor(i, a) or esDivisor(i, b)){
				vecesA = vecesDivide(i,a);
				vecesB = vecesDivide(i,b);
				if(vecesA > vecesB) 	mcm = mcm*pow(i,vecesA);
				else					mcm = mcm*pow(i,vecesB);
			}
		}
	}
	cout << "El mcm("<<a<<","<<b<<") = " << mcm << endl;

	return 0;
}
