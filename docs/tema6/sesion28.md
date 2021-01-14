# Sesión del 12/01/2021

## Contenidos vistos en la clase

### Tema 6
* Ejercicios de arrays de registros
  
## Códigos utilizados

### Ejercicio de películas

La solución a los 6 últimos aparados del [ejercicio de array de registro de películas](https://eii.cv.uma.es/pluginfile.php/233747/mod_resource/content/1/Ejercicio%20de%20clase%20%28array%20de%20registros%29.pdf) se puede ver [aquí](sesison14.01.21/peliculas.cpp) (para poder usar ese código necesita el [fichero con las películas](sesion12.01.21/movies-reducida.txt)).

### Ejercicio 3 de Febrero de 2020

Definición de tipos para el [ejercicio 3 del examen de febrero](https://eii.cv.uma.es/pluginfile.php/284862/mod_folder/content/0/ex-TEORIA-SEP20.pdf?forcedownload=1) se puede ver [aquí](sesison14.01.21/feb20e3.cpp).

Algunos datos para este ejercicio:
```cpp
#include <iostream>
#include <array>

using namespace std;

int main(){
    Tfranquicia l;

    l = {
    {{
      {"Juan Perez","Calle 1","Malaga",29001,5, {{ {"cod1",10},{"cod3",5},{"cod8",14},{"cod2",2},{"cod18",30}  }}   },
      {"Lucia Ortiz","Calle 2","Malaga",29003,7, {{ {"cod1",10},{"cod3",5},{"cod9",30},{"cod8",14},{"cod2",2},{"cod18",30},{"cod19",15} }}   },
      {"Julio Ortega","Calle 3","Malaga",29005,2, {{ {"cod1",5},{"cod19",33}  }}   },
      {"Mercedes Diaz","Calle 4","Malaga",29007,1, {{ {"cod1",20} }}   },
      {"Luis Garcia","Calle 5","Malaga",29010,4, {{ {"cod1",1},{"cod3",6},{"cod4",25},{"cod20",12}  }}   },
      {"Maria Ruiz","Calle 6","Sevilla",41001,5, {{ {"cod1",8},{"cod3",50},{"cod8",1},{"cod2",23},{"cod18",3}  }}   },
      {"Pedro Gomez","Calle 7","Sevilla",41003,7, {{ {"cod1",23},{"cod3",15},{"cod9",3},{"cod8",4},{"cod2",22},{"cod18",31},{"cod19",5} }}   },
      {"Claudia Azuaga","Calle 8","Sevilla",41005,2, {{ {"cod1",5},{"cod19",33}  }}   },
      {"Daniel Carmona","Calle 9","Madrid",28007,1, {{ {"cod1",200} }}   },
      {"Carmen Garcia","Calle 10","Madrid",28010,4, {{ {"cod1",14},{"cod3",60},{"cod4",5},{"cod20",18}  }}   },
      {"Antonio Gomez","Calle 11","Zaragoza",50001,3, {{ {"cod3",50},{"cod8",15},{"cod14",10}  }}   },
    }}, 
    11
    };
    
    return 0;
}
```
