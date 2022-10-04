#include <stdio.h>
#include <stdlib.h>

int main(){
                    int n=0,vetor1[10],vetor2[10],vetorResultante[20],i;
    for (i=0; i < 10; i++){
        printf("Digite um numero do vetor 1: ");
        scanf("%d",&vetor1[i]);
        }
    for (i=0; i < 10; i++){
        printf("Digite um numero do vetor 2: ");
        scanf("%d",&vetor2[i]);
        }
    for (i=1; i < 20; i++){
        vetorResultante[i-1]=vetor1[i];
        vetorResultante[i]=vetor2[i];
        i++;
        }
    printf("Vetor resultante: ");
    for (i=0; i < 20; i++){
        printf("%d,",vetorResultante[i]);
        }  

    return 0;
}