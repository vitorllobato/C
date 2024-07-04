#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[5][5],cont=0,media=0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%f", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 5; j++){
            if (i==j){
                cont = cont+1;
                media = media + mat1[i][j];
                }
            }
        }
    media = media/cont;
    printf("%d",media);

    printf("\n");


    return 0;
} 