#include <stdio.h>
#include <stdlib.h>

int opcao, quantidade;;
float sal,doce, total;

int main(){

    sal=0.1;
    doce=.15;
    printf("Qual pão você está comprando? \n 1 - Pão de sal. \n 2 - Pão de doce. \n" );
    scanf("%d", &opcao);
    printf("Quantos pães você está comprando? \n");
    scanf("%d", &quantidade);
    if(opcao==1){
        total = sal*quantidade;
        printf("O valor total é: %.2f \n", total);
    }
    else if(opcao==2){
        total = doce*quantidade;
        printf("O valor total é: %.2f \n", total);
    }
    else{
        printf("Opção inválida! \n");
    }

    return 0;
}