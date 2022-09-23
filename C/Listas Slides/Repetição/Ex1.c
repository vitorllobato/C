#include <stdio.h>
#include <stdlib.h>

int maior,quantidade,leitura;

int main(){
    printf("Digite a quantidade de numeros:");
    scanf("%d",&quantidade);
    if (quantidade>0)   {
        printf ("Digite um numero:");
        scanf  ("%d",&leitura);
        maior = leitura;
        }    
    for (int i = 0; i < quantidade-1; i++) {    
        printf ("Digite um numero:");
        scanf  ("%d",&leitura);
        if (maior<leitura){
            maior=leitura;
            }   
        }
    printf("O maior numero e %d.", maior);
    
    return 0;
}