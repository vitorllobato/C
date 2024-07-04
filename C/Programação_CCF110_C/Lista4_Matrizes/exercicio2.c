#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[3][5],cont=0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 5; j++){
            if (mat1[i][j]>=15 || mat1[i][j]<=20 ){
                cont=cont+1;
                }
            }
        }
    printf("%d",cont);
    

    printf("\n");


    return 0;
} 