# Parcial 3

## Ejercicio 1 
Realice una función que reciba un array `a` relleno con `MAX` valores y un valor real `n` y realice el siguiente algoritmo:

* Si `n` no está entre 0.5 y 1.0 (incluídos), no hará nada.
* Si el array `a` contiene al menos un valor menor o igual a 0, no hará nada (se valorará la eficiencia de cómo se resuelve esta parte).
* En caso contrario:
    * Se debe modificar el array `a` poniendo a 0 todos los valores que sea mayor que `n*maximo(a)` (donde `maximo(a)` es el valor más grande en `a`).
    * Se deben mover todos los ceros al final del array.

**Ejemplo 1**: `n = -1` y `a = {3, 4, 5, 1, 4}` => No hace nada (`n` no está en el rango)
**Ejemplo 2**: `n = 0.6` y `a = {3, 4, 0, 1, 4}` => No hace nada (`a` tiene un valor a 0)
**Ejemplo 3**: `n = 0.5` y `a = {2.4, 1, 4, 1.7, 0.5}` => `a` se modifica que debe quedar como `{1, 1.7, 0.5, 0, 0}` (el máximo es `4`, y se deben eliminar los valores `> 2 (4*0.5)` poniendo los 0s al final. Los valores diferentes a 0 pueden estar en cualquier orden, pero siempre antes de los 0s).

[Código de la solución](parcial3/evaluacion3e1.cpp)

## Ejercicio 2:
Una forma de codificar un texto es desordenando las letras, el destinatario sabrá leerlo si conoce cómo ordenar las letras. Realice una función que reciba un `string` y un `array` con el orden (puede considerar que ambos elementos tienen tamaño `N`) y devuelva un nuevo `string` con el texto ordenado correctamente. Ejemplo (suponiendo `N` a `4`):

```
texto_cifrado = "lhao";
clave = {1, 3, 0, 2};
texto_descifrado = descifrar(texto_cifrado, clave);
// texto_descifrado = "hola"
```

Fíjese que el array `clave` indica el orden: como `clave[0]` es `1` indica que el texto descifrado empieza con la letra de la posición `1` del texto cifrado (la `'h'`), luego como `clave[1]` es `3` indica que la siguiente letra es la de la posición `3` (la `'o'`), y así sucesivamente.

[Código de la solución](parcial3/evalaucion3e2.cpp)
