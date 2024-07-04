#include <stdio.h>
#include <stdlib.h>

int main(){
    int vel_maxima, vel_carro, multa, diferenca;

    printf("Digite a velocidade máxima da via: \n");
    scanf("%d", &vel_maxima);
    printf("Digite a velocidade do carro: \n");
    scanf("%d", &vel_carro);
    diferenca = vel_carro - vel_maxima;
    if(diferenca>0 || diferenca<=10){
        multa = 50;
        printf("O valor da multa é: %d reais\n", multa);
    }
    else if(diferenca>10 || diferenca<=30){
        multa = 100;
        printf("O valor da multa é: %d reais\n", multa);
    }
    else if(diferenca>30){
        multa = 200;
        printf("O valor da multa é: %d reais\n", multa);
    }
    else{
        printf("Velocidade dentro do limite! \n");
    }


    return 0;
}