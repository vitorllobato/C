#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contador = 0;int acessoAoVetor = 0;
void ordenaVetor(int arr[], int n) { //Só marca o tempo depois de 1000, 50000 fez em 3.53 segundos.
    int indice = 0;
    int comeco = 0;
    int final = n - 1;
    int maior, menor;
    while(comeco<=final){
        indice = comeco;
        maior = arr[final];
        menor = arr[comeco];
        for(indice; indice <=final ; indice++){
            if (maior<arr[indice]){
                maior = arr[indice];
                arr[indice] = arr[final];
                arr[final] = maior;
            }
            if (menor>arr[indice]){
                menor = arr[indice];
                arr[indice] = arr[comeco];
                arr[comeco] = menor;
            }
            contador++;
        }
        /*for(int d = 0; d < n; d++) {
            printf("%d ", arr[d]);
        }
        printf("\n"); //Só vale a pena exibir se o vetor for pequeno.Em vetores grandes gera um aumento muito considerável de tempo*/
        acessoAoVetor++;
        comeco++;
        final--;
    }
}


int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}
void bogosort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        for (int i = 0; i < n; i++) {
            int j = rand() % n;
            int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
    }
} //10 levou 0.04 segundos, 12 levou 1.89, 20 eu nem esperei.
    
   
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
    clock_t inicio = clock();
    ordenaVetor(vetor, N);  // Chama a função para ordenar o vetor
    printf("Vetor ordenado: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);    
    }
    clock_t fim = clock();
    double tempo_segundos = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\n Tempo total de execução %.2f ", tempo_segundos );
    printf("\n%d Comparações feitas e %d Acessos ao vetor", contador, acessoAoVetor);
    return 0;
}

