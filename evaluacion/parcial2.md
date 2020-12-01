# Parcial 2
## Ejercicio 1
Realice un programa que lea un número y nos dibuje la figura del ejemplo:
```
Dime el valor: 4
   X
  XX
 XXX
XXXX
    XXXX
    XXX
    XX
    X
```

Para resolver el ejercicio implemente:
* El subprograma `dibujar_caracteres`, que reciba como parámetros una letra `l` y un número `n` y escriba por pantalla `n` veces la letra `l`.
* El subprograma `dibujar_figura` que reciba como parámetro un número `n` y dibuje una figura de altura `2*n` que siga el patrón del ejemplo del enunciado. Este subprograma no debe hacer `cout`, para escribir las filas hará uso del subprograma `dibujar_caracteres`.
* La función principal que pida al usuario un número y llame al subprorama `dibujar_figura` pasándole ese valor.

**[Solución](parcial2/p1.cpp)**

## Ejercicio 2
Se quiere implementar un programa que examine la ruta que sigue un robot automático. El robot empieza la ruta en la posición (0,0) y cada cinco segundos se mueve a una nueva posición (x, y). El programa irá pidiendo al usuario las coordenadas del robot hasta que vuelva al origen y mostrará por pantalla:

* La distancia total recorrida.
* La posición visitada más lejana del origen.
* Número de veces que no se movió (la posición no cambió)

De forma obligatoria se deben hacer y utilizar al menos los siguientes subprograma:
* Un subprograma que lea las coordenadas de una posición
* Un subprograma que calcule la distancia entre dos posiciones
* Un subprograma que copie una posición en otra posición, es decir, recibirá 2 posiciones (4 valores) y copiará por ejemplo la primera posición en la segunda.
* Un subprograma que indique si dos posiciones son iguales

**Ejemplo:**
```
Introduzca las coordenadas visitadas:
2 2
2 2
2 2
5 6
0 6
0 6
0 0
Distancia recorrida: 18.8284 metros
La posicion mas lejana alcanzada fue (5,6)
No se movio en 3 ocasiones
```

**[Solución](parcial2/p2.cpp)**