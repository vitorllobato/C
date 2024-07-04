#include <stdio.h>
#include <stdlib.h>

float n,E;

int main(){
    printf("Digite um valor:");
    scanf("%f",&n);
    E=0;
    for(int i=1;i<n;i++){
        E=E+(1/n);
    }
    printf("E=%f",E);


    return 0;
}