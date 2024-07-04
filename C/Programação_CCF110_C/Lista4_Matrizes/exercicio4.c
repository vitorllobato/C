#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int mat1[6][3], pos_menor[2], pos_maior[2], menor, maior, cont=0;
    menor=mat1[0][0];
    maior=mat1[0][0];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &mat1[i][j]);
            }
        }
    
    for (int i = 0; i < 6; i++){
        printf("\n");
        for (int j = 0; j < 3; j++){
            if (mat1[i][j] < menor){
                menor = mat1[i][j];
                pos_menor[0] = i; pos_menor[1] = j;
                }
            else if (mat1[i][j] > maior){
                maior = mat1[i][j];
                pos_maior[0] = i; pos_maior[1] = j;
                }                
            }
        }
        
    printf("O maior numero e sua posicao e :%d, %d %d.\n O menor numero e sua posicao e: %d, %d e %d"
        ,maior,pos_maior[0],pos_maior[1],menor,pos_menor[0],pos_menor[1]);
    

    printf("\n");


    return 0;
} 