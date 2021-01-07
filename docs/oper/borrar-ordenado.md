# Operación borrar en un array con orden

Ahora queremos borrar un elemento concreto (nos dirán la posición) en un array en el que orden de los valores sí nos importa. Recuerde:
* Que no podemos "eliminar físicamente" una posición del array sino lo que haremos es machacar el valor.
* En un array incompleto se suponen que todas las posiciones hasta el `tam` tienen valores correctos y no podemos dejar huecos.
* La posición a borrar debe ser un elemento correcto del array, es decir, en el rango `[0, tam)` (sin incluir `tam`). 
* A diferencia de [`eliminar desordenado`](borrar-desordenado.md) aquí solo hay una forma de hacerlo y desplazar todos los valores. Es decir, si tenemos `{1, 5, 8, 10, 15}` y queremos borrar la posición 2 nos quedaría `{1, 5, 10, 15}`.
Código:
```cpp
void eliminar_ordenado(TLista &l, int pos){
  if(pos > 0 && pos < l.tam){ // Queremos borrar una posición válida
    desplazar(l, pos); // Machacamos la posición con el último
    l.tam--; // Decimos que el array tiene uno menos
  }
}
```
Funciones auxiliares:
```cpp
void desplazar(TLista &l, int pos){
  // No comprobamos nada, ya que lo hizo eliminar_ordenado:
  for(int i = pos; i < l.tam-1; i++) // Llegamos a l.tam-1 porque luego accedemos a i+1
    l.datos[i] = l.datos[i+1]; // La posición actual la machacamos con la siguiente.
}
```
