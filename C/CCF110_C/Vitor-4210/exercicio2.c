#include <stdio.h>
#include <stdlib.h>

int main(){
            int vetor[6],i,positivo=0,negativo=0;
    for (i=0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        getchar();
        if (vetor[i]>=0){
            positivo++;
        }else{
            negativo++;
        }
        }
    printf("%d são positivos e %d são negativos",positivo,negativo);  

    return 0;
}