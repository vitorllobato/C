#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[10][10],cont=0,media=0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%f", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 10; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            if (i==j){
                printf("%d",mat1[i-1][j]);     
                }
            }
        }

    printf("\n");


    return 0;
} 