#include <stdio.h>
#include <stdlib.h>

    float n1,n2,n3,soma;

int main(){

    printf("Digite 3 números reais: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    soma = n2+n3;
    if(n1>soma){
        printf("O primeiro número é maior que a soma dos outros dois. \n");}
    else if(n1==soma){
        printf("O primeiro número é igual a soma dos outros dois. \n");}
    else{ 
        printf("O primeiro número é menor que a soma dos outros dois. \n");}

    return 0;
}