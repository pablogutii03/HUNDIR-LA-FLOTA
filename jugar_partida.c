#include <stdio.h>
#include <string.h>
#include "configuracion.h"
#include "tablero.h"

//Sección importa
#ifndef CONFIGURACION_H     //Necesito el nombre_jugador (de tipo char) , tipo de disparo(char)
#define CONFIGURACION_H
void introducir_datos();
#endif

#ifndef TABLERO_H      //Necesito función reiniciar_tablero para la función reiniciar partida
#define TABLERO_H
void reiniciar_tablero(FILE * jugador);
char *obtener_dato_casilla(int x, int y);
#endif
//fin_importa



//Sección exporta
/*int ha_ganado(const char *ganador, const char *nombre_jugador);  //Exportar para estructura.h ,además el ganador vendrá definido en la función fin_partida
void reiniciar_partida(void (*reiniciar_tablero), int (* ha_ganado)(char *, const char *));
void fin_partida(const char *,const char *, int (*hundim_total), char *, int , int);
*/
//fin_exporta
typedef struct {
    int victoria_jugador1;
    int victoria_jugador2;
} Victoria;



//Declaración de funciones nativas de este módulo
int ha_ganado(const char *, const char *);
void reiniciar_partida(void (*reiniciar_tablero)(FILE *),Victoria *contador);
void fin_partida(const char *,const char *, int (*hundim_total), char *, int , int);



//Programa JugarPartida
int main(){
Victoria victoria = {0, 0}; //Se inicializa siempre al empezar la partida, victoria a 0
                      //En bucle siempre para comprobar que no ha acabado la partida, si no ha acabado continuará su turno.
                      //Dispara en automático o manual
    return 0;
}


//Cabecera: int (*hundim_total)
//Precondición:
//Postcondición: Recorre todos los vectores de barcos para ver si la flota entera del jugador x está hundida.



//Cabecera:             void fin_partida(char nombre_jugador1, char nombre_jugador2, void (*func) hundim_total, char * ganador, int flota_hundida1, int flota_hundida2){
//Precondición:       Inicializado el nombre de ambos jugadores, paso por parámetros la función hundimiento total
//Postcondición       Modifica la cadena ganador copiando la cadena del nombre jugador que haya ganado y dice si ha terminado la partida, borra el tablero o si continúa en turno.
void fin_partida(const char *nombre_jugador1,const char *nombre_jugador2, int (*hundim_total) , char * ganador, int flota_hundida1, int flota_hundida2){
        if(hundim_total == 1){
                hundim_total; //Llama a la función hundim_total que recorre todos los vectores y dice si una flota entera se ha hundido.
                if((flota_hundida1 == 0) && (flota_hundida2 == 1)){
                    strcpy(ganador, nombre_jugador1);
                }
                if((flota_hundida1 == 1) && (flota_hundida2 == 0)){
                    strcpy(ganador, nombre_jugador2);
                }
                if((flota_hundida1 == 1) &&(flota_hundida2 == 1)){      //Caso especial, ambos están hundidos y por tanto se desempata reiniciando la partida y volviendo a jugar
                    reiniciar_partida;
                }
        }

}                                                                                                                                                                               //Estado: Progreso, hacer más condiciones de final. Falta corregir el empate


//Cabecera:           void reiniciar_partida(void (*reiniciar_tablero)(FILE *), Victoria *contador)
//Precondición:     Llama a puntero a función de módulo "Tablero.h" y tiene puntero a la función nativa ganado.
//Postcondición:    Borra el tablero y cambia el contador de victorias a 0 todos.
void reiniciar_partida(void (*reiniciar_tablero)(FILE *), Victoria *contador)
    {
    FILE *archivo = fopen("jugadores.txt", "r");
    if (archivo != NULL) {
        reiniciar_tablero(archivo);
        fclose(archivo);
    } puts("El archivo no ha podido abrirse");
    contador->victoria_jugador1 = 0;
    contador->victoria_jugador2 = 0;
}

//Cabecera:           int ha_ganado(char ganador, char nombre_jugador){
//Precondición:     Variable cadena ganador (inicializada en fin_partida) y nombre del jugador inicializadas anteriormente, podrán ser iguales o diferentes entre sí.
//Postcondición:    Devuelve un entero 1 si el jugador ha ganado es decir, si cadena ganador y jugador son iguales y 0 si son diferentes, no ha ganado.
int ha_ganado(const char *ganador, const char *nombre_jugador) {
    return (strcmp(ganador, nombre_jugador) == 0) ? 1 : 0;
} //Estado: LISTA

