/ Ejercicio 2: Es primo o no (versión simple)
#include <iostream>

using namespace std;

int main(){
	int N, divisores = 0;

	// Se podría reducir el rango que se mira, pero con esto es suficiente en este caso
	for(int i = 1; i <= N; i++){
		if(N%i == 0){
			divisores++;
		}
	}

	if(divisores <= 2){
		cout << N << " es primo" << endl;
	} else{
		cout << N << " no es primo" << endl;
	}
	
	return 0;
}
