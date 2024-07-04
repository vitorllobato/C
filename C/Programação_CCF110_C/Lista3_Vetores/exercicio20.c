#include <stdio.h>
#include <stdlib.h>

int main(){
    int P=3,C=5,CCF[P],MAF[C],k=0,simultaneos[P];
    
    for (int i = 0; i < P-1; i++){
        CCF[i]=rand()%9998;
        printf("%d ",CCF[i]);
        }
        CCF[P-1]=9999;
        MAF[C-1]=9999;
        printf("\n\n\n ");
   
    for (int i = 0; i < C-1; i++){
        MAF[i]=rand()%9998;
        printf("%d ",MAF[i]);
        }
        printf("\n\n\n ");
    
    for (int i = 0; i < P; i++){
        for (int j = 0; j < C; j++){
            if (MAF[j]==CCF[i]){
                simultaneos[k]=CCF[i];
                k++;
            }
        }
    }
   
    printf("Esses alunos cursam ambas disciplinas: \n");
    for (int i = 0; i < P; i++){
        if(simultaneos[i]!=0){}
            printf( "%d ",simultaneos[i]);
            }
    

    return 0;
}