#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float mat1[5][10], vet[]={0,0,0,0,0};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            scanf("%f", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            if(mat1[i][j] > vet[i]){
                vet[i] = mat1[i][j];
                }
            }
        }
    for (int i = 0; i < 5; i++){
        printf("%f ", vet[i]);
        }
    
    printf("\n");


    return 0;
} 