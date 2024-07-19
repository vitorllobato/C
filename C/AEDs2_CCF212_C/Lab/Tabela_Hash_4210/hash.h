#ifndef HASH_H
#define HASH_H

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>   

#endif // HASH_H

typedef struct tripulante{
    char nome[50];
    char id[6];

    }tripulante;

tripulante aviao[7], lista[7];

void recebeAviao(FILE* arquivo, tripulante* lista, tripulante* aviao);
void embarque(tripulante* lista, tripulante* aviao); //função do hash
void consultaPoltrona(char* nome, tripulante* aviao);
int codHash(tripulante* lista, int i);