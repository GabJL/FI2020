# Sesión del 3/12/2020

## Contenidos vistos en la clase

### Tema 6
* En este caso vemos el tipo `string` que ya vimos previamente, pero ahora con más detalles:
  * Se accede a las posiciones de cada letra con el operador `[]`
  * El tamaaño se obtiene con `.size()` y no se puede acceder a ninguna posición más (para ampliarlo hay que el operador `+`).
  * Se puede leer una línea completa con `getline(cin, var_string);` pero si se mezcla con `cin >> ` tradicionales antes hay que usar `cin >> ws;`.
  * Se pueden utilizar operadores de comparación y usa el orden lexicográfico en la primera letra diferente.
* Se puede tener más información en los [apuntes](https://eii.cv.uma.es/pluginfile.php/233727/mod_resource/content/2/Tema%206.pdf) (páginas 17-27).
  
## Códigos utilizados

### Ejercicio sobre string
*Realice un programa:*
* *A) Que lea palabras hasta que se lea FIN*
* *B) Indique la cantidad de palabras leídas (sin contar FIN)*
* *C) La palabra mayor (según el orden lexicográfico) leída*
* *D) Indique la palabra más corta leída (y su tamaño)*
* *E) Indique el acrónimo del texto leído*
* *F) Realice una función que reciba una palabra y la modifique pasándola a mayúscula
* *G) Use la función para escribir el acrónimo en mayúscula*


Este ejercicio nos permite utilizar de forma básica un string:
* Los apartados A-D lo usamos como tipo básico. Es decir, nos da igual que sean palabras o sean números (por ejemplo leer hasta 0, contar cuántos se leyeron y el mayor).
* En el apartado E usaremos el operador `+ ` para ir creando el texto y el `[] ` para acceder a la primera letra
* En el apartado F hacemos un recorrido completo sobre cada letra cambiándola.

[Código](sesion3.12.20/string.cpp)
