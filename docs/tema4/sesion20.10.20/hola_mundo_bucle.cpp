// Sentencias de repetición: repetir hola mundo N veces
#include <iostream>

using namespace std;

int main()
{
     int N; 
     int numVeces;
     
     cout << "Dime cuantas veces quieres que diga hola: "; 
     cin >> N; 

     numVeces = 0; // No hemos escrito nunca hola mundo
     while( numVeces < N ){ // Mientras no escribamos al menos N veces
     
         cout << "Hola Mundo"<< endl;  
    
         numVeces++; // Hemos escrito una vez más hola mundo     
     }
     return 0;
}
