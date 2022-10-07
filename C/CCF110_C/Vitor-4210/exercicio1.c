#include <stdio.h>
#include <stdlib.h>
    
int main(){
            int V[10]; //Vetor de 10 posições
    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &V[i]);
        }
    printf("O valor 5 foi digitado nas posicoes:");
    for(int i = 0; i < 10; i++){
        if(V[i] ==5){
            printf("%d, ", i);
            }
        }
        
    return 0;
}