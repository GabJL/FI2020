# Convocatoria Ordinaria de Febrero

## Ejercicio 1

*Realizar una función llamada `buscar_frecuencias()` que, dada una lista de números enteros (máximo 30 elementos), devuelva el valor que más veces se repite y el que menos veces se repite. En caso de exista empate de varios valores en las frecuencias de repetición se puede devolver cualquiera de ellos.*

*Por ejemplo, en la siguiente lista de 14 elementos:  `3  500  3  6  -90  3  12  500  -90  12  -90  6  3  -1520`,  el valor que más veces se repite es el 3 y el que menos veces se repite es el -1520.*

*Implemente un programa completo que le permita hacer las pruebas oportunas.*

*Para la valoración del ejercicio, se tendrá en cuenta la eficiencia de la solución aportada.*

Se ofrecen dos soluciones:
* Una calculando en cada momento la cantidad de veces que aparece el valor: [Solución del ejercicio](ordinaria1/feb21e1v1.cpp)
* Otra más eficiente pero compleja donde se crea un array de frecuencias y luego se calculan los valores buscados: [Solución del ejercicio](ordinaria1/feb21e1v2.cpp)

## Ejercicio 2

*Una conocida empresa cinematográfica desea desarrollar una aplicación para ver cuáles son los personajes favoritos de los espectadores. Para ello nos han pedido realizar un prototipo inicial. Esta aplicación debe guardar los votos recibidos para cada personaje junto a su nombre, el actor que lo interpreta y la serie en la que aparece. Nos interesa almacenar 500 personajes a lo sumo. Se pide:*

* *Definir las estructuras de datos necesarias para guardar los votos. Realizar el subprograma `incluir_voto()`, que reciba los datos de un personaje (nombre, serie y actor) y lo apunte a la lista de votos con las siguientes características:*
  * *Si el personaje no aparece lo añadirá con un solo voto (si hay hueco en el listado).*
  * *Si ese personaje ya está en el listado, le añadirá un voto a los que ya tiene.*
*El subprograma devolverá una indicación de si se ha podido o no apuntar el voto por no haber hueco.*

* *Realiza el subprograma `mejor_de_la_serie()` que dado el nombre de una serie, nos devuelva todos los datos del personaje de esa serie que tiene más votos.*

* *Realiza el subprograma actor_participa() que dado el nombre de un actor, nos devuelva una lista de series en las que ha participado. De cada serie debe incluir el nombre de la serie y un listado de los nombres de los personajes de esa serie que tenemos registrados. Defina los tipos de datos que necesite. Puede considerar que no hay más de 20 series diferentes ni más de 10 personajes por serie.*

[Solución del ejercicio](ordinaria1/feb21e2.cpp)

