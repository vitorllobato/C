#include <stdio.h>
#include <stdlib.h>

int main(){
    float custo_fabrica, custo_consumidor, impostos, distribuidor;

    printf("Digite o custo de fábrica do carro: \n");
    scanf("%f", &custo_fabrica);
    impostos = custo_fabrica * 0.45;
    distribuidor = custo_fabrica * 0.28;
    custo_consumidor = custo_fabrica + impostos + distribuidor;
    printf("O custo ao consumidor é: %.2f reais\n", custo_consumidor);


    return 0;
}