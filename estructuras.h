#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
#include <stdbool.h>
typedef struct{
	int id_jugador;
	char nomb_jugador[20];
	char tipo_disparo;
	int num_disp;
	bool ganado;
}jugador;

typedef struct{
	char nomb_barco[20];
	int id_barco;
	int tam_barco;
}barcos;


#endif
