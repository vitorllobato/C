#include <stdio.h>
#include <stdlib.h>

int main(){
                    int n=0,vetor1[10],vetor2[10],vetorResultante[20],i,k=0;
    for (i=0; i < 10; i++){
        printf("Digite um numero do vetor 1: ");
        scanf("%d",&vetor1[i]);
        }
    for (i=0; i < 10; i++){
        printf("Digite um numero do vetor 2: ");
        scanf("%d",&vetor2[i]);
        }
    for (i=1; i < 20; i=i+2){
        vetorResultante[i]=vetor1[k];
        vetorResultante[i+1]=vetor2[k];
        k++;
        }
    printf("Vetor resultante: ");
    printf("[");
    for (i=0; i <= 20; i++){
        printf("%d ",vetorResultante[i]);
        }  
    printf("]");
    return 0;
}