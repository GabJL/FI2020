#include <iostream>

using namespace std;

// tipos
typedef struct {
	string titulo;
	double precio;
	int paginas;
	string editorial;
} TLibro;


int main(){
	TLibro libro1, libro2 = {"El Marciano", 20.5, 407, "Nova"};

	cout << "Dime los datos de un libro: " << endl;
	cout << "Titulo: "; getline(cin, libro1.titulo); // El título pueden ser varias palabras
	cout << "Precio: "; cin >> libro1.precio;
	cout << "Paginas: "; cin >> libro1.paginas;
	cout << "Editorial: "; cin >> libro1.editorial; // Supondremos que la editorial es una única palabra

	if(libro1.paginas > libro2.paginas){
		cout << "El libro " << libro1.titulo << " tiene mas paginas (" << libro1.paginas << ")" << endl;
	} else {
		cout << "El libro " << libro2.titulo << " tiene mas paginas (" << libro2.paginas << ")" << endl;
	}

	if(libro1.precio > libro2.precio){
		libro1.precio *= 0.95;
		cout << "El libro " << libro1.titulo << " cuesta ahora " << libro1.precio << " euros" << endl;		
	} else {
		libro2.precio *= 0.95;
		cout << "El libro " << libro2.titulo << " cuesta ahora " << libro2.precio << " euros" << endl;		
	}
	return 0;
}
