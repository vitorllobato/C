#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
            int i,comp=10;
            double vet[comp],n;
   
    for (i = 0; i < comp; i++){
        printf("Escreva um numero: ");
        scanf("%lf",&n);
        vet[i]=sqrt(n);
        if(n<0){
            vet[i]=-1;
        }
        }   
    printf("[");
    for (i = 0; i < comp; i++){ 
        printf("%g ",vet[i]);
        }
    printf("] \n");

    return 0;
}