#include <stdio.h>
#include <stdlib.h>

int n, sequencia,soma;

int main(){
    printf ("Digite a quantidade de numeros desejados:");
    scanf("%d",&n);
    soma = 0;
    for(int i=0;i<n;i++){
        printf ("Digite um numero:");
        scanf("%d",&sequencia);
        soma = soma+sequencia;
    }
    printf("A soma de todos os numeros digitados e %d.\n",soma);

    return 0;
}