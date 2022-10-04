#include <stdio.h>
#include <stdlib.h>

int main(){
                    int n=30;
                int vetor[n],vetor2[n],i,A,par=0,impar=0;
    printf("Digite o multiplicador: ");
    scanf("%d",&A);
    for (i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        getchar();
        vetor2[i]=vetor[i]*A;
        }
    printf("[");
    for (i = 0; i < n; i++){
        printf(" %d ",vetor2[i]);
        if (vetor2[i]%2==0){
            par++;
            }
        else{
            impar++;
            }
    }
    printf("] \n %d produtos são pares e %d impares.\n",par,impar);
    
    return 0;
}