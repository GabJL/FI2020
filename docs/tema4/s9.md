# Sesión del 22/10/2020

## Contenidos vistos en la clase

### Tema 4
* Se ha continuado viendo bucles típicos (buscar el mayor, si existe un elemento...).
* Especialmente he ha hecho hincapié en la **lectura adelantada**, que es cuando el bucle depende del valor leído. En esos casos hay que seguir el siguiente esquema:
```cpp
cin >> valor;       // Lectura
while(valor ....){  // Comprobación
    // Hacer cosas con valor

    cin >> valor;   // Lectura del nuevo valor
}
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233695/mod_resource/content/4/Tema%204%20-%20Parte%202.pdf) (páginas 8-9).
  
## Códigos utilizados

### Contar pares e impares (versión 2)
*Modifique el anterior ejercicio para que en vez de leer 30 números, lea hasta que el número sea negativo.* 

Aparentemente muy similar al anterior y un primer acercamiento puede ser cambiar la condición del bucle y poner algo como `while(numero >= 0){`. Si lo analizamos detenidamente vemos que tenemos un esquema del tipo: leo valor -> modifico los contadores -> compruebo si es positivo (repetir). Eso provoca que el número negativo también sea considerado en los contadores (como par o impar). Aunque hay varias formas de solucionarlo (por ejemplo poner un `if` para que solo modifique los contadores si es positivo), la forma natural sería cambiar a un esquema del tipo: leo valor -> compruebo si es positivo -> modifico los contadores (repetir). Este esquema se denomina lectura adelantada y tiene el siguiente formato:

```cpp
leer valor // Lectura adelantada
while(valor cumple la condición){
	Hacer cosas con valor
	leer valor // Lectura del valor para la siguiente iteración
}
```

Siempre que la condición dependa de un valor que leemos y no queremos incluirlo en los cálculos hay que seguir ese esquema.

[Código](sesion22.10.20/cantidad_pares_impares_2.cpp)

### Media de numeros hasta leer 0
*Modifique el 3 (media) para que acabe cuando leamos un 0*

Al igual que el anterior hay que cambiar el esquema a lectura adelantada. Otro aspecto a tener en cuenta es que si el usuario empieza con un 0 directamente, no podremos calcular la media (intentaríamos dividir entre 0).

[Código](sesion22.10.20/media_X_numeros.cpp)

### Hay vocales en 20 letras
*Lea 20 letras e indique si aparecieron vocales*

Aquí necesitamos un bucle que se ejecute exactamente 20 veces, cada vez lea una letra y compruebe si hay una vocal. Para ello necesitamos, al igual que en ejercicios previos, una variable que cuente cuántas veces hemos leído (`veces`) y otra para guardar el último valor leído (`letra`). 

Como nos interesa saber si se han leído vocales y es eso un valor sí o no (binario) podemos utilizar un `bool hay_vocal`. Esa variable inicialmente está a `false` (aún no hemos encontrado vocales) y cuando encontremos una vocal (si las hay) la ponemos a `true`. La comprobación si una letra es una vocal ya lo hicimos en el [ejercicio 3 de la práctica 2](../practicas/p2.md#ejercicio-3). 

Un error muy común que se suele cometer es pone como comprobación algo así:

```cpp
if(es vocal){
	hay_vocal = true;
} else {
	hay_vocal = false;
}
```

y eso está mal. Eso comprueba si esta letra es vocal o no, pero a nosotros nos interesa saber si alguna vez apareció una vocal. Entonces la parte del `else` no hay que ponerla, ya que cuando sea `true` nunca más nos interesa volver a `false`.

[Código](sesion22.10.20/hay_vocales_en_20_letras.cpp)

### Hay vocales en a lo sumo 20 letras
*Modifique el ejercicio anterior para que a lo sumo lea 20 letras y nos indique si aparecieron vocales.*

En este caso es muy parecido a la anterior pero modificando la condición para que cuando lea una vocal pare el bucle. La condición del bucle sería "no haya leído 20 letras y no se hayan encontrado vocales" -> `numVeces < 20 && !hay_vocales`.

[Código](sesion22.10.20/hay_vocales_max_20_letras.cpp)

### Leer el mayor de números negativos
*Lea números hasta encontrar uno negativo e indique el mayor de ellos.*

La idea de este ejercicio es tener una variable que indique el valor más alto leído (`mayor`). Cada vez que leamos un nuevo número, comprobamos que si ese nuevo valor es más grande que `mayor` actualizándola de forma oportuna. 

Una dificultad que plantean este tipo de ejercicio es que antes de entrar al bucle necesitamos que `mayor` tenga un valor adecuado. Habitualmente esto se consigue leyendo un valor fuera del bucle (el primero) y diciendo que el `mayor` es ese valor. Como en este caso necesitamos hacer lectura adelantada (la condición depende de lo que leemos) pues ya tenemos una lectura previa al bucle.

[Código](sesion22.10.20/mayor_de_negativos.cpp)


