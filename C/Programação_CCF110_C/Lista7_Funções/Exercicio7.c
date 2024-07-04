#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char categoria[12];

void idade (int a){
    if (a >= 5 || a <= 7){
        strcpy(categoria,"Infantil A");
        }
    else if (a >= 8 || a <= 10){
        strcpy(categoria,"Infantil B");
        }
    else if (a >= 11 || a <= 13){
        strcpy(categoria,"Juvenil A");
        }
    else if (a >= 14 || a <= 17){
        strcpy(categoria,"Juvenil B");
        }
    else if (a >= 18){
        strcpy(categoria,"Adulto");
        }
    }

int main(){
    int anos;
    printf("Escreva a idade em anos.\n");
    scanf("%d",&anos);
    idade(anos);
    printf("%s\n",categoria);
    return 0;
    }