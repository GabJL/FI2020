# Sesión del 17/11/2020

## Contenidos vistos en la clase

### Tema 5
* Primero vemos un aspecto importante como es el __ambito__ de los identificadores. Antes de usar un identificador (variable, constante, función...) necesita estar declarada. También hay que tener en cuenta hasta donde se puede usar ese identificador (hasta que encontremos la `}` que cierra el bloque de código donde se definió).
* Luego vimos los __parámetros de salida__. Muchas veces queremos devolver varios valores, pero con el `return` solo podemos uno, entonces para devolver múltiples valores, lo que haremos será pasarle parámetros que queremos que nos rellenen. Los indicaremos en la cabecera con el símbolo `&`.
* Finalmente, relacionado con el ámbito, podemos reordenar el código usando los __prototipos__ de las funciones, que nos permiten declararlas al inicio, pero su implementación puede estar luego y en cualquier orden.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233713/mod_resource/content/0/Tema%205.pdf) (páginas 11-12 y 20 a 31).
  
## Códigos utilizados

### Cilindro B 
*Modifique el programa del cilindro previo para que:*

* *Calcule el volumen del cilindro (función)*
* Al inicio muestre un menú que de la opción de calcular el volumen (opción 1) o el área (opción 2) mediante un procedimiento*
* *Cree una función que lea la opción del usuario pidiéndola constantemente hasta que el valor sea correcta*
* *Modifique el main para usar dichas funciones*

Modificamos el anterior para añadir un procedimiento y otras funciones que como peculiaridad no tienen parámetros.

[Código](Sesion17.11.20/cilindro-B.cpp)

### Cilindro C 
*(The Revenge of the Cilindro) Modifique el ejercicio anterior del cilindro para añadir una función que solicite y lea el radio y la altura del mismo (si se lee un valor incorrecto debe volver a solicitarlo)*

Modificamos el anterior para añadir un procedimiento con parámetros de salida. 

[Código](Sesion17.11.20/cilindro-C.cpp)

### Punto de corte

*Desarrolle una función que nos indique si dos líneas se cortan en un solo punto y en caso afirmativo en cuál se cortan. De cada línea se facilitará la pendiente y el término independiente*

En este caso tenemos una función que nos devuelve tres valores:
* Si tiene punto de corte
* Las coordenadas (x e y) del punto de corte en caso de tenerlo

Para hacerlo tenemos dos posibilidades:
* Un procedimiento con tres valores de salida
* Una función que devuelva un valor con el `return` y los otros dos como parámetros de salida. Se ha preferido en este caso esta solución ya  que el `bool` tiene un comportamiento diferente al x e y. Esto posteriormente (en el `main`) nos facilita usar la función como condición de un `if`

Por otro lado como vamos a leer dos rectas se decidió hacer otros procedimiento (devuelve dos valores) para su lectura.

[Código](Sesion17.11.20/lineas.cpp)

### Combinatorios

Ejemplo sencillo sobre uso de varias funciones que se llaman entre sí.

Se utiliza para mostrar la diferencia entre usar prototipos (el orden de la implementación no es relevante) o sin prototipos (hay que cuidar el orden para que el ámbito de las funciones sea correcto).

Implementación con prototipos: [Código](Sesion17.11.20/combinatorio_prototipo.cpp)

Implementación sin prototipos: [Código](Sesion17.11.20/combinatorio_sin_prototipo.cpp)
