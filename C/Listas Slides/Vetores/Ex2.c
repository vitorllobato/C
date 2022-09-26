#include <stdio.h>
#include <stdlib.h>

int V[10]; //Vetor de 10 posições

int main(){
    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &V[i]);
        if(V[i] ==5){
            printf("O valor 5 foi digitado na posição %d.\n", i);         
            }
        }
    return 0;
}