#include <iostream>
#include "utils.hpp"
using namespace std;

int main(){
	int color, alto, tipo;
	limpiarPantalla();
	cout << "Crea tu propia sable laser (v1.0)" << endl << endl;
	do{
		cout << "Alto (4-8 o 0 para apagada): ";
		cin >> alto;
	}while(alto != 0 && !(alto >= 4 && alto <= 8));

	do{
		cout << "1.- Azul" << endl;
		cout << "2.- Verde" << endl;
		cout << "3.- Cian" << endl;
		cout << "4.- Rojo" << endl;
		cout << "5.- Morado" << endl;
		cout << "6.- Amarillo" << endl;
		cout << "Elige el color (1-6): ";
		cin >> color;
	}while(color<1 || color > 6);

	do{
		cout << "1.- Clasico" << endl;
		cout << "2.- Kylo" << endl;
		cout << "3.- Darth Maul" << endl;
		cout << "Elige tipo (1-3): ";
		cin >> tipo;
	}while(tipo < 1 || tipo > 3);

	cout << endl;

	cambiarColor(color, CLARO, NEGRO, OSCURO);
	for(int i = 0; i < alto; i++){
		cout << "   \u2592" << endl;	
	}

	cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
	switch(tipo){
		case 1: cout << "   \u2588" << endl;	
    			cout << "   \u2593" << endl;	
    			cout << "   \u2593" << endl;	
			cout << "   \u2580" << endl;
			break;
		case 2:	cambiarColor(color, CLARO, NEGRO, OSCURO);
			if(alto == 0){
				cout << "  ";
			} else {
				cout << "\u25C4\u25AC";	
			}
			cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
    			cout << "\u25AC\u2588\u25AC";	
			if(alto != 0){
				cambiarColor(color, CLARO, NEGRO, OSCURO);
				cout << "\u25AC\u25BA";	
				cambiarColor(BLANCO, CLARO, NEGRO, OSCURO);
			}
			cout << endl;
			cout << "   \u2593" << endl;	
    			cout << "   \u2580" << endl;	
				break;
		case 3: cout << "   \u2588" << endl;	
    			cout << "   \u2593" << endl;	
    			cout << "   \u2593" << endl;	
			cout << "   \u2588" << endl;
			cambiarColor(color, CLARO, NEGRO, OSCURO);
			for(int i = 0; i < alto; i++){
    				cout << "   \u2592" << endl;	
			}
	}
	restaurarColores();
	cout << endl;
	return 0;
}
