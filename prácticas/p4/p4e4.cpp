// Ejercicio 4: Primos en un rango
#include <iostream>

using namespace std;

int main(){
	int divisores, n1, n2, inf, sup;

	cout << "Introduce dos valores: ";
	cin >> n1 >> n2;
	
	if(n1 < n2){
		inf = n1;
		sup = n2;
	} else {
		inf = n2;
		sup = n1;
	}

	cout << "Los primos en el rango son: ";
	for(int N = inf; N <= sup; N++){
		divisores = 0;
		for(int i = 1; i <= N; i++){
			if(N%i == 0){
				divisores++;
			}
		}

		if(divisores <= 2){
			cout << N << " ";
		}
	}
	cout << endl;
	
	return 0;
}
