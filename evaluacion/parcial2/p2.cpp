#include <iostream>
#include <cmath>

using namespace std;

// Prototipos:
void leer_coordenada(int &x, int &y);
double distancia(int x1, int y1, int x2, int y2);
void copiar_coordenadas(int x1, int y1, int &x2, int &y2);
bool son_iguales(int x1, int y1, int x2, int y2);

int main(){
    int x, y, x_ant = 0, y_ant = 0, x_lej, y_lej, repet = 0;
    double dist_total = 0, dist_max = 0, dist_actual, dist_00;

    cout << "Introduzca las coordenadas visitadas: ";
    do{
        leer_coordenada(x,y);
        dist_actual = distancia(x_ant, y_ant, x, y);
        dist_00 = distancia(x, y, 0, 0);
        dist_total += dist_actual;
        if(dist_00 > dist_max){
            dist_max = dist_00;
            copiar_coordenadas(x, y, x_lej, y_lej);
        }

        if(dist_actual == 0){
            repet++;
        }

        copiar_coordenadas(x, y, x_ant, y_ant);
    }while(!son_iguales(x,y, 0, 0));

    cout << "Distancia recorrida: " << dist_total << " metros" << endl;
    cout << "La posicion mas lejana alcanzada fue (" << x_lej << ", " << y_lej << ")" << endl;
    cout << "No se movio en " << repet << " ocasiones" << endl;

    return 0;
}

// Funciones:
void leer_coordenada(int &x, int &y){
    cin >> x >> y;
}
double distancia(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void copiar_coordenadas(int x1, int y1, int &x2, int &y2){
    x2 = x1;
    y2 = y1;
}

bool son_iguales(int x1, int y1, int x2, int y2){
    return (x1 == x2) && (y1 == y2);
}
