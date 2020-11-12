#include <iostream>

using namespace std;

int MCD(int a, int b){
	int mcd = a;

	if(a > b) mcd = b;

	while(a%mcd != 0 || b%mcd != 0) mcd--;

	return mcd;
}

int main(){
	int n1, n2;

	// a
	cout << "MCD(20, 6) = " << MCD(20,6) << endl;
	
	cout << "Dime dos numeros: "; 
	cin >> n1 >> n2;

	// b
	cout << "MCD(" << n1 << ", " << n2 << ") = " << MCD(n1, n2) << endl;

	// c
	cout << "3 x MCD(" << n1 << ", " << n2 << ") = " << 3*MCD(n1, n2) << endl;

	// d
	int n3;
	n3 = MCD(n1+n2, n1*n2);
	cout << "MCD(" << n1+n2 << ", " << n1*n2 << ") = " << n3  << endl;

	// e
	int n1a = n1, n2a = n2;
	n1 = n1a*(n2a/MCD(n1a,n2a));
	n2 = n2a*(n1a/MCD(n1a,n2a));
	cout << "n1 = " << n1 << " n2 = " << n2 << endl;

	// f
	if(MCD(n1a, n2a) == MCD(n2a, n1a)){
		cout << "El orden de los factores no altera el producto" << endl;
	} else {
		cout << "Debo revisar el código, nunca debí llegar aquí" << endl;
	}	
	
	return 0;
}
