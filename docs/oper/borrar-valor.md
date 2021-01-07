# Borrar un valor concreto de un array

A diferencia de [`eliminar desordenado`](borrar-desordenado.md) y [`eliminar ordenado`](borrar-ordenado.md) donde recibíamos que posición queremos borrar ahora nos dan un valor y queremos borrarlo si existe. Este caso realmente es aplicar primero [`buscar`](buscar.md) para obtener la posición y luego llamar al eliminar adecuado:

```cpp
void borrar_valor(TLista &l, int valor){
  int pos = buscar(l, valor); // Lo buscamos
  if(pos != -1){ // Si está
    eliminar(l, pos); // lo borramos
  }
}
```
Nota:
* La función de [`buscar`](buscar.md#caso-concreto-posición-del-valor-x-en-el-array) ya la tenemos hecha
* En eliminar hay que utilizar [`eliminar desordenado`](borrar-desordenado.md) o [`eliminar ordenado`](borrar-ordenado.md) dependiendo del caso.
