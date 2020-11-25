# Sesión del 23/11/2020

## Contenidos vistos en la clase

### Tema 5
* En esta clase se dan una serie de reglas para hacer funciones en dos sentidos:
  * ¿Cuándo se hacen?
    * Cuando haya algo un poco complejo
    * Por legibilidad
  * ¿Qué deben cumplir?
    * Ser cortas
    * Tener un nombre significativo
    * Cuidado con los parámetros (los menos posibles)
    * Solo debe hacer una cosa: si hace cálculos no lee ni escribe.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233713/mod_resource/content/0/Tema%205.pdf) (páginas 32 a 35).

### Tema 6
* Empezamos el tema 5, mostrando cómo definir tipos con `typedef`.
* Luego vimos la necesidad de manejar muchas variables igual  (mismo tipo de información) de forma programática e introducimos el concepto de `àrray`.

* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 1 a 9).
  
## Códigos utilizados

### Primos en un rango
*Lea un número natural (n1) entre 1 y 20 (si no está en el rango volverá a pedirlo). Luego vuelva a leer otro número natural (n2) entre n1 y 100. A continuación escribirá todos los primos entre n1 y n2.*

Otro ejemplo donde se estudia cómo dividir el código en diferentes funciones y cómo solo sabiendo el prototipo podemos hacer el `main` y ya luego implementaremos las funciones.

También es importante de ver cómo divir las funciones, para ello pensamos a nivel los pasos a hacer. Por ejemplo el `main` tiene que leer dos números correctos y luego mostrar los primos en ese rango. Pues se puede poner así, el `main` únicamente se encarga de llamar a esas dos funciones y luego nos encargamos de detallar más el proceso en la implementación de ellas.

Ahora en leer dos número hay que leer un primer número entre 1 y 20 y otro entre el anterior y 100. Si nos fijamos es repetir el mismo proceso (leer en un rango) pero los límites son diferentes. Pues eso requiere una función de leer en un rango (que ya no es posible dividirla más) y luego llamarla dos veces.

Lo de escribir los primos en un rango, pues sería generar los números en ese rango y escribir el número si es primo. Aquí hay que tener cuidado que no son dos procesos independientes (no podemos generar todos los números y luego comprobar si es primo). En este caso tendremos que generarlos usando un bucle (`for` al ser determinista) pero si podemos hacerlos una función que compruebe si el número generado es primo o no.

Y así sucesivamente. Esto es lo se denomina *Diseño Descendente*.

[Código](sesion23.11.20/primos_rango.cpp)
