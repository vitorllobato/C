#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int idade (int a, int b, int c){
    int dias;
    dias = (a*365)+(b*30)+c;
    return dias;
    }

int main(){
    int anos,meses,dias;
    printf("Escreva a idade em anos, meses e dias.");
    scanf("%d %d %d",&anos,&meses,&dias);
    printf("%d",idade(anos,meses,dias));
    return 0;
    }