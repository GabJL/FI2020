# Operación inicializar un array

En muchas ocasiones queremos hacer inicializaciones fijas a un array ya sea porque realmente es necesario hacerlo así o bien porque queremos probar sin estar metiendo datos constamente datos o porque la lectura nos falla. Vamos a considerar 3 casos:
* Array vacío
* Array con todo a `X` (habitualmente `0`)
* Array con valores de prueba fijos

## Array vacío

Un array incompleto vacío no tiene elementos y eso es simplemente:

```cpp
void inicializar_vacio(TLista &l){
  l.tam = 0;
}
```

Note que muchas operaciones requieren que el array sea correcto inicialmente y ser correcto significa que tenga elementos.

## Array con todos los valores a X

Esto es un recorrido por todas las posiciones válidas poniéndolos a `X`. Observe que previamente han tenido que decir cuántas posiciones son válida.

```cpp
void inicializar_a_X(TLista &l, int X){
  for(int i = 0; i < l.tam; i++){ // Se supone que han puesto el tamaño bien o quizás podamos hacer hasta MAX
    l.datos[i] = X;
  }
}
```

## Array con valores fijos

Ahora queremos probar un caso concreto (el del ejemplo del enunciado o uno que se nos ha ocurrido) y queremos guardar en el array esos valores manualmente. Solo recuerde:
* Los arrays de forma general se inicializan con `{{ valor1, valor2, valor3 }}` y no es necesario poner todos los valores solo los que nos interesen
* Los registros se inicializan con `{campo1, campo2, ..., campoN}` y es necesario poner un valor por cada campo del registro y en el orden en el que aparezcan en la definición.

Por ejemplo para inicializar una lista `l` con el array `{7, 4, 1, 9}` habría que poner:
```cpp
  TLista l;
  l = {                       // Empezamos el registro del array incompleto
        {{ 7, 4, 1, 8 }},     // El primer campo: el array
        4                     // El segundo campo: el tamaño
      };                      // Fin del registro
```
        
