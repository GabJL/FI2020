// Sentencias de repetición (for): c) Solo potencias de 2
#include <iostream>

using namespace std;

int main(){
	int N;
	cout << "Hasta qué número quiere escribir? ";
	cin >> N;
	for (int i = 1; i <= N; i = i * 2){ 
        	cout << i << " -> " << i*i << endl;
	}
	return 0;
}
