# Sesión del 22/12/2020

## Contenidos vistos en la clase

### Tema 6
* En esta clase vemos los arrays incompletos.
* Para controlar cuántas posiciones están ocupadas, además del array necesitamos otro valor adicional con dicha cantidad (su tamaño). Esto equivalente al `.size()` de los `string`.
* Llevaremos ambas cosas (array y tamaño) juntos mediante el uso de un registro.
* Ahora el acceso es un poco diferente y en los recorridos habrá que usar el tamaño real en vez del tamaño máximo del array.
* Aparecen nuevas operaciones como añadir elementos y eliminarlos.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 47-49).
  
## Códigos utilizados

### Ejercicio básico

* *A) Defina un tipo que nos permita almacenar a lo sumo 50 enteros*
* *B) Cree una función que busque un valor en un array y nos devuelva un `bool` indicando si está o no y en caso de estar devuelva también la posición en la que está.*
* *C) Cree una función que inserte un valor en un array si hay hueco y previamente no está.*
* *D) Diseñe otra función que elimine un valor de un array*
* *E) Cree una función que escriba todos los elementos de un array*
* *F) Cree un mainque lea números hasta encontrar un 0 y debe almacenar hasta 50 valores con las siguiente condiciones: a) no debe aparecer repetidos y b) si se lee X y no está se añade (si se puede) pero borrando -X si estuviese.* 

En este ejercicio se practican los arrays incompletos y las operaciones de insercción y borrado de un array desordenado:

* Al ser un array que no tiene que estar lleno además del array hay que considerar cuántas posiciones hay rellenadas (supondremos que están compactadas al inicio). Para ello creamos un registro con el array y su tamaño
* El buscar es igual que el que se hizo antes pero en vez de comprobar respecto a `MAX` se comprueba respecto al tamaño actual del array
* Para insertar hay que asegurarse primero que hay hueco (el tamaño debe ser menor de `MAX`) y en este caso concreto además hay que validar que el elemento no está ya. Hay que darse cuenta también que si el tamaño X, las posiciones del array ocupadas son 0 a X-1 siendo X la primera posición libre y es ahí donde hay que meter el nuevo valor. 
* En eliminar, el único problema es que no podemos dejar un hueco libre en medio ya que pide que todos los valores estén compactados al inicio. Como no está ordenado lo que se puede hacer es mover el último al hueco a borrar y decrementar el tamaño.
* El escribir es un bucle normal como los que hemos hecho en los ejercicios de diciembre pero en vez de ir hasta `MAX` hay que ir hasta el tamaño del array.
* En el `main` solo hay que leer con lectura adelantada, ni siquiera hay que comprobar si está lleno o si ya está el elemento ya que las funciones ya se encargan de todas esas comprobaciones. 

[Código](sesion22.12.20/raro.cpp)
