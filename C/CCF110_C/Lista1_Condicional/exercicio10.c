#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, reajuste, novo_salario;
    reajuste = 0.15;

    printf("Digite o salario: \n");
    scanf("%f", &salario);
    novo_salario = salario + (salario * reajuste);
    if (salario <= 500){
        printf("O novo salario é: %.2f \n", novo_salario);
    }
    else{
        printf("O salario não sofreu reajuste \n");
    }

    return 0;
}