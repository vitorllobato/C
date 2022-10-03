#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,vetorA[n],vetorB[n],vetorC[n],vetorD[n];
    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Digite o valor do vetorA[%d]: ",i);
        scanf("%d",&vetorA[i]);
        printf("Digite o valor do vetorB[%d]: ",i);
        scanf("%d",&vetorB[i]);
        vetorC[i]=vetorA[i]+vetorB[i];
        vetorD[i]=vetorA[i]*vetorB[i];
    }

    return 0;
}