#include <stdio.h>
#include <stdlib.h>

#define n 20
int vetor[n],vetPar[n],qtdpar=0,qtdimpar=0,somaImpar=0;

int main(){
    for (int i = 0; i < n; i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&vetor[i]);

        if (vetor[i]%2==0)
            {
            qtdpar++;
            vetPar[i]=vetor[i];
            }
        else{
            qtdimpar++;
            somaImpar=vetor[i]+somaImpar;
            printf("soma %d",somaImpar);
            }
        }
        printf("%d números pares e %d números ímpares. A soma dos ímpares é %d e os numeros pares escritos foram:",qtdpar,qtdimpar,somaImpar);
    for (int i = 0; i < n; i++){
        printf("%d ",vetPar[i]);
        }       
    return 0;

}