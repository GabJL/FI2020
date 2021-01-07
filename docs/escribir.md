# Operacion escribir

En este caso nos interesa escribir los elementos de un array. Esto es recorrer todos los elementos del array y mostrarlos. La lista se supone que es correcta (quizás se [inicializó de forma fija](inicializar.md) o mediante [lectura](leer.md) u otro mecanismo):

```cpp
void escribir(const TLista &l){
  for(int i = 0; i < l.tam; i++){ // Miramos todos los valores válidos de la lista
    cout << l.datos[i] << " "; // y los escribimos (con algún separador entre medio)
  }
  cout << endl;
}
```

## Caso concreto: escribir filtrando

En vez de escribir todos, nos puede interesar solo los que cumplan ciertas propiedades:


```cpp
void escribir(const TLista &l){
  for(int i = 0; i < l.tam; i++){ // Miramos todos los valores válidos de la lista
    if(cumpleCondicion(l.datos[i]){
      cout << l.datos[i] << " "; // y los escribimos (con algún separador entre medio)
    }
  }
  cout << endl;
}
```
