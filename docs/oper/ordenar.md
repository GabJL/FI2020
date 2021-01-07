# Operación ordenar

Existen muchas formas de ordenar. Nosotros en concreto vamos a utilizar una llamada selección. Lo vemos con un ejemplo:
* Empezamos con un array desordenado `{6, 10, 1, -3, 4}`
* Vamos a ordenar la posición `0`: para eso buscamos el [menor](mayor.md) en el array (empezando en 0) y encontramos que el menor está en la posicón `3`.
* Ahora [intercambiamos](intercambiar.md) la posición `0` por la `3` y obtenemos el array `{-3, 10, 1, 6, 4}`
* Ahora sabemos que tenemos ordenador el array hasta la posición `0` y desordenado desde la posición `1` y repetimos el proceso.
* Vamos a ordenar la posición `1`: para eso buscamos el [menor](mayor.md) en el array (empezando en 1) y encontramos que el menor está en la posicón `2`.
* Ahora [intercambiamos](intercambiar.md) la posición `1` por la `2` y obtenemos el array `{-3, 1, 10, 6, 4}`
* Ahora sabemos que tenemos ordenador el array hasta la posición `1` y desordenado desde la posición `2` y repetimos el proceso.
* Vamos a ordenar la posición `2`: para eso buscamos el [menor](mayor.md) en el array (empezando en 2) y encontramos que el menor está en la posicón `4`.
* Ahora [intercambiamos](intercambiar.md) la posición `2` por la `4` y obtenemos el array `{-3, 1, 4, 6, 10}`
* Ahora sabemos que tenemos ordenador el array hasta la posición `2` y desordenado desde la posición `3` y repetimos el proceso.
* El proceso acaba cuando lleguemos a ordenar la últimos posición.

En código sería:
```cpp
void ordenar(TLista &l){
  for(int pos_ordenar = 0; pos_ordenar < l.tam-1; pos_ordenar){
    int menor = posicion_menor(l, pos_ordenar);
    intercambiar(l, pos_ordenar, menor);
  }
}
```
Todas las funciones ya las hemos hecho previamente o son variantes. Tenga en cuenta que la posición del menor no es la del array entero sino que debe buscar en menor a partir de cierta posición.
