#include <stdio.h>
#include <stdlib.h>         //importa librerías estandar

#include  "estructuras.h" 
#include  "configuracion.h"

//funciones a exportar
void reiniciar_tablero(FILE * jugador)  //inicializa los tableros para ser configurados de nuevo
void introducir_tablero(FILE * jugador) //funcion para que el usuario al cual le corresponde el fichero que recibe como puntero introduzca la posicion de sus barcos
char *obtener_dato_casilla(char x, int y) //devuelve el valor que contiene la posicion especificada en el formato que entrega el usuario
