#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float mat1[5][5],cont=0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%f", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 5; j++){
            if (i==j){
                printf("%f ",mat1[i][j]);
                }
            }
        }
    

    printf("\n");


    return 0;
} 