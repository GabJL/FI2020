// Ejercicio para el uso de registros y funciones ya con más complejidad
#include <iostream>
#include <cstdlib> // Para la generación de aleatorio
#include <ctime> // Para la generación de la semilla de los aleatorios

using namespace std;

// Definir TCarta (valor y figura)
typedef struct{
    int valor;
    string figura;
} TCarta;

void leer_carta(TCarta &c){
    cout << "Valor: ";
    cin >> c.valor;
    cout << "Figura: ";
    cin >> c.figura;
}

void mostrar_carta(const TCarta &c){
    cout << c.valor << " de " << c.figura << endl;
}

TCarta generar_aleatoria(){
    TCarta c;

    srand(time(0));

    c.valor = (rand()%10) + 1;

    switch(rand()%4){
        case 0: c.figura = "corazones"; break;
        case 1: c.figura = "picas"; break;
        case 2: c.figura = "treboles"; break;
        case 3: c.figura = "diamantes"; break;
    }


    return c;
}

bool PrimeraEsMayor(const TCarta &c1, const TCarta &c2){
    bool res=false;

    if(c1.valor > c2.valor){
        res=true;
    }else if(c1.valor==c2.valor){
        if(c1.figura>c2.figura){
            res=true;
        }
    }
    return res;
    //return (c1.valor > c2.valor || (c1.valor == c2.valor && c1.figura > c2.figura));
}

bool comprobar_si_iguales(const TCarta &c1, const TCarta &c2)
{
  bool res=true;

  if(c1.valor!=c2.valor || c1.figura!=c2.figura)
  {
    res=false;
  }
  return res;
}

int main(){
    /*TCarta carta1 = {9, "corazones"}, carta2;

    mostrar_carta(carta1);
    leer_carta(carta1);
    mostrar_carta(carta1);
    carta2 = generar_aleatoria();
    mostrar_carta(carta2);*/

    TCarta carta1, carta2;
    leer_carta(carta1);

    do{
        carta2 = generar_aleatoria();
    }while(comprobar_si_iguales(carta1, carta2));

    cout << "Carta del usuario: ";
    mostrar_carta(carta1);
    cout << "Carta del ordenador: ";
    mostrar_carta(carta2);

    if(PrimeraEsMayor(carta1, carta2)){
        cout << "Ganas tu!" << endl;
    } else {
        cout << "Gana el ordenador" << endl;
    }

    return 0;
}
