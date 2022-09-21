#include <stdio.h>
#include <stdlib.h>

int main(){
    int L,M,N,C;

    printf("Escreva 3 numeros: \n");
    scanf("%d %d %d", &L,&M,&N);

    if (L>N){
        
        C=L;
        L=N;
        N=C;
    }
    if (L>M){
        
        C=L;
        L=M;
        M=C;
    }
    if (M>N){

        C=M;
        M=N;
        N=C;
    }
    printf("%d %d %d /n",L,M,N);


    return 0;
}