#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float notas(int a, int b, int c, char calculo){
    float notafinal = 0;
    if (calculo=='A'||calculo=='a'){
        notafinal = a+b+c;
        notafinal = notafinal / 3;
        return notafinal;
        }
    else if (calculo=='P'||calculo=='p'){
        notafinal=((a*5)+(b*3)+(c*2))/10;
        return notafinal;
        }
    }

int main(){
    int nota1,nota2,nota3;
    char media;
    printf("Escreva as 3 notas e o tipo de media.");
    scanf("%d %d %d %c",&nota1,&nota2,&nota3,&media);
    printf("%f",notas(nota1,nota2,nota3,media));
    return 0;
    }