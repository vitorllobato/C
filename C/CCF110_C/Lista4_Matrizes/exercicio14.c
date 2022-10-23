#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[5][3],mat2[5][3],cont=0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 3; j++){
            mat2[i][j]=mat1[i][j];
            switch (j)
            {
                case 0:
                printf("%d",(mat2[i][j]*10)/2);
                break;
                case 1:
                printf("%d",(mat2[i][j]*15)/2);
                break;
                case 2:
                printf("%d",(mat2[i][j]*30)/2);
                break;
            default:
                break;
            }
            }
        }
    

    printf("\n");


    return 0;
} 