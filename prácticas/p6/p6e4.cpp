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
	int a, b, min, mcm = 1, vecesA, vecesB;

	cout << "Diga dos numero: ";
	cin >> a >> b;
	
	max = a;
	if(b > a) max = b;

	for(int i = 2; i <= max; i++)
	{
		if(es_primo(i)){
			if(es_divisor(i, a) or es_divisor(i, b)){
				vecesA = veces_divide(i,a);
				vecesB = veces_divide(i,b);
				if(vecesA > vecesB) 	mcm = mcm*pow(i,vecesA);
				else			mcm = mcm*pow(i,vecesB);
			}
		}
	}
	cout << "El mcm("<<a<<","<<b<<") = " << mcm << endl;

	return 0;
}
