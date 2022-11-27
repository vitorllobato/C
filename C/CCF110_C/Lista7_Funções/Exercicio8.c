#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float peso (float a,char s){
    int peso_ideal;
    if (s == 'h'||s == 'H'){
        peso_ideal = (a*72.7);
        peso_ideal = peso_ideal-58.0;
        return peso_ideal;
        }
    else if (s == 'm'||s == 'M'){
        peso_ideal = a*62.1;
        peso_ideal = peso_ideal-44.7;
        return peso_ideal;
        }
    }

int main(){
    float altura,sexo;
    printf("Escreva a altura em metros e apenas a primeira letra do sexo.\n");
    scanf("%f  %c",&altura, &sexo);
    printf("%f", peso(altura,sexo));
    return 0;
    }