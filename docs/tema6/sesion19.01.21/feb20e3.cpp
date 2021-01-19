#include <iostream>
#include <array>

using namespace std;

const int MAX_TIENDAS = 100;
const int MAX_PROD = 20;

typedef struct{
    string codigo;
    int unidades;
} TProducto;

typedef array<TProducto, MAX_PROD> TArrayProductos;

typedef struct{
    string encargado, direccion, ciudad;
    int cp, num_prod;
    TArrayProductos productos;
} TTienda;

typedef array<TTienda, MAX_TIENDAS> TArrayTiendas;

typedef struct{
    TArrayTiendas tiendas;
    int tam;
} TFranquicia;

int buscar(const TTienda &t, string codigo){
    int pos = -1;
    int i = 0;
    bool encontrado = false;
    while (i < t.num_prod && !encontrado){
        if(t.productos[i].codigo == codigo){
            encontrado = true;
            pos = i;
        }
        i++;
    }
    return pos;
}

void disponible_tiendas_ciudad(const TFranquicia &l, string ciudad, string codigo){
    for(int i = 0; i < l.tam; i++){
        if(l.tiendas[i].ciudad == ciudad){
            cout << "Direccion: " << l.tiendas[i].direccion << " CP: " << l.tiendas[i].cp;
            int pos = buscar(l.tiendas[i], codigo); // pos == -1 si no está y pos != -1 si está y está en la posición pos
            if(pos == -1){
                cout << " y no existe el producto " << codigo << endl;
            } else {
                cout << " y existen " << l.tiendas[i].productos[pos].unidades << " unidades del producto " << codigo << endl;
            }
        }
    }
}

typedef struct{
    string nombre;
    int num_tiendas;
} TCiudad;

typedef array<TCiudad, MAX_TIENDAS> TArrayCiudades;

typedef struct{
    TArrayCiudades ciudades;
    int tam;
} TListaCiudades;

void inicializar_ciudades(TListaCiudades &c){
    c.tam = 0;
}

void insertar_ciudad(TListaCiudades &c, string ciudad){
    if(c.tam < MAX_TIENDAS){
        int pos = c.tam;
        c.ciudades[pos].nombre = ciudad;
        c.ciudades[pos].num_tiendas = 1;
        c.tam++;
    }
}

int buscar_ciudad(const TListaCiudades &c, string ciudad){
    int pos = -1;
    int i = 0;
    bool encontrado = false;
    while (i < c.tam && !encontrado){
        if(c.ciudades[i].nombre == ciudad){
            encontrado = true;
            pos = i;
        }
        i++;
    }
    return pos;
}

void crear_lista(const TFranquicia &l, TListaCiudades &c){
    inicializar_ciudades(c); // c.tam = 0;
    for(int i = 0; i < l.tam; i++){
        int pos = buscar_ciudad(c, l.tiendas[i].ciudad);
        if(pos == -1){ // No está la ciudad
            insertar_ciudad(c, l.tiendas[i].ciudad);
        } else { // La ciudad está en la posicion pos
            c.ciudades[pos].num_tiendas++; // pongo una tienda mas en la ciudad
        }
    }
}

string mayor(const TListaCiudades &c){
    string ciudad = c.ciudades[0].nombre;
    int cant_tienda = c.ciudades[0].num_tiendas;
    for(int i = 1; i < c.tam; i++){
        if(c.ciudades[i].num_tiendas > cant_tienda){
            ciudad = c.ciudades[i].nombre;
            cant_tienda = c.ciudades[i].num_tiendas;
        }
    }
    return ciudad;
}

string ciudad_mas_tiendas(const TFranquicia l){
    string ciudad;
    TListaCiudades c;

    crear_lista(l, c);

    ciudad = mayor(c);

    return ciudad;
}

int main(){
    TFranquicia l;

    l = {
    {{
      {"Juan Perez","Calle 1","Malaga",29001,5, {{ {"cod1",10},{"cod3",5},{"cod8",14},{"cod2",2},{"cod18",30}  }}   },
      {"Lucia Ortiz","Calle 2","Malaga",29003,7, {{ {"cod1",10},{"cod3",5},{"cod9",30},{"cod8",14},{"cod2",2},{"cod18",30},{"cod19",15} }}   },
      {"Julio Ortega","Calle 3","Malaga",29005,2, {{ {"cod1",5},{"cod19",33}  }}   },
      {"Mercedes Diaz","Calle 4","Malaga",29007,1, {{ {"cod1",20} }}   },
      {"Luis Garcia","Calle 5","Malaga",29010,4, {{ {"cod1",1},{"cod3",6},{"cod4",25},{"cod20",12}  }}   },
      {"Maria Ruiz","Calle 6","Sevilla",41001,5, {{ {"cod1",8},{"cod3",50},{"cod8",1},{"cod2",23},{"cod18",3}  }}   },
      {"Pedro Gomez","Calle 7","Sevilla",41003,7, {{ {"cod1",23},{"cod3",15},{"cod9",3},{"cod8",4},{"cod2",22},{"cod18",31},{"cod19",5} }}   },
      {"Claudia Azuaga","Calle 8","Sevilla",41005,2, {{ {"cod1",5},{"cod19",33}  }}   },
      {"Daniel Carmona","Calle 9","Madrid",28007,1, {{ {"cod1",200} }}   },
      {"Carmen Garcia","Calle 10","Madrid",28010,4, {{ {"cod1",14},{"cod3",60},{"cod4",5},{"cod20",18}  }}   },
      {"Antonio Gomez","Calle 11","Zaragoza",50001,3, {{ {"cod3",50},{"cod8",15},{"cod14",10}  }}   },
    }},
    11
    };

    disponible_tiendas_ciudad(l, "Malaga", "cod3");

    cout << "La ciudad con mas tiendas es " << ciudad_mas_tienda(l) << endl;

    return 0;
}
