#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int funcrand(){
    int n;
    srand(time(NULL));
    n = rand() % 100+1;
    return n;
    }

int main(){
    int x,quant,contpc=0,contuser=0,num; //x=numero aleatorio, quant=quantidade de numeros, num=numero digitado, contpc=contador pc, contuser=contador user
    scanf("%d",&quant);
    for(int i=0;i<quant;i++){
        x=funcrand();
        printf("\nDigite 0 para par e 1 para impar: ");
        scanf("%d",&num);
        if(num==0){
            if(x%2==0){
                printf("Voce ganhou! O numero era %d.\n",x);
                contuser++;
                }
            else{
                printf("Voce perdeu! O numero era %d.\n",x);
                contpc++;
                }
            }
        else if(num==1){
            if(x%2==1){
                printf("Voce ganhou! O numero era %d.\n",x);
                contuser++;
                }
            else{
                printf("Voce perdeu! O numero era %d.\n",x);
                contpc++;
                }
            }
        else{
            printf("Voce digitou um numero invalido!\n");
            }
    }
        if(contuser>contpc){
            printf("Voce ganhou o jogo!\n");
            }
        else if(contpc>contuser){
            printf("Voce perdeu o jogo!\n");
            }
        else if(contpc==contuser){
            printf("Empate!\n");
            }

    return 0;
    }