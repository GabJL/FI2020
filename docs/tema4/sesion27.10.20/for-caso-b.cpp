// Sentencias de repetición (for): b) Solo impares 
#include <iostream>

using namespace std;

int main(){
	int N;
	cout << "Hasta qué número quiere escribir? ";
	cin >> N;
	for (int i = 1; i <= N; i = i + 2){ 
		cout << i << " -> " << i*i << endl;
	}
	return 0;
}
