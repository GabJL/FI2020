// Si al ejecutarlo da un error:
// - Menu Settings -> Compiler
// - En Linker Settings:  En el cuadro de texto "Other linker options" pon -Wl,--stack,52800000

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <array>
#include <string>

using namespace std;

// Constantes
const int MAX = 5000;
// Tipos
typedef struct{
    string titulo;
    int anio;
    string director;
    int duracion;
    string actor1, actor2, actor3;
    double presupuesto, ingresos;
    string pais;
    double nota;
} TPelicula;

// Array completo de pelis
typedef array<TPelicula, MAX> TPelis;

// Array incompleto de pelis
typedef struct{
    TPelis pelis;
    int tam;
} TListaPeliculas;

// Funciones

// NO TOCAR
void leerFichero(TListaPeliculas &p){
    ifstream f("movies-reducida.txt");
    if(!f){
        cout << "El fichero de las peliculas no existe" << endl;
        exit(-1);
    }
    f >> p.tam >> ws;
    for(int i=0; i < p.tam; i++){
            getline(f,p.pelis[i].director);
            f >> p.pelis[i].duracion >> ws;
            getline(f,p.pelis[i].actor2);
            f >> p.pelis[i].ingresos >> ws;
            getline(f,p.pelis[i].actor1);
            getline(f,p.pelis[i].titulo);
            getline(f,p.pelis[i].actor3);
            getline(f,p.pelis[i].pais);
            f >> p.pelis[i].presupuesto >> p.pelis[i].anio >> p.pelis[i].nota >> ws;
    }
    cout << "Fichero de peliculas leido con exito!" << endl;
    f.close();
}

// AÑADIR AQUI LAS NUEVAS
void insertar(TListaPeliculas &lp, const TPelicula &p){
    if(lp.tam < MAX){ // Hay hueco
        lp.pelis[lp.tam] = p;
        lp.tam++;
    }
}

void mostrar_peli(const TPelicula &p){
    cout << p.titulo << " de " << p.director << " (" << p.anio << "). Puntuacion: " << p.nota << endl;
}

void mostrar_todas_las_pelis(const TListaPeliculas &lp){
    for(int i = 0; i < lp.tam; i++){
        mostrar_peli(lp.pelis[i]);
    }
}

// Programa principal

int main ()
{
    TListaPeliculas lp;
    leerFichero(lp); // Rellena lp con los datos del fichero

    cout << "Se han leido " << lp.tam << " peliculas" << endl;
    cout << "La primera peli es " << lp.pelis[0].titulo << endl;
    cout << "El presupuesto de la peli en la pos 100 es " << lp.pelis[100].presupuesto << endl;
    cout << "La primera letra del pais de la segunda peli es " << lp.pelis[1].pais[0] << endl;
    //int ultima_peli = lp.tam - 1;
    cout << "La nota de la ultima peli es " << lp.pelis[lp.tam - 1].nota << endl;

    TPelicula peli = {"Avengers: Endgame", 2019, "Russo Brothers", 181, "Robert Downey Jr.",
                        "Chris Evans", "Mark Ruffalo", 356000000, 2800000564, "USA", 8.5};
    insertar(lp, peli);

    mostrar_peli( lp.pelis[lp.tam-1] );

    cout << endl << "Listado de pelis: " << endl;
    mostrar_todas_las_pelis(lp);

    return 0;
}
