#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Inicializa los núeros aleatorios, llamarla una única vez, antes de cualquier invocación de aleatorio
void iniciarAleatorios()
{
    srand(time(0));
}
// Genera un número aleatorio entre a y b (ambos incluidos)
int siguienteAleatorio (int a, int b)
{
    return (rand()%(b-a+1)) + a;
}

void generarSecuencia(int &s1, int &s2, int &s3)
{
    s1 = siguienteAleatorio(0,9);

    do{
        s2 = siguienteAleatorio(0,9);
    }while(s1 == s2);

    do{
        s3 = siguienteAleatorio(0,9);
    }while(s1 == s2 || s1 == s3 || s2 == s3);
}

bool esSolucion(int s1, int s2, int s3, int i1, int i2, int i3)
{
    return s1 == i1 && s2 == i2 && s3 == i3;
}

void leerIntento(int &i1, int &i2, int &i3)
{
    cout << "Dame una serie: ";
    cin >> i1 >> i2 >> i3;
}

void escribirColor(int pos, int s_pos, int s1, int s2)
{
    if(pos == s_pos) cout << " Verde ";
    else if(pos == s1 || pos == s2) cout << " Amarillo ";
    else cout << " Rojo ";
}

int main()
{
    int sol1, sol2, sol3, intento1, intento2, intento3;
    iniciarAleatorios();
    generarSecuencia(sol1, sol2, sol3);
    do{
        leerIntento(intento1, intento2, intento3);
        escribirColor(intento1, sol1, sol2, sol3);
        escribirColor(intento2, sol2, sol1, sol3);
        escribirColor(intento3, sol3, sol2, sol1);
        cout << endl;
    }while(!esSolucion(sol1, sol2, sol3, intento1, intento2, intento3));
    cout << "Enhorabuena, acertaste!!!";

    return 0;
}

