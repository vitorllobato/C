#include <stdio.h>
#include <stdlib.h>
#include <time.h>
voidordenaVetor(int arr[], int n) {
    int i=0;
    int j=0;
    int ordem = 0;
    int maior, menor,auxmaior,auxmenor;
    while (ordem == 0){
        maior = menor = arr[i];
        for(i;i<n;i++){
            if (maior<arr[i]){
                maior = arr[i];
                auxmaior = i;
                for (n; n > i; i++){
                
                }
                            
            }
            if (menor>arr[i]){
                menor = arr[i];
                auxmenor = i;
            }
        }
    
    arr[j]=menor;
    arr[n-1]=maior;
        
        j=j+1;
        i=j;
        n--;
    }
            
    }
int main() {
    int N;  // Tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    int vetor[N];
    srand(time(0));  // Semente para geração de números aleatórios
    printf("Vetor original: ");
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % N*10;  // Gera números aleatórios entre 0 e N*10
        printf("%d ", vetor[i]);    
    }
    printf("\n");    
    ordenaVetor(vetor, N);  // Chama a função para ordenar o vetor
    printf("Vetor ordenado: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);    
    }
    return 0;
}