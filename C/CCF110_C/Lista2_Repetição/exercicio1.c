#include <stdio.h>
#include <stdlib.h>

float n;
int quantidade = 3;

int main(){
    for (int i = 0; i<quantidade; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        printf("%f\n", n*n*n);
    }


    return 0;
}