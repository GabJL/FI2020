# Sesión del 25/11/2020

## Contenidos vistos en la clase

### Tema 6
* Utilizamos un par de ejercicios de ejemplo para ir repasando y afianzando conocimiento sobre `arrays`
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 10-11).
  
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
