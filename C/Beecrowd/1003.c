#include <stdio.h>
#include <stdlib.h>

int A, B, SOMA; // Define A,B e SOMA como variáveis inteiras.

int main(){

    scanf("%d %d", &A, &B); // Lê A e B.
    SOMA = A + B; // Soma A e B.
    printf("SOMA = %d\n", SOMA); // Imprime SOMA.
    
    return 0;
}