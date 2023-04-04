#include "CARTA.h"
CARTA carta; 

void gera_numero(){
    srand(time(NULL));
    carta.numcarta = rand()%13+1;
    carta.naipe = rand()%4;
    }
void gera_carta(){
    gera_numero();
    switch(carta.numcarta){
        case 1:
            sprintf(carta.numcartac,"A");
            break;
        case 11:
            sprintf(carta.numcartac,"J");
            break;
        case 12:
            sprintf(carta.numcartac,"Q");
            break;
        case 13:
            sprintf(carta.numcartac,"K");
            break;
        default:
            sprintf(carta.numcartac,"%d",carta.numcarta);
    }
    switch(carta.naipe){
        case 0:
            sprintf(carta.naipec,"P");
            break;
        case 1:
            sprintf(carta.naipec,"C");
            break;
        case 2:
            sprintf(carta.naipec,"O");
            break;
        case 3:
            sprintf(carta.naipec,"E");
            break;
        }
    printf("%s %s\n",carta.numcartac,carta.naipec);
    }
