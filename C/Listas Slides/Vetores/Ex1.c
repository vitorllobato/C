#include <stdio.h>
#include <stdlib.h>

int soma=0,A[] = {15, 20, 3, 1, 26, 2};

int main(){
    for (int i = 0; i < 6; i++){
        soma = soma+A[i];
        }
    printf("%d ", soma);

    return 0;
}