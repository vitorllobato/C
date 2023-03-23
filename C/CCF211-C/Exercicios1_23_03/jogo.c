#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int funcrand(){
    int n;
    srand(time(NULL));
    n = rand() % 100+1;
    return n;
    }

int main(){
    int x,quant;
    scanf("%d",&quant);
    for(int i=0;i<quant;i++){
        x=funcrand();
        getchar();
        printf("%d\n",x);
        
        }

    return 0;
    }