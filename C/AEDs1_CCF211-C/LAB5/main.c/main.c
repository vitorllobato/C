
#include <time.h>
#include <stdio.h>
#include <stdlib.h>



int fibonacci_iterarivo(int n){
    int anterior = 0;
    int proximo = 1;
    int aux;
    for(int i=2;i<=n;i++){
        aux = anterior + proximo;
        anterior = proximo;
        proximo = aux;
        printf("%d   %d ", anterior,proximo);
    }
    return proximo;
}

/*int fibonacci_recursivo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;


}*/

int main() {
    int n = 50;
    // Medição do tempo de execução da função recursiva
    clock_t inicio = clock();
   // int resultado_recursivo = fibonacci_recursivo(n);
    clock_t fim = clock();
    double tempo_recursivo = (double)(fim - inicio) / CLOCKS_PER_SEC;// Medição do tempo de execução da função iterativa   
    inicio = clock();
    int resultado_iterativo = fibonacci_iterativo(n);
    fim = clock();double tempo_iterativo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    return 0;
    }