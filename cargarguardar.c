#include cargarguardar.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cargarJuego(juego **vjuego, int *n, int *id_juego ){
FILE *f;
*n=0;
char *token;
char linea [350];
int tk;
(*vjuego)=NULL;

f= fopen("juegos.txt","r");
if(f==NULL){
    puts("No se ha podido abrir el archivo");
    exit(1);
}

// Leer linea por linea
do{
    fgets(linea,350,f);
    if(strcmp(linea,"\0") !=0){
        *vjuego=(juego *)realloc(*vjuego,((*n)+1)*sizeof(juego));

         token=strtok(linea, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].id_barco,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].num_barco,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].tam_tablero,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].num_barcosflota,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].tam_listabarcos,token);

        token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].id_jugador,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].nomb_jugador,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].num_disparos,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].tipo_disparo,token);

         token=strtok(NULL, "-");
        if(token==NULL) break;
        strcpy((*vjuego)[*n].jug_ganador,token);

        token=strtok(NULL,"-");
        if(token==NULL) break;
        tk=atoi(token);

        (*n)++;      //Aumenta el número de juegos cargados
    }
}while(!feof(f));

fclose(f);

return 0;

}
void guardarJuego(juego **vjuego,int *numjuego, int *id_juego){
    FILE *f;

    int i;

    f=fopen("juegos.txt","w+");

    if(f==NULL){
        puts("No es posible abrir el fichero");
        exit(1);
    }
    for(i=0; i<(*numjuego); i++){

        fprintf(f,"%s-%s-%s-%s-%s-%s-%s-%s-%s\n",(*vjuego)[i].id_barco,(*vjuego)[i].num_barco,(*vjuego)[i].tam_tablero,(*vjuego)[i].num_barcosflota,(*vjuego)[i].tam_listabarcos,(*vjuego)[i].id_jugador,(*vjuego)[i].nomb_jugador,(*vjuego)[i].num_disparos,(*vjuego)[i].tipo_disparo,(*vjuego)[i].jug_ganador);
    }
    fclose(f);
}
