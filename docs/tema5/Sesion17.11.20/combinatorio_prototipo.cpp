#include <iostream>

using namespace std;

// Prototipos
int combinatorio(int n, int m);
int factorial(int N);

// main
int main(){
   int n, m;
   cout << "Dime n y m: ";
   cin >> n >> m;
   cout << "Combinatorio: " << combinatorio(n, m) << endl;
   return 0;
}


// Código de las funciones
int combinatorio(int n, int m){
   return factorial(n) / (factorial(m) * factorial(n-m));
}

int factorial(int N){
   int fact = 1;
   for(int i = 1; i <= N; i++)
       fact = fact * i;
   return fact;
}
