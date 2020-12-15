# Sesión del 15/12/2020

## Contenidos vistos en la clase

### Tema 6
* En este caso hemos continuado viendo ejercicios de matrices y repasando arrays y strings.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 33-34).
  
## Códigos utilizados

### Apocalipsis Zombie
*Ante el reciente virus zombie aparecido en los ciervos, los científicos se han volcado en ver cómo se propaga. Para ello han acordonado una zona de 40 x 30 km2y han puesto dos animales contaminados en dos zonas diferentes. Han dividido la zona en cuadrículas de 1 x 1 km2. Han observado que el virus tarda 1 día en contaminar una cuadrícula y al día siguiente se contaminan todas las adyacentes (véase el ejemplo de abajo). Realice un programa que nos muestre cuándo se contaminaría cada zona.*

Comentario sobre la solución:
* En este caso hay dos posibles soluciones:
  * Directamente podemos calcular el valor de cada posición calculando la distancia hamming a los puntos iniciales y luego calcular el mínimo.
  * Ir simulando la expansión y cada iteración extender la plaga una casilla. Esto implica ir mirando todas las casillas cercanas. Haremos esta solución.

[Código de la solución 1](sesion15.12.20/apocalisis_zombie1.cpp)

[Código de la solución 2](sesion15.12.20/apocalisis_zombie1.cpp)

