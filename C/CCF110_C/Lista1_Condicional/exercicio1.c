#include <stdio.h>
#include <stdlib.h>

float salario_min, salario_pessoal, qntd_salarios;

int main(){

    printf("Qual o valor do salário minimo? \n");
    scanf("%f", &salario_min);
    printf("Quanto você ganha? \n");
    scanf("%f", &salario_pessoal);
    qntd_salarios = salario_pessoal / salario_min;
    printf("Você ganha %.2f salários mínimos. \n ", qntd_salarios);

    return 0;

}