# Sesión del 10/12/2020

## Contenidos vistos en la clase

### Tema 6
* En este caso vemos las matrices:
  * Son `array` donde cada elemento es a su vez otro `array`.
  * Se accede a las posiciones de con el operador `[][]`, donde el primero indica la fila y la segunda la columna.
  * Recorrerla matriz requiere un doble bucle. Dependiendo si quieres recorrer por columnas o filas, se deben intercambiar de orden los bucles
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 28-33).
  
## Códigos utilizados

### Ventas de Navidad
*Para las ventas de Navidad queremos desarrollar un software para analizar las ventas de cada producto por cada vendedor. Supongamos que como tenemos 100 productos y 30 trabajadores. Realice un programa que:*

* *Defina el tipo apropiado*
* *Lea de teclado las ventas de cada producto por trabajador*
* *Cantidad de productos vendidos en total*
* *Diga la cantidad de productos que vendió cada trabajador*
* *Diga cada producto cuánto se vendió en total*
* *Diga cuál producto se vendió más en total*

*Para probarlo en vez 100 y 30 use 4 y 3.*

Comentarios sobre la solución:
* Son ejercicios básicos sobre el uso de matrices. 
* Tras definir el tipo pide un recorrido total.
* Luego un recorrido por filas y luego por columnas.
* Finalmente se pide calcular el máximo.

[Código](sesion10.12.20/ventas_navidad.cpp)

### Apocalipsis Zombie
*Ante el reciente virus zombie aparecido en los ciervos, los científicos se han volcado en ver cómo se propaga. Para ello han acordonado una zona de 40 x 30 km2y han puesto dos animales contaminados en dos zonas diferentes. Han dividido la zona en cuadrículas de 1 x 1 km2. Han observado que el virus tarda 1 día en contaminar una cuadrícula y al día siguiente se contaminan todas las adyacentes (véase el ejemplo de abajo). Realice un programa que nos muestre cuándo se contaminaría cada zona.*

Comentario sobre la solución:
* En este caso hay dos posibles soluciones:
  * Directamente podemos calcular el valor de cada posición calculando la distancia hamming a los puntos iniciales y luego calcular el mínimo.
  * Ir simulando la expansión y cada iteración extender la plaga una casilla. Esto implica ir mirando todas las casillas cercanas. Haremos esta solución.

[Código](sesion10.12.20/apocalipsis_zombie.cpp)

