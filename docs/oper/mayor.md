# Operación calcular valor destacado

En este caso la idea es buscar un valor que sea especial sobre el resto, como el menor o el mayor (este es el ejemplo mostrado). Hay muchas variantes de este, pero aquí se muestra devolviendo la posición donde está el valor por ser la más genérica (el resto se puede hacer a partir de esta). El proceso suele ser el siguiente:
* Se considera que el valor especial está en la posición 0
* Luego se miran el resto y si hay algún valor más especial pues se cambia

```cpp
int posicion_mayor(const TLista &l){
  int pos_mayor = 0; // Pensamos que el valor de la posición 0 es el mayor
  for(int i = 1; i < l.tam; i++){ // Miramos el resto (empezamos en 1 ya que el 0 ya lo hemos considerado en la inicialización)
    if(l.datos[i] > l.datos[pos_mayor]){ // Si encontramos uno mayor
      pos_mayor = i; // Actualizamos a la nueva posicion
    }
  }
  return pos_mayor;
}
```
Notas:
* El menor sería equivalente pero cambiando `>` por `<`.
* Esto obtiene la posición del primer mayor si interesa la del último sería `>=` con lo que cuando son iguales también entra en el `if` y al final guarda el último.
* Si en vez de devolver la posición interesa el valor pues se cambia el `return` a `return l.datos[pos_mayor];`.
