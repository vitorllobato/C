#include <stdio.h>
#include <stdlib.h>

int n,i,soma;

int main(){
    for (i = 0; i < 100; i++) {
        scanf("%d",&n);
        if (n%2==0){
            soma = soma+n;
        }
        }
    printf("Soma = %d\n",soma);
    
    return 0;
}