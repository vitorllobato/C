#include <stdio.h>
#include <stdlib.h>

float n,E;

int main(){
    printf("Digite um valor:");
    scanf("%f",&n);
    E=0;
    int i=1;
    while (i<n){
        E=E+(1/n);
        i++;
    }
    printf("E=%f",E);


    return 0;
}