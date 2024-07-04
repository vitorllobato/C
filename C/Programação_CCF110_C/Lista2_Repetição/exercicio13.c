#include <stdio.h>
#include <stdlib.h>

int n,E;

int main(){
    printf("Digite um valor:");
    scanf("%d",&n);
    int i=0;
    while (i<=n){
        E=i*n;
        printf("%d*%d = %d\n",i,n,E);
        i++;

    }


    return 0;
}