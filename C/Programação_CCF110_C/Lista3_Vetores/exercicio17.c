#include <stdio.h>
#include <stdlib.h>

int main(){
        int media=0,i,n,comp,vet[10];
    printf("Escreva a altura dos jogadores em centimentros: ");
    for (i = 0; i < 10; i++){
        scanf("%d",&vet[i]);
        media=media+vet[i];
        }
        media=media/10;
    
    for (i = 0; i < 10; i++){
        if (vet[i]>media){
            printf("%d ",vet[i]);
        }
        
    }
    

    return 0;
}