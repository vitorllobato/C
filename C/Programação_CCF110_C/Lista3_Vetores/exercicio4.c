#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[15],i,maior=0,menor=0,posmaior=0,posmenor=0;
    
    printf("Digite um numero: ");
    scanf("%d",&vetor[0]);
    maior=vetor[0];
    menor=vetor[0];
    for (i=1; i < 15; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        getchar();
        if (vetor[i]>maior){
            maior=vetor[i];
            posmaior=i;
            }
        if (vetor[i]<menor){
            menor=vetor[i];
            posmenor=i;
            }
        }
        printf("O maior numero é %d e está na posição %d. O menor numero é %d e está na posição %d",maior,posmaior,menor,posmenor);

    return 0;
}