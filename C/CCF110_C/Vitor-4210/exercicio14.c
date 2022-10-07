#include <stdio.h>
#include <stdlib.h>

int main(){
        int i,n,comp=10,vet[comp];
    printf("Escreva os números do vetor: ");
    for (i = 0; i < comp; i++){
        scanf("%d",&vet[i]);
        }
    printf("[");    
    n=9;
    int novovetor[comp];
    for(i = 0;i < comp; i++){
        novovetor[n]=vet[i];
        n--;
        }
    for (i = 0; i < comp; i++){
        printf("%d ",vet[i]);
        }
    printf("]");
        printf("\n[");
    for (i = 0; i < comp; i++){
        printf("%d ",novovetor[i]);
        }
        printf("]");


    return 0;
}