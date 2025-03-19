#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "configuracion.h"
#include "inicio.h"
//meter el modulo de cargar y guardar


int main(){
	

	
	inicio_config();
	
	}
	

void inicio_config(){
	int selecion;
	printf("--------------------\n");
	printf("-   CONFIGURACION  -\n");
	printf("--------------------\n");
	printf("-1.Introducir datos-\n");
	printf("-2.Mostrar         -\n");
	printf("-3.Borrar          -\n");
	printf("-4.Guardar         -\n");
	printf("-5.Cargar          -\n");
	printf("-6.Volver          -\n");
	printf("--------------------\n");
	printf("La eleccion es: ");
	scanf("%i",&selecion);
	
	
	
	switch(selecion){
		case 1: introducir_datos();
				break;
		case 2: mostrar_resumen();
				break;
		case 3: borrar_configuracion();
				break;
		case 4: // llamar a guardar del modulo que a hehco guti
				break;
		case 5: //llamar a cargar del modulo que ha hecho guti;
				break;
		case 6: inicio();
				break;
		default:printf("La eleccion no ha sido correcta, vuelve a elegir la opcion\n");
				inicio_config();
				break;
	}
}


void introducir_datos(){
	char j1[20],j2[20];
	char tipo_disparo1,tipo_disparo2;
	int tablero,comienzo,num_aleatorio;
	printf("---------------\n");
	printf("Introduce el nombre del primer jugador: ");
	scanf("%s",&j1);//j1 seria el nombre del primer jugador de la estructura.
    printf("Introduce el tipo de disparo del primer jugador(A automatico, M manual): ");
    fflush(stdin);
	scanf("%c",&tipo_disparo1); //tipo_disparo1 cambiar por la estructura de jugador
	while (tipo_disparo1 != 'A' && tipo_disparo1 != 'M') {
       
        printf("Entrada invalida. Introduce 'A' para automatico o 'M' para manual: ");
        getchar();  
        scanf("%c", &tipo_disparo1);
    }
	
	printf("\nIntroduce el nombre del segundo jugador: ");
	fflush(stdin);
	fgets(j2,20,stdin);//j2 seria el nombr del segundo jugador de la estructura.
	printf("Introduce el tipo de disparo del primer jugador(A automatico, M manual): ");
    fflush(stdin);
	scanf("%c",&tipo_disparo2);//tipo_disparo2 cambiar por la estructura de jugador
	while (tipo_disparo2 != 'A' && tipo_disparo2 != 'M') {
        
        printf("Entrada invalida Introduce 'A' para automatico o 'M' para manual: ");
        getchar(); 
        scanf("%c", &tipo_disparo2);
    }
	
	printf("\nintroducid el tamaño de los tableros: ");
	scanf("%d",&tablero);
	
	printf("|nintroducir el tipo de barco: ");
	
	printf("|nnumero de cada barco a utilizar: ");
	
	printf("\njugador que comienza la partida 1-Jugador1 2-Jugador2 3-Aleatorio: ");
	scanf("%d",&comienzo);
	if(comienzo==3){
		srand(time(NULL));

    
    num_aleatorio = (rand() % 2) + 1;
    if(num_aleatorio==1) printf("comienza el jugador 1");
    else printf("comienza el jugador 2");
	}
}
void mostrar_resumen(){
	printf("------resumen---------");
}
void borrar_configuracion(){
	printf("--------borrar--------");
}
void guardar_datos(){
	printf("---------guardar-------");
}
void cargar(){
	printf("----------cargar------");
}
