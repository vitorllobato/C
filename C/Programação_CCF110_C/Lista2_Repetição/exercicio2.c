#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(i=1;i<n;i++){
        printf("%d, ", i);
    }
    printf("%d.\n", i);


    return 0;
}