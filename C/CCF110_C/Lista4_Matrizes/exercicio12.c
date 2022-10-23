#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[10][10],mat2[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%f", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 10; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            mat2[i][j]=mat1[i][j];
            if (i==2){
                mat2[8][j]=mat1[2][j];
                mat2[2][j]=mat1[8][j];
                }
            else if (i==4){
                mat2[10][j]=mat1[4][j];
                mat2[4][j]=mat1[10][j];
                }     
            else if (i==j){
                    mat2[i][j]=mat1[i][9-i];
                }
            }
        }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d",mat2[i][j]);
            }
        }
    
    printf("\n");


    return 0;
} 