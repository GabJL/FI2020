#include <iostream>

using namespace std;

// Código de las funciones
int factorial(int N){
   int fact = 1;
   for(int i = 1; i <= N; i++)
       fact = fact * i;
   return fact;
}

int combinatorio(int n, int m){
   return factorial(n) / (factorial(m) * factorial(n-m));
}

// main
int main(){
   int n, m;
   cout << "Dime n y m: ";
   cin >> n >> m;
   cout << "Combinatorio: " << combinatorio(n, m) << endl;
   return 0;
}
