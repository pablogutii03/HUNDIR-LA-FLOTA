#include <stdio.h>
#include <stdlib.h>         //importa librerías estandar

#include  "estructuras.h"
#include  "configuracion.h"

//funciones a exportar

void reiniciar_tablero(char **tablero)  //inicializa los tableros con manteniendo la matriz proporcionada//

//precondicion: op_tab debe ser 1 (en caso de querer crear el tablero jugador y desplegar la interfaz para que este introduzca sus barcos) o 2 (solo crea e inicializa la matriz para el oponente)
char** introducir_tablero(int op_tab, int n) //funcion para inicializar los tableros y que el usuario introduzca la posicion de sus barcos en caso de seleccionar op_tab = 1
