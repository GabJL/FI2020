#include <iostream>

using namespace std;

// tipos

typedef struct{
    string nombre;
    double precio;
    int paginas;
    string editorial;
} TLibro;

int main(){
    TLibro libro1, libro2 = {"El Marciano", 20.5, 407, "Nova"};

    // MAL: cin >> libro1;
    cout << "Nombre del libro: ";
    // Solo lee una palabra: cin >> libro1.nombre;
    getline(cin, libro1.nombre);
    cout << "Precio: ";
    cin >> libro1.precio;
    cout << "Paginas: ";
    cin >> libro1.paginas;
    cout << "Editorial: ";
    cin >> libro1.editorial;

    if(libro1.paginas > libro2.paginas){
        cout << libro1.nombre << " con " << libro1.paginas << " paginas" << endl;
    } else {
        cout << libro2.nombre << " con " << libro2.paginas << " paginas" << endl;
    }

    TLibro mas_caro;
    if(libro1.precio > libro2.precio){
        libro1.precio = libro1.precio*0.95;
        mas_caro = libro1;
    } else {
        libro2.precio = libro2.precio*0.95;
        mas_caro = libro2;
    }

    cout << "El libro " << mas_caro.nombre << " ahora cuesta " << mas_caro.precio << " euros" << endl;

    return 0;
}
