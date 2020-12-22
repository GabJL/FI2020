# Sesión del 22/12/2020

## Contenidos vistos en la clase

### Tema 6
* En esta clase vemos los arrays incompletos.
* Para controlar cuántas posiciones están ocupadas, además del array necesitamos otro valor adicional con dicha cantidad (su tamaño). Esto equivalente al `.size()` de los `string`.
* Llevaremos ambas cosas (array y tamaño) juntos mediante el uso de un registro.
* Ahora el acceso es un poco diferente y en los recorridos habrá que usar el tamaño real en vez del tamaño máximo del array.
* Aparecen nuevas operaciones como añadir elementos y eliminarlos.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 47-50).
  
## Códigos utilizados

### Ejercicio básico

* *A) Defina un tipo que nos permita almacenar a lo sumo 50 enteros*
* *B) Cree una función que busque un valor en un array y nos devuelva un `bool` indicando si está o no y en caso de estar devuelva también la posición en la que está.*
* *C) Cree una función que inserte un valor en un array si hay hueco y previamente no está.*
* *D) Diseñe otra función que elimine un valor de un array*
* *E) Cree una función que escriba todos los elementos de un array*
* *F) Cree un mainque lea números hasta encontrar un 0 y debe almacenar hasta 50 valores con las siguiente condiciones: a) no debe aparecer repetidos y b) si se lee X y no está se añade (si se puede) pero borrando -X si estuviese.* 

[Código](sesion22.12.20/raro.cpp)

### mcm y MCD everywhere
* *A) Defina un tipo que nos permita almacenar a lo sumo 200 enteros*
* *B) Cree una función que reciba un número, nos devuelva un array que contenga la descomposición en factores primos del número. Por ejemplo para 12 devolvería el array `{1, 2, 2, 3}`*
* *C) Cree la función inversa a la previa, es decir a partir de la descomposición en factores primos devuelva el número.*
* *D) Diseñe una función que calcule la intersección de dos array (comunes con la menor cantidad de repeticiones posibles)*
* *E) Diseñe una función que calcule la unión de dos arrays (comunes y no comunes con la mayor cantidad de repeticiones posibles)*
* *F) El `main` debe leer dos números y calcular sus descomposiciones (B) y luego calcular el MCD (D->C) y mcm (E->C).*

[Código](sesion22.12.20/mcmymcd.cpp)
