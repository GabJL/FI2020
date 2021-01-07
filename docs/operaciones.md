# Operaciones básicas sobre array

En este apartado se mostrarán las operaciones básicas sobre arrays que deben saberse con cierta soltura.

Como base para resolver estos ejercicios se utilizará el siguiente tipo de array incompleto:

```cpp
const int MAX = 100;

typedef array<int, MAX> TArray;

typedef struct{
    TArray  datos;
    int     tam;
} TLista;
```

Que se use ese tipo concreto no resta generalidad y se podría con poco cambios a:
* Arrays completos: Donde se usa `tam` habría que utilizar `MAX`
* Otros tipo base diferente a `int`. Si el tipo base es simple seguramente pueda utilizarse tal cual el código mientras que si un tipo estructurado habría que acceder al campo/posición que nos interesara.

Finalmente aclarar que estas son las operaciones tradicionales pero quizás según las características concretas del problema entre manos podrían necesitar ciertos ajustes.

Para cada operación primero se hará de forma general y luego se mostrará cómo aplicarla en uno o varios ejemplos concretos.

Una cuestión importante de todos ellos es que si se observa ninguno de estas operaciones leen ni escriben (salvo las que en su nombre tienen esos términos) y siempre debe ser así, estas funciones hacen la operación solicitada y el llamante debe encargarse obtener los datos y usar los resultados

## Operaciones de búsqueda:

* [esta](oper/esta.md): En el array está un valor o hay algún valor que cumpla cierta condición. Devolvemos un `bool` indicando si se cumple o no
* [buscar](oper/buscar.md): Igual que antes pero en vez de devolver si hay algún valor que cumpla la condición se devolverá en qué posición se cumple.

## Operaciones de inserción:

* [Insertar al final](oper/inser-final.md)
* [Insertar en posición](oper/inser-pos.md)
* [Insertar ordenado](oper/inser-ordenado.md)

## Borrar

* [Borrar posición en array desordenado](oper/borrar-desordenado.md)
* [Borrar posiciñon en array ordenado](oper/borrar-ordenado.md)
* [Borrar valor](oper/borrar-valor.md)

## Lectura y escritura

Estas son las únicas operaciones que se permite leer y escribir
* [Leer los valores de un array](oper/leer.md)
* [Escribir los valores de un array](oper/escribir.md)

## Otras operaciones

* [Inicializar](oper/inicializar.md)
* [Buscar elemento destacado](oper/mayor.md)
* [Intercambiar dos posiciones](oper/intercambiar.md)

Las siguientes operaciones realmente no son básicas sino aplicación de las anteriores pero se muestran debido a que son muy utilizadas:
* [Ordenar](oper/ordenar.md)
* [Generar array filtrado](oper/filtrado.md)
