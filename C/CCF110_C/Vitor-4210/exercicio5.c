#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0,vetor1[10],vetor2[10],i;
    for (i=0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor1[i]);
        vetor2[i]=vetor1[i];
        if (vetor1[i]<10){
            vetor2[i]=1;    
            }
        }
    for (i=0; i < 10; i++){
        printf("%d ",vetor1[i]);
        }
    printf("\n");
    for (i=0; i < 10; i++){
        printf("%d ",vetor2[i]);
        }

    return 0;
}