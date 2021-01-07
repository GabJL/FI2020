// Las palabras que empiezan por # se llaman directivas e indican información para el proceso de compilado
// Por ejemplo #include añade un fichero dentro de otro 
// Aqui se utilizan otras:
// #define SIM hacemos que el símbolo SIM exista
// #if / #elif / #else / #end funciona como un if/else if/else/} pero para el proceso de compilación.

// En este caso concreto:
// - Cuando se compila el compilador añade ciertos símbolos/etiquetas específicas de tu equipo (sistema operativo, compilador, ...)
// - Aquí preguntamos si la etiqueta __WIN32 o __WIN64 existen. Si existen es que estás compilando en windows y entonces creamos la etiquete TERMCOLOR_OS_WINDOWS
// - Si no existen el #define ese no se compila y se ignora

#if defined(_WIN32) || defined(_WIN64)
#   define TERMCOLOR_OS_WINDOWS
#elif defined(__APPLE__)
#   define TERMCOLOR_OS_MACOS
#elif defined(__unix__) || defined(__unix)
#   define TERMCOLOR_OS_LINUX
#else
#   error unsupported platform
#endif

#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

// Aquí hacemos lo mismo: si hemos creado las etiquetas indicando que el sistema operativo es linux o mac entonces incluimos el fichero unistd.h
// Ese fichero no existe en windows y dará error si lo intentamos en ese sistema operativo. En cambio en windows hay que incluir otros ficheros
// Igualmente muchos de los códigos siguiente depende del sistema operativo. Debe notar que el código del sistema operativo no utilizado directamente
// no se compilará (es como si no existiese)

#if defined(TERMCOLOR_OS_MACOS) || defined(TERMCOLOR_OS_LINUX)
#   include <unistd.h>
#elif defined(TERMCOLOR_OS_WINDOWS)
#   include <io.h>
#   include <windows.h>
#endif

using namespace std;

// Constantes:

// Colores
const int NEGRO     = 0;
const int AZUL      = 1;
const int VERDE     = 2;
const int CIAN      = 3;
const int ROJO      = 4;
const int MORADO    = 5;
const int AMARILLO  = 6;
const int BLANCO    = 7;

// Intensidad del color
const int OSCURO    = 0;
const int CLARO     = 1;


// Como cambiar el color de la letra depende del sistema operativo
// - En linux es escribir en el pantalla unos códigos especiales
// - En windows es cambiar las propiedades del terminal
void cambiarColor(int letra, int intensidadLetra, int fondo, int intensidadFondo){
    #if defined(TERMCOLOR_OS_MACOS) || defined(TERMCOLOR_OS_LINUX)
        int bg, fg;
            switch(fondo){
                case NEGRO:    bg = 40; break;
                case AZUL:     bg = 44; break;
                case VERDE:    bg = 42; break;
                case CIAN:     bg = 46; break;
                case ROJO:     bg = 41; break;
                case MORADO:   bg = 45; break;
                case AMARILLO: bg = 43; break;
                case BLANCO:   bg = 47; break;
            }
            switch(letra){
                case NEGRO:    fg = 30; break;
                case AZUL:     fg = 34; break;
                case VERDE:    fg = 32; break;
                case CIAN:     fg = 36; break;
                case ROJO:     fg = 31; break;
                case MORADO:   fg = 35; break;
                case AMARILLO: fg = 33; break;
                case BLANCO:   fg = 37; break;
            }
        if(intensidadFondo == CLARO){
            bg += 60;
        }
        if(intensidadLetra == CLARO){
            fg += 60;
        }
        cout << "\033[0;" << fg << ";" << bg << "m";
    #elif defined(TERMCOLOR_OS_WINDOWS)
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        int color = (letra + intensidadLetra*8) + (fondo + intensidadFondo*8)*16;
        SetConsoleTextAttribute(hConsole, color);
    #endif
}

void restaurarColores(){
    #if defined(TERMCOLOR_OS_MACOS) || defined(TERMCOLOR_OS_LINUX)
	cout << "\033[0m";
    #elif defined(TERMCOLOR_OS_WINDOWS)
	cambiarColor(BLANCO, OSCURO, NEGRO, OSCURO);
    #endif
}



// En la linea de comando (terminal) existen comandos que borran la pantalla: cls para windows y clear para linux
// system es una función que nos permite ejecutar un programa externo

void limpiarPantalla()
{
#if defined(TERMCOLOR_OS_MACOS) || defined(TERMCOLOR_OS_LINUX)
	system("clear");
#elif defined(TERMCOLOR_OS_WINDOWS)
	system("cls");
#endif
}

// Similar al anterior

void pausa()
{
#if defined(TERMCOLOR_OS_MACOS) || defined(TERMCOLOR_OS_LINUX)
	system("sh -c \"read -p 'press ENTER ' KEY\"");
#elif defined(TERMCOLOR_OS_WINDOWS)
	system("pause");
#endif

}

// Los numeros aleatorios no son aleatorios sino son generados usando una ecuación que depende de un valor inicial
// Si le paso un valor fijo siempre genera los mismos números aleatorios
// Para que cambie le pasamos la hora actual (time(0) - segundos transcurridos desde el 1 de enero de 1970)

void iniciarAleatorios(){
		srand(time(0));
}

// rand() genera usando la ecuación matemática previamente comenado un numero entre 0 y RAND_MAX (constante que es un valor muy alto)
// Para limitar el rango a [min, max] se emplea la formaula indicada

int generarAleatorio(int min, int max)
{
    return rand()%(max - min + 1) + min;
}

// Peli por defecto
const string PELI = "Rick y Morty";

string seleccionarPeliAzar()
{
	ifstream f("peliculas.txt"); // Abrimos el fichero
	int num_pelis, peli_elegida, pelis_leidas;
	string nombre_peli;

	if(!f) // Si el fichero dio error al abrirse (seguramente porque no existía)
	{
		cout << "Asegurese que el fichero peliculas.txt esta en el directorio donde el ejecutable" << endl;
		cout << "Se elegira la peli por defecto" << endl;
		nombre_peli = PELI;
	}
	else // El fichero se abrio bien
	{
		iniciarAleatorios();

		// Leer de un fichero es como leer de cin
		f >> num_pelis; // el fichero tiene al inicio un numero con la cantidad de líneas (películas que tiene)
		pelis_leidas = 0;
		peli_elegida = generarAleatorio(0,num_pelis);
		getline(f, nombre_peli); // Leemos una línea (pelicula/serie) entera
		while(pelis_leidas < peli_elegida)
		{
			getline(f, nombre_peli);
			pelis_leidas++;
		}
	}

	return nombre_peli;
}

// Esto se puede generar usando cualquier página que genere texto "ASCII art"
// El único detalle a tener en cuenta es que la \ tiene un significado especial y para que se dibuje bien hay que reemplazar la \ por \\

void dibujarTitulo(string nombre)
{
	cout << endl;
	cout << "   _____  .__                                     .___      " << endl;
	cout << "  /  _  \\ |  |__   ___________   ____ _____     __| _/____  	" << endl;
 	cout << " /  /_\\  \\|  |  \\ /  _ \\_  __ \\_/ ___\\\\__  \\   / __ |/  _ \\ 	" << endl;
	cout << "/    |    \\   Y  (  <_> )  | \\/\\  \\___ / __ \\_/ /_/ (  <_> )	" << endl;
	cout << "\\____|__  /___|  /\\____/|__|    \\___  >____  /\\____ |\\____/ 	" << endl;
	cout << "        \\/     \\/                   \\/     \\/      \\/       	" << endl;
	cout << endl;
	cout << "By " << nombre << endl << endl;
}

// Similar al previo

void dibujarHangman(int fallos)
{
	cout << "  +---+" << endl;
	cout << "  |   |" << endl;
	cout << "  ";
	if(fallos>0)
		cout << "0";
	else 
		cout << " "; 
	cout << "   |" << endl;
	cout << " ";
	if(fallos>1)
		cout << "/";
	else 
		cout << " ";
	if(fallos>2)
		cout << "|";
	else 
		cout << " ";
	if(fallos>3)
		cout << "\\";
	else 
		cout << " ";
	cout << "  |" << endl;
	cout << " ";
	if(fallos>4)
		cout << "/";
	else 
		cout << " ";
	cout << " ";
	if(fallos>5)
		cout << "\\";
	else 
		cout << " ";
	cout << "  |" << endl;
	cout << "      |" << endl;
	cout << "=======" << endl;
}
