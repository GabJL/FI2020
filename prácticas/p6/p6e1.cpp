#include <iostream>
#include <cmath>
using namespace std;

const int MESES = 12;

bool es_bisiesto(int a)
{
    return ((a%4) == 0) && ((a%100)!=0 || (a%400==0));
}

int dias_mes(int m, int a)
{

    int dias;
    switch(m)
    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dias=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dias = 30;
        break;
    case 2:
        if (es_bisiesto(a))
        {
            dias = 29;
        }
        else
        {
            dias = 28;
        }
        break;
    }
    return dias;
}



bool valida(int d, int m, int a)
{
    return ((a>=1 && a<= 2500) &&
            (m>=1 && m<=12) &&
            (d>=1 && d<=dias_mes(m,a)));
}

//------------------------------------

void leer_fecha (int& d, int& m, int& a)
{

    cout <<"Dia: ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;
    cout << "Año: ";
    cin >> a;

    while(!valida(d,m,a))
    {
        cout << "\nFecha no valida, introduzcala de nuevo" << endl;
        cout <<"Dia: ";
        cin >> d;
        cout << "Mes: ";
        cin >> m;
        cout << "Año: ";
        cin >> a;
    }

}

//------------------------------------

void escribir_fecha (int d, int m, int a) {
    cout << d << "/" << m << "/" << a;
}


int main() {
    int dia, mes, annio;

    cout << "Introduzca una fecha" << endl;
    leer_fecha (dia,mes,annio);

    cout << "El mes de esta fecha ";

    escribir_fecha(dia,mes,annio);

    cout << " tiene " << dias_mes(mes, annio);
    cout << endl;

    return 0;



}
