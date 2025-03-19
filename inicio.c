#include <stdio.h>
#include <stdlib.h>

#include "configuracion.h"
//#include "jugar_partida.h"
#include "inicio.h"


int main(){
	
	inicio();
}

void inicio(){
	int selecion;
	printf("***************************************\n");
	printf("**      BIENVENIDO AL JUEGO 	     **\n");
	printf("**    	 HUNDIR LA FLOTA             **\n");
	printf("***************************************\n");
	printf("**       1-CONFIGURACION             **\n");
	printf("**          2-JUGAR                  **\n");
	printf("**          3-SALIR                  **\n");
	printf("***************************************\n");
	printf("La eleccion es: ");
	scanf("%i",&selecion);
	
	switch(selecion){
		case 1: inicio_config();
				break;
		case 2: //jugar();
				break;
		case 3: return;
				break;
		default:printf("La eleccion no ha sido correcta, vuelve a elegir la opcion\n");
				inicio();
				break;
	}
	
	} 
