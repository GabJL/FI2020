// Sentencias de repetición (for): a) El límite depende del usuario
#include <iostream>

using namespace std;

int main(){
	int N;
	cout << "Hasta qué número quiere escribir? ";
	cin >> N;
	for (int i = 0; i <= N; i++){ 
		cout << i << " -> " << i*i << endl;
	}
	return 0;
}
