#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
            int i,comp=10;
            double vet[comp],n;
   
    for (i = 0; i < comp; i++){
        printf("Escreva um numero: ");
        scanf("%lf",&n);
        double A=sqrt(n);
        vet[i]=A;
        }   
    printf("[");
    for (i = 0; i < comp; i++){ 
        printf("%g ",vet[i]);
        }
    printf("]");

    return 0;
}