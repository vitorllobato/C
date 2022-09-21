#include <stdio.h>
#include <stdlib.h>

int A,B,X; // Define A,B e X como variáveis inteiras.

int main(){

    scanf ("%d %d", &A, &B);   // Lê A e B.
    X = A + B;  // X recebe soma de A + B.
    printf("X = %d\n", X);  // Imprime X.

    return 0;
}