#include <stdio.h>
#include <stdlib.h>

#define a 5
int vetor[a],vetor2[a],vetorresultante[a];

int main(){
    for (int i = 0; i < a; i++){ 
        printf("Digite o 1º número da soma: ");
        scanf("%d",&vetor[i]);
        printf("Digite o 2º número da soma: ");
        scanf("%d",&vetor2[i]);
        vetorresultante[i]=vetor[i]+vetor2[i];
        }
        
    printf("As somas foram respectivamente:");
    for (int i = 0; i < a; i++){
        printf("%d ",vetorresultante[i]);
        }
    
    


    return 0;
}