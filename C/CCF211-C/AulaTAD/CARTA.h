#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#ifndef TAD_CARTA_H
#define TAD_CARTA_H

typedef struct{
    int numcarta;
    int naipe;
    char naipec[2];
    char numcartac[3];
}CARTA;

void gera_numero();
void gera_carta();


#endif /* TAD_CARTA_H */