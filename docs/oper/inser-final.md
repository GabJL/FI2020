# Operación Insertar al final de un array

Ahora queremos añadir un nuevo elemento en el array al final del mismo. Recuerde:
* Si `tam` es por ejemplo `10`, quiere decir que tenemos ocupadas las posiciones de `0` a `9` y por lo tanto el nuevo elemento debe ir en la posición `10`, es decir, en la posición `tam`.
* Antes de añadir hay que comprobar que hay hueco. Si el array está lleno su tamaño `tam` será igual que `MAX`.
* Insertar son dos pasos: meter el valor en el array e incrementar el tamaño.

Código:

```cpp
void insertar(TLista &l, int valor){
  if(l.tam < MAX){ // Hay hueco?
    l.datos[l.tam] = valor; // Metemos el valor en el array
    l.tam++; // Incrementamos el tamaño
  }
}
```

Uso:
```cpp
  TLista l;
  int x;
  ... // Rellenamos l y obtenemos x
  insertar(l,x);
```
Nota:
* El tamaño solo debe tocarlo la función insertar apropiada (y la de borrar si existe) y no debe modificarlo fuera de esas funciones.

## Caso concreto: devolver si se pudo insertar o no

Pequeña variante del anterior donde además de insertarlo (si se puede) hay que devolver si se insertó o no. Esto implica:
* Cambiar el tipo que devuelve de `void` a `bool`. Entonces también cambiará su uso.
* Declarar una variable de tipo `bool` para indicar si se pudo o no y actualizarla de forma oportuna

```cpp
bool insertar(TLista &l, int valor){
  bool se_puede = false; // Pensamos que no se puede
  if(l.tam < MAX){ // Hay hueco?
    se_puede = true; // Si se pudo
    l.datos[l.tam] = valor; // Metemos el valor en el array
    l.tam++; // Incrementamos el tamaño
  }
  return se_puede;
}
```

Uso:
```cpp
  TLista l;
  int x;
  ... // Rellenamos l y obtenemos x
  if(insertar(l,x)) cout << "El valor se inserto con exito" << endl;
  else              cout << "No se pudo insertar el valor" << endl;
```

## Caso concreto: insertar pero sin repetir

Usaremoa como base el anterior (que devuelve el `bool`) aunque podría utilizarse la versión del inicio sin problema. Ahora la condición para ver si se puede insertar cambia, ya no es solo que haya hueco (`l.tam < MAX`) sino que el valor no esté ya en el array. Pero ya tenemos una función que dice si un elemento [`esta`](esta.md) o no en el array y podemos usarla:

```cpp
bool insertar_sin_repetir(TLista &l, int valor){
  bool se_puede = false; // Pensamos que no se puede
  if(l.tam < MAX && !esta(l,valor)){ // Hay hueco y no está el valor ya en el array
    se_puede = true; // Si se pudo
    l.datos[l.tam] = valor; // Metemos el valor en el array
    l.tam++; // Incrementamos el tamaño
  }
  return se_puede;
}
```
