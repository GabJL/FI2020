# Generar un array a partir de los valores de otro

Una operación muy habitual es obtener un array con los valores que cumplan ciertas condiciones. El proceso sería muy parecido a [escribir filtrando](escribir.md#caso-concreto-escribir-filtrando) pero en vez de escribir generamos otro array. Para generar otro array ya tenemos las herramientas que necesitamos ([inicializar vacio](inicializar.md#array-vacío) e [insertar](../operaciones.md#operaciones-de-inserción) del modo que nos interese), por lo que solo es componerlas de forma apropiada:

```cpp
void generar_array(const TLista &l, TLista &nueva){
  inicializar_vacio(nueva); // La nueva aún no tiene elementos
  for(int i = 0; i < l.tam; i++){ // Miramos toda la lista que tenemos
    if(cumple_condicion(l.datos[i])){ // Si el dato lo queremos en la otra lista
      insertar(nueva, l.datos[i]); // Ese dato lo metemos en la nueva
    }
  }
}
```
Todas las funciones ya las tenemos hechas
