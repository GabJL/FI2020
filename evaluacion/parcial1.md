# Parcial 1

La tienda, El Retal Francés, está pensando en ofrecer a sus clientes un servicio de reparto a domicilio y como conocen nuestra enormes conocimientos de programación nos han pedido desarrollar un prototipo con las siguientes características:

* **(0.2 puntos)** El cajero primero introducirá el número de productos y se leerán los precios de esos productos con el fin de calcular el coste total. NOTA: Si no sabe hacer este apartado, lea el coste total y continúe con el siguiente apartado.

**Ejemplo:**
```
Cuantos productos se han comprado: 4
Precios de los productos: 10 5 9.5 20
Precio total: 44.5
```
* **(0.4 puntos)** Tras calcular el precio total bruto en el apartado anterior, ahora se calculará el precio final de la compra siguiendo las siguientes características:
  * Si la compra no supera los 50 euros, se cobrarán los gastos de envío (6 euros). En el resto de casos no se abonarán esos gastos de envío.
  * Si la compra supera los 100 euros se le hace un 3 % de rebaja al total y luego se le añade un 1% de descuento adicional de descuento por cada 20 euros que superen los 200 euros hasta un máximo de un 10%.

**Ejemplo 1 (No llega a 50 y paga 6 euros de gastos de envío)**
```
Cuantos productos se han comprado: 4
Precios de los productos: 10 5 9.5 20
Precio total: 44.5
Precio final: 50.5
```
**Ejemplo 2 (No paga gastos de envío (> 50), pero no llega a 100 y no tiene descuento)**
```
Cuantos productos se han comprado: 2
Precios de los productos: 40 49.95
Precio total: 89.95
Precio final: 89.95
```
**Ejemplo 3 (más de 100 pero no llega a 200 => 3%):**
```
Cuantos productos se han comprado: 1
Precios de los productos: 150
Precio total: 150
Precio final: 145.5
```
**Ejemplo 4 (3% + 2% por superar en más de 40 los 200 euros):**
```
Cuantos productos se han comprado: 1
Precios de los productos: 255
Precio total: 255
Precio final: 242.25
```
**Ejemplo 5 (10%, descuento máximo):**
```
Cuantos productos se han comprado: 1
Precios de los productos: 500
Precio total: 500
Precio final: 450
```

* **(0.1 puntos)** Finalmente, se le ofrecerá la posibilidad de que la compra en vez de ser entregada en casa, se les pueda dejar en uno de los armarios de reparto disponibles a lo largo de la ciudad. Los armarios tienen unas dimensiones de 50x60x40 cm y lo primero es comprobar si la compra puede ser almacenada en él. El almacenista introducirá las dimensiones del paquete (X, Y, Z) y el programa debe informar si es posible o no.

**Ejemplo 1:**
```
Cuantos productos se han comprado: 1
Precios de los productos: 500
Precio total: 500
Precio final: 450
Dimensiones del paquete: 45.5 40 30
El paquete SI puede almacenarse en el armario.
```
**Ejemplo 2:**
```
Cuantos productos se han comprado: 1
Precios de los productos: 500
Precio total: 500
Precio final: 450
Dimensiones del paquete: 45.5 35 47
El paquete NO puede almacenarse en el armario.
```
* **(0.3 puntos)** En el caso de que no pueda almacenarse directamente en el armario, se le preguntará al almacenista si puede ser girado o no (una letra, s o n). En caso afirmativo se comprobará si girándose se puede almacenar

**Ejemplo 1:**
```
Cuantos productos se han comprado: 1
Precios de los productos: 500
Precio total: 500
Precio final: 450
Dimensiones del paquete: 45.5 35 47
El paquete NO puede almacenarse en el armario.
Se puede girar? s
El paquete SI puede ser almacenado girado.
```
**Ejemplo 2:**
```
Cuantos productos se han comprado: 1
Precios de los productos: 500
Precio total: 500
Precio final: 450
Dimensiones del paquete: 51 30 56
El paquete NO puede almacenarse en el armario.
Se puede girar? s
El paquete TAMPOCO puede ser almacenado girado.
```

**[Solución](parcial1/p1.cpp)**
