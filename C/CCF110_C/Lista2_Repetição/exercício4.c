#include <stdio.h>
#include <stdlib.h>

int i, n, impares, pares;

int main(){
    for(i=0; i<200; i++){
        printf("Digite um número:");
        scanf("%d",&n);
        printf("\n");
        if (n%2==0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("%d são pares e %d são impares.\n",pares,impares);


    return 0;
}