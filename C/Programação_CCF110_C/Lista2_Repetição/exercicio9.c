#include <stdio.h>
#include <stdlib.h>

int i,m,j,n;
n=10;
int main() {
    printf("Digite os valores de j e m: ");
    scanf("%d %d", &j, &m);
    printf("os seguintes numeros são congruentes a %d modulo %d:",j,m);
    for (i=0; n>0; i++)
    {
        if(i%m==j%m){
            printf("%d ",i);
            n--;
        }
       
    }
    
  return 0;
}
