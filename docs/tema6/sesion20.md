# Sesión del 27/11/2020

## Contenidos vistos en la clase

### Tema 6
* Repaso de arrays y algún ejercicio más avanzado (arrays de frecuencias)
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 15-16).
  
## Códigos utilizados

### Estudiando
*Defina un tipo para almacenar la nota de los alumnos de 3 grupos (con 30 alumnos por grupo)*
* *En el main defina una variable de ese tipo y ponga todos los valores a -1*
* *Cree una función que lea las notas de 5 alumnos (de cada alumno debe pedir su posición y su nota)*
* *Cree una función que muestre las notas válidas de los alumnos del grupo 2*
* *Cree una función que nos diga cuántos alumnos suspensos hay (tienen una nota válida (no es -1) pero es menor de 5)*
* *Cree una función que nos diga cuántos sobresaliente hay*
* *Cree una función que nos diga si hay alguna matrícula de honor*


Este ejercicio nos permite utilizar de forma básica un array:
* Primero tenemos que definir el tipo con `typedef`. En este caso son un montón (90) de valores reales, donde cada valor indica la notas.
* Luego son varios recorridos completos o de una parte muy especifica del código y finalmente un recorrido parcial.

[Código](sesion27.11.20/estudiando.cpp)

### Array de frecuencias
*Realice un programa que lea un número indeterminado y desconocido de notas (valores natural entre 0 y 10).*

*Puede suponer que todas las notas son correctas y acaban con un -1.*
*Como resultado debe escribir por pantalla la cantidad de notas de cada tipo (cuántos 0 hubo, cuántos 1, cuántos 2, …, cuántos 10).*

Comentarios:
* Ahora en vez de usar el array para guardar los valores (que no podemos porque no sabemos cuántos hay), lo usamos con array de contadores, donde la posición i guarda cuántas notas de valor i ha habido.

[Código](sesion27.11.20/freq.cpp)

