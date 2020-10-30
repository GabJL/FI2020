// Cálculo del mcm. 
#include <iostream>

using namespace std;

int main(){
	int num1, num2, mcm;

	cout << "Diga dos numeros: ";
	cin >> num1 >> num2;

	if(num1 >= num2){
		mcm = num1;
	}else{
		mcm = num2;
	}

	while(mcm%num1 != 0 || mcm%num2 != 0){
		mcm++;
	}
	
	cout << "El mcm es " << mcm << endl;
	return 0;
}
