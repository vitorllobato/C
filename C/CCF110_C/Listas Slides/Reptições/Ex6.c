#include <stdio.h>
#include <stdlib.h>

int i=0,
n,
par=0,
count=3,
impar=0;

int main(){
    for (i; i < count; i++){
        printf("Escreva um número:");
        scanf("%d",&n);
        if (n%2==0){
            par++;
            }
        else{
            impar++;
            }
        }
        printf("Existem %d numeros impares e %d numeros pares dentre os digitados.",impar,par);   
    return 0;
}