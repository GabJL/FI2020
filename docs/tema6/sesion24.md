# Sesión del 18/12/2020

## Contenidos vistos en la clase

### Tema 6
* En esta clase vemos el tipo registro (`struct`). 
* Este tipo permite guardar en una variable múltiples valores (*campos*) de diferentes tipos.
* Para acceder a cada campo de forma individual ponemos: `variable.campo`
* Estos tipos permiten la asignación (`= `) pero no compararlos, escribirlos, leerlos...
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 33-49).
  
## Códigos utilizados

### Fechas simples (ejemplo)

Ejemplo usado en clase para ver cómo se define un nuevo tipo que sea un registro, cómo se definen constantes y variables de ese tipo (y se le da valor inicial), y cómo se asignan y se acceden a sus campos.

[Código](sesion18.12.20/fechas.cpp)

### Libros
*Usando la definición de libro previa (`TLibro`), realice un main con los siguientes elementos:*

* *Defina dos variables de este tipo: `libro1` y `libro2`*
* *Durante la definición de `libro2` inicialícelo los siguientes valores: El Marciano de Andy Weir, editorial Nova, edición rústica (2014) con 407 páginas y 20,50 € de precio (quizás no necesite todos los datos).*
* *Pida por teclado los valores del otro `libro1`*
* *Muestre el título y número de páginas del libro que tiene más páginas de los dos*
* *Aplique un descuento de un 5% al libro más caro y muestre un mensaje indicando: “El libro X cuesta ahora Y euros”*

Ejercicio propuesto para practicar el tipo registro. Solo algunos apuntes:

* Cuidado al inicializar el registro que los campos deben aparecer en el orden indicado en la definición del tipo
* Recuerda que no se puede leer de un tirón y hay que ir leyendo campo a campo
* Como el título puede tener varias palabra hay que usar `getline`
* La editorial para evitar problemas supondremos que solo es una palabra y podemos leerla con el operador `>>` de `cin` (este punto y el anterior lo veremos en detalle más adelante cuando veamos `string`)

[Código](sesion18.12.20/libros.cpp)

### Tiempo (ejemplo)

En este ejemplo se muestra cómo usar un registro en conjunción con las funciones:

* Debido al coste de copiado en los parámetros de entrada se recomienda usar las referencias constantes: `const TTiempo &t`
* Se ofrecen dos versiones para el leer:
	* Una primera donde el parámetro se pasa como parámetro de salida, es decir, le pasamos un hueco de memoria que queremos que rellene
	* Una segunda versión donde el valor es devuelto con `return`
	* Observe la diferencia entre las llamadas de una y otra
	* Ambas soluciones son válidas, aunque se considera que la primera es más eficiente en tiempo (se ahorra copias) y en espacio (no se declaran variables adicionales)

[Código de la primera versión](sesion18.12.20/tiempo_v1.cpp)

[Código de la segunda versión](sesion18.12.20/tiempo_v2.cpp)

## Cartas
*Usando la definición de carta previa (`TCarta`), realice:*

* *Una función que lea de teclado una carta (parámetro de salida)*
* *Una función que muestre por pantalla una carta (param entrada)*
* *Una función que cree una carta al azar (devuelta con return)*
* *Una función que nos diga si dos cartas son iguales*
* *Una función que reciba dos cartas y nos devuelva un valor booleano indicando si la primera carta es inferior a la segunda (es menor que otra si su valor es inferior o si es igual pero la figura es menor según el orden lexicográfico).*
* *El main pedirá una carta al usuario, generará una para el ordenador (debe asegurarse que es diferente a la del usuario) y mostrará la carta del ordenador y quién ganó (sacó la mayor)*

Ejercicio donde se hace un pequeño juego de cartas. La idea es practicar las funciones sobre registros. Las hay de diferente tipo:

* Con parámetros de salida: `leerCarta`
* Con parámetros de entrada que no devuelve nada: `mostrarCarta`
* Con múltiples parámetros de entrada y devuelven un `bool`: `iguales` o `menor`
* Con valores de retorno: `generarCarta`:
	* Recordar que `rand()` genera un número natural aleatorio y que hay que inicializarlos con `srand(time(0));` (esto solo se pone una vez al inicio)

[Código](sesion18.12.20/carta.cpp)

