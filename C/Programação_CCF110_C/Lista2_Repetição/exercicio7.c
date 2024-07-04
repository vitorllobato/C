#include <stdio.h>
#include <stdlib.h>

int media,i,n;

int main(){
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&i);
    int quantidade=i; media=0;
    
    for (i; i > 0 ; i--){
        printf("Digite um numero: ");
        scanf("%d",&n);
        media=n+media;
    }
    media=media/quantidade;
    printf("A media é %d.\n",media);
    


    return 0;
}