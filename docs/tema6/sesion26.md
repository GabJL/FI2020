# Sesión del 07/01/2021

## Contenidos vistos en la clase

### Tema 6
* Ejercicio de repaso de los arrays incompletos.
* Además vemos cómo ordenar un array de números y las operaciones de inserción y borrado de un array:
  * Como no se pueden eliminar ni añadir posiciones, debemos desplazar de forma apropiada un array.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 50 y 57-64).
  
## Códigos utilizados

### mcm y MCD everywhere
* *A) Defina un tipo que nos permita almacenar a lo sumo 200 enteros*
* *B) Cree una función que reciba un número, nos devuelva un array que contenga la descomposición en factores primos del número. Por ejemplo para 12 devolvería el array `{1, 2, 2, 3}`*
* *C) Cree la función inversa a la previa, es decir a partir de la descomposición en factores primos devuelva el número.*
* *D) Diseñe una función que calcule la intersección de dos array (comunes con la menor cantidad de repeticiones posibles)*
* *E) Diseñe una función que calcule la unión de dos arrays (comunes y no comunes con la mayor cantidad de repeticiones posibles)*
* *F) El `main` debe leer dos números y calcular sus descomposiciones (B) y luego calcular el MCD (D->C) y mcm (E->C).*

Este ejercicio tiene varias peculiaridades que lo hacen interesante:

* El array se rellena de forma automática y no leyendo de teclado
* Se pueden hacer dos versiones:
  * Una sencilla usando las funciones tradicionales (insertar, estar, contar...): [Código](sesion07.01.21/mcmymcd_2.cpp)
  * Otra más compleja pero más eficiente donde se trabajan con múltiples arrays de forma simultánea y que van por posiciones diferentes y hay que llevar varios índices: [Código](sesion07.01.21/mcmymcd.cpp)
* En clase vimos el primer acercamiento.
