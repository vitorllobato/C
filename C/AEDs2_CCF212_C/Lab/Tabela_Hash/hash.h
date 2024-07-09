#ifndef HASH_H
#define HASH_H

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>   

#endif // HASH_H

typedef struct tripulante{
    int codigo, incremento_tabela;
    char nome[50]
    }tripulante;

int aviao[7];

void recebeAviao(FILE* arquivo, int* aviao);
void embarque();
void consulta();
void exibeAviao();
void hashUniversal();

