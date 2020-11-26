#include <iostream>
using namespace std;

// Funciones
bool es_primo(int N){
	int i = 2;

	while(N%i != 0) i++;

	return (i == N);
}

int main()
{
	int N;
	int i = 1;
	bool encontrado = false;

	cout << "Diga un numero: ";
	cin >> N;

	cout << N;
	while(i < N/2 && !encontrado)
	{
		if(es_primo(i) && es_primo(N-i)){
			encontrado = true;
		} else {
			i++;
		}

	}
	if(encontrado){
		cout << N << " = " << i << " + " << N-i;
	} else {
		cout << "No encontrado";
	}
	cout << endl;

	return 0;
}
