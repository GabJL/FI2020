# Operación Esta

Esta función debe comprobar si un elemento de un array cumple una condición y devolver un `bool` indicando si hay alguno o no.

Esta función debe ir mirando todos los valores del array y en cada valor mirar si cumple o no la condición. También debe ser eficiente y cuando encuentre el valor que cumple la condición debe parar y evitar más posiciones de las necesarias.

Código general (supondrémos que tenemos una función con cabecera `bool cumpleCondicion(int x, int y)` que nos dice si el valor cumple la condición buscada o no):

```cpp
bool esta(const TLista &l, int valor){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(cumpleCondicion(l.datos[i], valor)){ // El valor actual cumple nuestra condición
      encontrado = true;
    }
    i++; // Seguimos mirando el array
  }
  
  return encontrado;
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
  if(esta(l,x)) cout << "El valor esta en el array" << endl;
  else          cout << "El valor no esta en el array" << endl;
```
A continuación se muestran casos particuales que se pueden hacer de formas:
* Reemplazando en la función `esta` la llamada a `cumpleCondicion` con la condición concreta o
* Implementando la función `cumpleCondicion`. Esta es recomendable si la condición es compleja.

## Caso concreto: está el valor x en el array

Este es el caso más simple y solo es comprobar que el i-ésimo valor del array es el valor buscado: `l.datos[i] == x`:

```cpp
bool esta(const TLista &l, int x){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] == x){ // El valor actual cumple nuestra condición
      encontrado = true;
    }
    i++; // Seguimos mirando el array
  }
  
  return encontrado;
}
```

# Caso concreto: hay un valor mayor que x

Este caso es muy similar al anterior pero ahora en vez de ser igual tiene que ser mayor: `l.datos[i] > x`:

```cpp
bool esta(const TLista &l, int x){
  int i = 0; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] > x){ // El valor actual cumple nuestra condición
      encontrado = true;
    }
    i++; // Seguimos mirando el array
  }
  
  return encontrado;
}
```

# Caso concreto: hay dos valores repetidos consecutivos

Este caso ya si es más diferente del anterior:
* La función ya no requiere ningún parámetro adicional a la lista
* Comprobar que hay dos valores consecutivos igual, es comprobar que el valor actual es igual que el anterior: `l.datos[i] == l.datos[i-1]`.
* Como observa consultamos `i-1` para que no falle debemos empezar `i` en `1`.

```cpp
bool esta(const TLista &l){
  int i = 1; // índice para recorrer el array
  bool encontrado = false; // valor que nos dice si lo hemos encontrado. Como aún no hemos mirado nada, aún no lo hemos encotnrado
  
  while(i < l.tam && !encontrado){ // Mientras no lleguemos al final y no lo hemos encontrado, seguimos buscando
    if(l.datos[i] == l.datos[i-1]){ // El valor actual cumple nuestra condición
      encontrado = true;
    }
    i++; // Seguimos mirando el array
  }
  
  return encontrado;
}
```
