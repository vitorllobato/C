#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&m);
    #define n m
    int vetor[n],soma=0;
    
    for(int i=0;i<n;i++){
        printf("Digite o valor do vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
        if(i%2==0){
            soma+=vetor[i];
        }
        }
    printf("A soma dos indices pares do vetor eh: %d.\n",soma);


    return 0;
}