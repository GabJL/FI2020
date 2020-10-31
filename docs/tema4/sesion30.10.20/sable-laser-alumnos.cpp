#include <iostream>
#include "utils.hpp"
using namespace std;

int main(){
	int color, alto, tipo;
	limpiarPantalla();
	cout << "Crea tu propia sable laser (v1.0)" << endl << endl;

	// Lectura de la longitud del sable láser
	// Es un valor entre 4-8 o 0 para indicar que está apagada
	/// TODO: Usando un do-while repita este código hasta que el valor esté en el rango indicado
		cout << "Alto (4-8 o 0 para apagada): ";
		cin >> alto;
	// Fin de lectura de la longitud

	// Lectura del color del sable
	// Puede ser un valor entre 1-6
	/// TODO: Usando un do-while repita este código hasta que el valor esté en el rango indicado
		cout << "1.- Azul" << endl;
		cout << "2.- Verde" << endl;
		cout << "3.- Cian" << endl;
		cout << "4.- Rojo" << endl;
		cout << "5.- Morado" << endl;
		cout << "6.- Amarillo" << endl;
		cout << "Elige el color (1-6): ";
		cin >> color;
	// Fin de lectura de color

	// Lectura del tipo de sable
	// Puede ser un valor entre 1-3
	/// TODO: Usando un do-while repita este código hasta que el valor esté en el rango indicado
		cout << "1.- Clasico" << endl;
		cout << "2.- Kylo" << endl;
		cout << "3.- Darth Maul" << endl;
		cout << "Elige tipo (1-3): ";
		cin >> tipo;
	// Fin de lectura de tipo de sable
	cout << endl;

	// Dibujando la hoja luminosa del sable
	// Cambiamos el color de lo que escribimos
	cambiarColor(color, CLARO, NEGRO, OSCURO);
	/// TODO: Repita esta línea tantas veces como dice el alto
    	cout << "   \u2592" << endl;
	// Fin de dibujar la hoja

	// Volvemos al color normal para dibujar la empuñadura
	cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
	/// TODO:  Haga un switch dependiendo del tipo de sable para dibujar su empuñadura
		// Sable clásico (1)
				cout << "   \u2588" << endl;
    			cout << "   \u2593" << endl;
    			cout << "   \u2593" << endl;
			    cout << "   \u2580" << endl;
		// Sable Kylo (tridente) (r21)
				cambiarColor(color, CLARO, NEGRO, OSCURO);
				/// TODO: Si está apagada (alto es 0) dibuje 2 espacios sino dibuje "\u25C4\u25AC"


				cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
    			cout << "\u25AC\u2588\u25AC";
				cambiarColor(color, CLARO, NEGRO, OSCURO);
				/// TODO: La siguiente sentencia solo debe ejecutarse si no está apagada (alto no es 0)
					cout << "\u25AC\u25BA";
				cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
				cout << endl;
			    cout << "   \u2593" << endl;
    			cout << "   \u2580" << endl;
		// Sable Darth Maul (doble) (3)
          cout << "   \u2588" << endl;
    			cout << "   \u2593" << endl;
    			cout << "   \u2593" << endl;
			    cout << "   \u2588" << endl;
				// Segunda hoja
				cambiarColor(color, CLARO, NEGRO, OSCURO);
				/// TODO: Repita esta sentencia el número de veces indicada por alto
    				cout << "   \u2592" << endl;
        /// TODO: Aquí acaba el switch
	// Fin de dibujar todas
	restaurarColores();
	cout << endl;
	return 0;
}
