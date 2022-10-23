#include <stdio.h>
#include <stdlib.h>

int main(){
        int i,n,comp=10,vet[comp];
   
    for (i = 0; i < comp; i++){
        printf("Escreva um numero: ");
        scanf("%d",&n);
        vet[i]=n*n;
        }   
    printf("[");
    for (i = 0; i < comp; i++){ 
        printf("%d ",vet[i]);
        }
    printf("]");

    return 0;
}