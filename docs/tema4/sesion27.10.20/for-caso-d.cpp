// Sentencias de repetición (for): d) Solo potencias de 2 (N valores)
#include <iostream>

using namespace std;

int main(){
	int N;
	cout << "Hasta qué número quiere escribir? ";
	cin >> N;
	for (int i = 1, pot = 1; i <= N; i++, pot = pot*2){ 
		cout << pot << " -> " << pot*pot << endl;
	}
	return 0;
}
