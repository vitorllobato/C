#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,resto,resultado;

    printf("Digite dois números: \n");
    scanf("%d %d", &a, &b);
    resto = a % b;
    resultado = a / b;
    if(resto == 0){
        printf("O número %d é divisível por %d e o resultado e: %d \n", a, b, resultado);
    }
    else{
        printf("O número %d não é divisível por %d\n", a, b);
    }

    return 0;
}