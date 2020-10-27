// Sentencias de repetición (for): d) Solo potencias de 2 (N valores)
#include <iostream>

using namespace std;

int main(){
	int N, pot;
	cout << "Hasta qué número quiere escribir? ";
	cin >> N;
	pot = 1;
	for (int i = 1; i <= N; i++){ 
		cout << pot << " -> " << pot*pot << endl;
		pot = pot * 2;
	}
	return 0;
}
