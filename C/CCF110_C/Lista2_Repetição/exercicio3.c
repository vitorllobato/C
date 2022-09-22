#include <stdio.h>
#include <stdlib.h>

int quantidade, i, numero, maior;

int main(){
    printf("Digite a quantidade de numeros que deseja imprimir: ");
    scanf("%d", &quantidade);
    
    if (quantidade!=0)
    {    
        printf("Digite um número: ");
        scanf("%d",&numero);
        maior=numero;
        for (i = 1; i < quantidade; i++)
        {
            printf("Digite um número: ");
            scanf("%d",&numero);
            if (numero>maior)
            {
                maior=numero;
            }
            
        }
        printf("O maior numero digitado foi %i.\n",maior);
        
        


    return 0;
}}