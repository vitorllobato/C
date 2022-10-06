#include <stdio.h>
#include <stdlib.h>


int main(){
    int cem=100,vendas[cem],i;
    float preços[cem];
    int dia=1,faturamento[cem],montante=0;
    for (i = 0; i < cem; i++){
        vendas[i] = 0;
        preços[i] = rand()%150;
        }
    do{
        printf("Qual produto foi vendido: ");
        scanf("%d",&i);
        vendas[i]++;  
        printf("Que dia foi feita a venda? ");
        scanf("%d",&dia);
        }while (dia<31);
    printf("O faturamento do mês foi de: ");
    for (i = 0; i < cem; i++)
    {
        faturamento[i]=preços[i]*vendas[i];
        montante = montante+faturamento[i];
        }
    printf("%d ",montante);
    
    return 0;
}