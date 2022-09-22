#include <stdio.h>
#include <stdlib.h>

unsigned int n,i,fat;

int main(){
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%u",&n);
    fat = n;
    for (n; n > 1; i--)
    {
        fat=fat*n-1;
    }
    printf("%u",fat);


    return 0;
}