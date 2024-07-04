#include "base.h"

void main(){
    int N, matriz[N][N];
    printf("Tamanho da matriz em NxN:\n");
    scanf("%d", N);
    printf("Matriz linha por linha:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; i++){
            scanf("%d",matriz[i][j]);
        }
    }
    printf("Se 1 a matriz é superior, se 0 não é.\n %d",matrizes(matriz[N][N], N));
    
}