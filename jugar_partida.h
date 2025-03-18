#ifndef JUGAR_PARTIDA_H
#define JUGAR_PARTIDA_H
//Librerías estándar
#include <stdio.h>
#include <string.h>
//Módulos a importar, de los que toma datos el módulo jugar partida.
#include "configuracion.h"
#include "tablero.h"
//Estructura victoria
typedef struct {
    int victorias_jugador1;
    int victorias_jugador2;
} Victoria;                    //Esta estructura se la paso al módulo estructura jugadores para que pueda ver si ha sido ganador o no un jugador.

//Funciones nativas de jugar_partida, sección exportar
int ha_ganado(const char *ganador, const char *nombre_jugador);  //Exportar para estructura.h ,además el ganador vendrá definido en la función fin_partida
void reiniciar_partida(void (*reiniciar_tablero), int (* ha_ganado)(char *, const char *));
void fin_partida(const char *,const char *, int (*hundim_total), char *, int , int);
#endif //Termina "jugar_partida.h"
