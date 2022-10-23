#include <stdio.h>
#include <stdlib.h>

int main(){
        int i,n,comp,vet[10];
    printf("Escreva os números do vetor: ");
    for (i = 0; i < 10; i++){
        scanf("%d",&vet[i]);
        }
    printf("Escreva o numero de comparação: ");
    scanf("%d",&comp);
    for (i = 0; i < 10; i++){
        if (vet[i]<comp){
            printf("%d ",vet[i]);
        }
        
    }
    

    return 0;
}