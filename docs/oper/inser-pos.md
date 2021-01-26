# Operación insertar valor en una posición concreta

En este caso queremos insertar un valor en una posición concreta (pero válida) del array. Eso implica desplazar todos los valores a partir de esa posición a la derecha. Por ejemplo si tenemos el array `{1, 5, 4}` y queremos poner el valor `-5` en la posición `1`, primero tenemos que *abrir un hueco* desplazando los valores: `{1, _, 5, 4}` y ahora añadir el valor en esa posición: `{1, -1, 5, 4}`. Cuestiones adicionales a tener en cuenta:
* La posición donde se inserta debe estar en el rango `[0,tam]`. Por ejemplo si `tam` es `10` es válido insertar en la posición `0`, la `1`, ..., la `10` (observe que incluye `tam` indicando que queremos insertar tras el último)
* Si el array está lleno no se debe insertar (en el caso concreto a continuación se muestra ignorando esta restricción)

```cpp
void insertar_posicion(TLista &l, int pos, int valor){
  if(l.tam < MAX && pos >= 0 && pos <= l.tam){ // Hay hueco y las posiciones son correctas
    abrir_hueco(l, pos); // desplazamos las posiciones
    l.datos[pos] = valor; // metemos el valor
    l.tam++; // aumentamos el tamaño
  }
}
```
Nota:
* En vez de hacerlo directamente en la función todo, se ha dividido en funciones. En esta función hacemos a alto nivel lo que se describió en el inicio y luego delegamos las operaciones complicada a otras funciones (`abrir_hueco`).

Funciones auxiliares (recuerde que debe estar delante de la función `insertar_posicion`):
```cpp
// Como la llama insertar_posicion que ya ha hecho las comprobaciones oportunas, pues no es necesario comprobar nada
void abrir_hueco(TLista &l, int pos){
  for(int i = l.tam; i > pos; i--){ // Vamos del final hasta pos (bajando en el índice)
    l.datos[i] = l.datos[i-1]; // En la actual copiamos la posición previa
  }
}
```
Nota:
* Observe que para desplazar tenemos que ir desde la derecha hacia la izquierda para no machacar valores.

## Caso concreto: insertar eliminado si está lleno

En este caso vamos a considerar que si el array está lleno insertará el valor descartando el último valor. Por ejemplo si `MAX` es `5` y nuestro array tiene ya cinco valores: `{1, 5, -2, 8, 0}` y queremos insertar el 100 en la posición 2, el array resultante será `{1, 5, 100, -2, 8}` y el `0` del final se descarta. Esto implica:
* Las posiciones válidas para insertar siguen siendo las mismas `[0, tam]`. Con `tam` incluido, pero si está lleno y se elige `tam` no se podrá insertar.
* Al desplazar hay que contemplar que si está lleno no podemos escribir el `tam`


```cpp
void insertar_posicion2(TLista &l, int pos, int valor){
  if((pos >= 0 && pos < l.tam) || (pos == l.tam && l.tam < MAX)){ // es una posición válida o si es al final hay hueco
    abrir_hueco2(l, pos); // desplazamos las posiciones
    l.datos[pos] = valor; // metemos el valor
    l.tam++; // aumentamos el tamaño
  }
}
```
Nota:
* Si es una posición válida siempre se podrá insertar pero si intentar insertar tras el último y ya está lleno entonces no se insertará.

Funciones auxiliares (recuerde que debe estar delante de la función `insertar_posicion2`):
```cpp
void abrir_hueco2(TLista &l, int pos){
  int ultimo; // hasta donde debemos mover
  if(l.tam == MAX)  ultimo = l.tam-1; // Con esto no nos pasamos del array
  else              ultimo = l.tam;
  for(int i = ultimo; i > pos; i--){ // Vamos del final hasta pos (bajando en el índice)
    l.datos[i] = l.datos[i-1]; // En la actual copiamos la posición previa
  }
}
```
Nota:
* Es muy parecido a la del apartado anterior, pero en vez de empezar siempre en `l.tam` puede que empezemos en `l.tam-1` si está lleno (para evitar salirnos). 
* Observe que explícitamente no "borramos" el último pero como no lo movemos y lo machamos con el previo, desaparecerá del array.
