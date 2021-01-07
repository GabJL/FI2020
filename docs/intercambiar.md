# Operación intercambiar

Esta operación es muy sencilla, pero al utilizarse mucho es interesante aclararla. Dado un array y dos posiciones debes intercambiar las posiciones del array indicadas. Solo cuidado que se requiere una variable auxiliar para hacer el intercambio:

```cpp
void intercambiar(TLista &l, int pos1, int pos2){
  int auxiliar = l.datos[pos1];
  l.datos[pos1] = l.datos[pos2]; // Aquí perdemos el dato de pos1 y por eso necesitábamos antes guardarlo en auxiliar
  l.datos[pos2] = auxiliar;
}
```
