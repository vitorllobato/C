#include <stdio.h>
#include <stdlib.h>

int maior,leitura,menor;

int main(){
    
        printf ("Digite um numero:");
        scanf  ("%d",&leitura);
        maior = leitura;
        menor = leitura;
            
    for (int i = 1; i < 1000; i++) {    
        printf ("Digite um numero:");
        scanf  ("%d",&leitura);
        if (maior<leitura){
            maior=leitura;
        }else if (menor>leitura){
            menor=leitura;
            
        }   
        }
    printf("O maior numero e %d.\n", maior);
    printf("O menor numero e %d.\n", menor);
    
    return 0;
}