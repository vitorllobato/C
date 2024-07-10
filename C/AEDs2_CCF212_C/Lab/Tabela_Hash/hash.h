#ifndef HASH_H
#define HASH_H

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>   

#endif // HASH_H

typedef struct tripulante{
    int ascii;
    char nome[50];
    char id[6];

    }tripulante;

tripulante aviao[7], lista[7];

void recebeAviao(FILE* arquivo, tripulante* lista);
void embarque(tripulante* lista,tripulante* aviao);
void consulta(char nome, tripulante* aviao);
void hashUniversal(tripulante* lista,tripulante* aviao);
void nomeParaAscii(char *nome,int *asciiValues);