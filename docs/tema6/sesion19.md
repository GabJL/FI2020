# Sesión del 26/11/2020

## Contenidos vistos en la clase

### Tema 6
* Utilizamos un par de ejercicios de ejemplo para ir repasando y afianzando conocimiento sobre `array`s.
* Luego vemos una operación típica sobre `array`s como es la búsqueda.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 10-14).
  
## Códigos utilizados

### Estudio en diciembre (I)
*Realice un programa con las siguientes características:*
* *A) Define un tipo que nos permita almacenar cuánto estudiaremos cada día de diciembre.*
* *B) Realice una función que le pida al usuario las horas de estudio de cada día.*
* *C) Realice una función que nos diga cuántas horas estudiaremos en total durante el mes.*
* *D) Realice un `main` que cree una variable del tipo array definido en A y lea sus valores (con B) y nos muestre las horas totales que estudiaremos (C).*

Este ejercicio nos permite utilizar de forma básica un array:
* Primero tenemos que definir el tipo con `typedef`. En este caso son un montón (31) de valores enteros, donde cada valor indica la cantidad de horas a estudiar.
* Luego nos piden que leamos sus valores. No se puede leer de un tirón sino que hay que recorriendo el array y leyendo un valor que se guardará en la posición oportuna.
* En tercer lugar, piden que digamos cuántas horas estudiamos. Eso es la suma de todas las horas del mes. De nuevo tenemos que ir mirando todas las posiciones y acumulando sus valores.
* Finalmente nos piden que la usemos en el `main`.

[Código](sesion25.11.20/diciembreI.cpp)

### Estudio en diciembre (II)
*Modifica el anterior para añadir los siguiente cálculos (tras realizar cada función añada al `main` su llamada):*
* *E) Realice una función que calcule la cantidad de días libres del mes.*
* *F) Utilizando las dos anteriores (C y E) indique en el mainla cantidad media de hora estudiadas en los días que hay estudio.*
* *G) Realice una función que nos diga qué día estudiaré más.* 
* *H) Defina un nuevo tipo que nos sirva para indicar qué días de diciembre tengo libres (para cada día debe indicar si está libre o no).*
* *I) Cree una función que reciba un array de los originales (cantidad de horas por día) y nos devuelva uno del tipo definido en H*

Comentarios:
* Similar al previo de un cálculo sobre todos los elementos de un array, en este caso ver cuales cumplen cierta propiedad (ser 0) (Apartado E).
* Uso de varias funciones previas (Apartado F).
* Mayor de un array: como valor inicial del mayor podemos suponer que es el primero (Apartado G).
* Definición de otro tipo de array en este caso con tipo base bool (Apartado H).
* Una función que crea un array a partir de los valores de otro y el uso de un array de bool (Apartado I).

[Código](sesion25.11.20/diciembreII.cpp)

