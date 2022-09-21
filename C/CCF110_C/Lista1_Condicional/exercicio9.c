#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, prestacao, tempo, emprestimo;

    printf ("Digite o valor do salario: \n");
    scanf ("%f", &salario);
    printf ("Digite o valor do emprestimo: \n");
    scanf ("%f", &emprestimo);
    printf("Em quantos meses deseja pagar o emprestimo? \n");
    scanf("%f", &tempo);
    prestacao = emprestimo / tempo;

    if (prestacao > (salario * 0.3)){
        printf("Emprestimo negado, pois a prestação é maior que 30%% do salario \n");
    }
    else{
        printf("Emprestimo aprovado \n");
    }

    return 0;
}