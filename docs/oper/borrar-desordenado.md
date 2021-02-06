# Operación borrar en un array sin orden

Ahora queremos borrar un elemento concreto (nos dirán la posición) en un array en el que orden de los valores no nos importa. Recuerde:
* Que no podemos "eliminar físicamente" una posición del array sino lo que haremos es machacar el valor.
* En un array incompleto se suponen que todas las posiciones hasta el `tam` tienen valores correctos y no podemos dejar huecos.
* La posición a borrar debe ser un elemento correcto del array, es decir, en el rango `[0, tam)` (sin incluir `tam`). 
* Como no nos importa el orden, podemos machar la posición a borrar por cualquier otro valor (válido) del array.
* La forma más sencilla es la siguiente:
* * Copiamos en la posición a borrar, `pos`, el último (recuerde que el último es `tam-1`).
* * Ahora tenemos el último valor repetido tanto en `pos` como al final, pero como hay que bajar el tamaño, ese valor final ya no estará dentro de los valores correctos del array y por lo tanto realmente no estará repetido.

Código:
```cpp
void eliminar_sin_orden(TLista &l, int pos){
  if(pos >= 0 && pos < l.tam){ // Queremos borrar una posición válida
    l.datos[pos] = l.datos[l.tam-1]; // Machacamos la posición con el último
    l.tam--; // Decimos que el array tiene uno menos
  }
}
```
Nota:
* Esta es una posible forma de borrar, pero el procedimiento de [`eliminar ordenado`](borrar-ordenado.md) también nos valdría.
    
