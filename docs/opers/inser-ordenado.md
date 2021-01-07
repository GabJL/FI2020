# Operación insertar ordenado

Realmente este caso podría ponerse como aplicación de las operaciones anteriores: [`buscar`](buscar.md) el primer valor mayor que x (ordenación creciente) e [`insertar en posición`](inser-pos.md). 

Suponiendo que tenemos un array ordenado `{1, 6, 9, 20, 31}` y queremos el `7` tenemos que hacer el siguiente proceso:
* Buscar la posición a insertar: en este caso es en la posición `2` (es el primer valor que es mayor de `7`)
* Después ya es insertar esa posición desplazando los valores (la función que vimos de [`insertar en posición`](inser-pos.md))

Con ello el código queda:
```cpp
void insertar_ordenado(TLista &l, int valor){
  int pos = buscar_posicion(l, valor);
  insertar_posicion(l, pos, valor);
}
```
Nota:
* Si está lleno o no ya lo controlará la función de insertar (podemos usar la variante que nos interese de las dos que se vieron).
* La función `buscar` es una variante a las que vimos en el apartado de [buscar](buscar.md) con la diferencia que si llegamos al final no queremos devolver -1 sino `l.tam` (ya que esa es la posición donde queremos meter, al final de todos los elementos).

Funciones auxiliares (solo indico la función `buscar_posicion` porque insertar no varía respecto a lo que vimos [antes](inser-pos.md):

```cpp
int buscar_posicion(const TLista &l, int valor){
  bool encontrado = false;
  int pos = l.tam; // Ahora si no lo paramos antes de tiempo en vez de -1 devolvemos l.tam que es el valor requerido para insertar
  int i = 0;
  
  while(i < l.tam && !encontrado){
    if(valor >= l.datos[i]){ // Aquí es donde insertarse
      encontrado = true;
      pos = i;
    }
    i++;
  }
  
  return pos;
}
```

