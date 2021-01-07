# Operación buscar

Esta función es muy parecida a [`esta`](esta.md). Analice y entienda bien dicha función antes de leer esta (mi descripción se basa en que se sabe hacer la función [`esta`](esta.md)). 

La diferencia de esta función respecto a [`esta`](esta.md) es que debemos devolver la posición del elemento que cumple la condición. Nuestra idea será la siguiente:
* Devolver una posición inválida (`i < 0` o `i >= l.tam`) para indicar que no se ha encontrado. En concreto usaré `-1` pero vale cualquiera.
* Devolver la posición si está.

Para ello únicamente hay que cambiar el tipo devuelto (ahora no es `bool` sino `int`) y tener una variable `pos` donde tendremos la posición a devolver:

```cpp
int buscar(const TLista &l, int valor){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  int pos = -1; // Posición donde está el elemento que cumple la condición. Inicialmente consideramos que no hay ninguno y ponemos el valor que indica eso
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(cumpleCondicion(l.datos[i], valor)){ // El valor actual cumple nuestra condición
      encontrado = true;
      pos = i; // Actualizamos la posicion
    }
    i++; // Seguimos mirando el array
  }
  
  return pos;
}
```
Notas:
* Siempre debemos asegurarnos de no salirnos del array (`i  < l.tam`).
* Poner `!encontrado` es equivalente a poner `encontrado == false` pero queda más legible y claro.
Uso:
```cpp
  TLista l;
  int x;
  ... // Aquí se rellenan l y x de forma apropiada
  int pos = buscar(l,x);
  if(pos != -1) cout << "El valor esta en el array en la posicion " << pos << endl;
  else          cout << "El valor no esta en el array" << endl;
```
Nota:
* Es recomendable capturar la posición en una variable y luego utilizarla tantas veces como queramos en vez de llamarla varias veces.

A continuación se muestran casos particuales que se pueden hacer de formas:
* Reemplazando en la función `esta` la llamada a `cumpleCondicion` con la condición concreta o
* Implementando la función `cumpleCondicion`. Esta es recomendable si la condición es compleja.

## Caso concreto: posición del valor x en el array

Este es el caso más simple y solo es comprobar que el i-ésimo valor del array es el valor buscado: `l.datos[i] == x`:

```cpp
int buscar(const TLista &l, int x){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  int pos = -1;
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] == x){ // El valor actual cumple nuestra condición
      encontrado = true;
      pos = i;
    }
    i++; // Seguimos mirando el array
  }
  
  return pos;
}
```

# Caso concreto: posición del primer valor mayor que x

Este caso es muy similar al anterior pero ahora en vez de ser igual tiene que ser mayor: `l.datos[i] > x`:

```cpp
int buscar(const TLista &l, int x){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  int pos = -1;
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] > x){ // El valor actual cumple nuestra condición
      encontrado = true;
      pos = i;
    }
    i++; // Seguimos mirando el array
  }
  
  return pos;
}
```

# Caso concreto: posición del primer valor que es igual al siguiente

Este caso ya si es más diferente del anterior:
* La función ya no requiere ningún parámetro adicional a la lista
* Comprobar que hay dos valores consecutivos igual, es comprobar que el valor actual es igual que el anterior: `l.datos[i] == l.datos[i-1]`.
* Como observa consultamos `i-1` para que no falle debemos empezar `i` en `1`.
* Observe que comprobamos que son igual las posiciones `i-1` e `i`, si se cumple, entonces el primer valor que es igual al siguiente es el `i-1`

```cpp
int buscar(const TLista &l){
  int i = 1; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  int pos = -1;
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] == l.datos[i-1]){ // El valor actual cumple nuestra condición
      encontrado = true;
      pos = i-1;
    }
    i++; // Seguimos mirando el array
  }
  
  return pos;
}
```
