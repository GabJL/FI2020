#include <iostream>
#include <array>

using namespace std;

const int MAX = 11;

typedef array<int, MAX> TContadorNotas;

int main(){
    int nota;
    TContadorNotas contador;
    for(int i = 0; i < MAX; i++){
        contador[i] = 0;
    }

    cin >> nota;
    while(nota != -1){
        contador[nota]++;

        cin >> nota;
    }

    for(int i = 0; i < MAX; i++){
        cout << "Hay " << contador[i] << " "<< i <<"s";
    }
}
