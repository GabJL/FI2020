# Operación leer

En primer considere si realmente necesita leer los valores de un array, ya que muchas veces quizás con una [`inicialización básica`](inicializar.md) nos sea suficiente (al menos para probar o por si no conseguimos leer bien).

Vamos a considerar dos casos:
* Queremos leer `N` valores (el `N` se obtiene antes, leyendo o por un cálculo o algo)
* Queremos leer hasta que el valor cumpla cierto valor.

## Leer N valores

Este caso es simple ya que un `for` que recorra las `N` posiciones nos vale. 

```cpp
// Se supone que N es menor que MAX (el que lo leyó se aseguró de eso)
void leer_N_valores(TLista &l, int N){
  inicializar_vacio(l);
  int x;
  for(int i = 0; i < N; i++){ // Hacemos N veces
    cin >> x; // leer el valor
    insertar(l,x); // lo insertamos de forma apropiada
  }
}
```
Nota:
* Por modularidad y claridad es utilizado funciones que ya hemos hecho pero si se consideran sencillas se podría poner el código directamente en vez de la función.
* Primero ponemos el [array vacio](inicializar.md#array-vacío) para que luego el `insertar` funcione bien. 
* Luego leemos los valores y los vamos insertando de forma adecuada dependiendo de la circunstancia (quizás [al final](inser-final.md) u [ordenado](inser-ordenado.md) o de otra forma que se quiera).
* Si en vez de un tipo entero tenemos un registro u otro, se recomienda seguir el mismo esquema declarar una variable de ese tipo, leer (quizás con una función) en esa variable y luego insertarla. N
* NO se recomienda leer directamente sobre posiciones del array.
* Fíjese que no manejamos de forma explícita el tamaño de eso se encarga `inicializar_vacio` e `insertar`.

## Leer mientras el valor leído sea correcto

Este caso cambia respecto al anterior que el número de lecturas no es fijo sino que depende del valor leído. Entonces en vez de un `for` hay que emplear un `while` (o quizás un `do-while` dependiendo del problema). En general salvo que el problema permita otra forma se recomienda lectura adelantada:

```cpp
void leer_N_valores(TLista &l, int N){
  inicializar_vacio(l);
  int x;
  cin >> x; // lectura adelantada
  while(l.tam < MAX && es_correcto(x)){ // Aún hay hueco y el valor leído es correcto
    insertar(l,x); // lo insertamos de forma apropiada
    cin >> x; // leer el valor para la siguiente iteración
  }
}
```
Nota: (las mismas de antes)
* Por modularidad y claridad es utilizado funciones que ya hemos hecho pero si se consideran sencillas se podría poner el código directamente en vez de la función.
* Primero ponemos el [array vacio](inicializar.md#array-vacío) para que luego el `insertar` funcione bien. 
* Luego leemos los valores y los vamos insertando de forma adecuada dependiendo de la circunstancia (quizás [al final](inser-final.md) u [ordenado](inser-ordenado.md) o de otra forma que se quiera).
* Si en vez de un tipo entero tenemos un registro u otro, se recomienda seguir el mismo esquema declarar una variable de ese tipo, leer (quizás con una función) en esa variable y luego insertarla. N
* NO se recomienda leer directamente sobre posiciones del array.
* Fíjese que no manejamos de forma explícita el tamaño de eso se encarga `inicializar_vacio` e `insertar`.

