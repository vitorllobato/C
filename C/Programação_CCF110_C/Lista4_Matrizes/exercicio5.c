#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[3][5], mat2[3][5], matrizS[3][5], matrizD[3][5];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &mat1[i][j]);
            }
        }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &mat2[i][j]);
            }
        }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            matrizS[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",matrizS[i][j]);
            }
        }
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            matrizD[i][j]=mat1[i][j]-mat2[i][j];
            printf("%d ",matrizD[i][j]);
            }
        }
        

    printf("\n");


    return 0;
} 