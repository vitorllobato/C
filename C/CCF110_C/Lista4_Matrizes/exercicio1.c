#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[5][5];double mat2[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 5; j++){
            mat2[i][j] = mat1[i][j] * mat1[i][j] * mat1[i][j];
            printf("%.0lf ",mat2[i][j]);
            }
        }
    printf("\n");


    return 0;
}