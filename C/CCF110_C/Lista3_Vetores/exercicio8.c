#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,vetorA[n],vetorB[n],vetorC[n],vetorD[n];
    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Digite o valor do vetorA[%d]: ",i);
        scanf("%d",&vetorA[i]);
        }
    for(int i=0;i<n;i++){
        printf("Digite o valor do vetorB[%d]: ",i);
        scanf("%d",&vetorB[i]);
        }
    for (int i = 0; i < n; i++){
        if (vetorA[i]>vetorB[i]){
            vetorC[i]=vetorA[i];
        }
        else{
            vetorC[i]=vetorB[i];
            }
        }
        printf("\n[");
    for (int i = 0; i < n; i++){
            printf("%d ",vetorC[i]);
            }
        printf("]\n");
    printf("\n[");
    for (int i = 0; i < n; i++){
        vetorD[i]=(vetorA[i]+vetorB[i])/2;
        printf("%d ",vetorD[i]);
        }
        printf("]\n");
     
    return 0;
}