#include <stdio.h>
#include <stdlib.h>

float investimento, rendimento, total;

int main(){

    printf("Digite o valor do investimento: \n");
    scanf("%f", &investimento);
    printf("Quantos por cento vai render ao mês: \n");
    scanf("%f", &rendimento);
    rendimento = rendimento/100;
    total = investimento + (investimento * rendimento*12);
    printf("No fim do ano o montante é igual a: %.2f \n", total);
    return 0;
}