#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10],soma=0,media;
    for (int i=0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        getchar();
        soma+=vetor[i];
    }
    media=soma/10;
    printf("A media das notas é %d.\n",media);


    return 0;
}