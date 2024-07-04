#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, *pi=NULL;
    float vet[10];
    pi=&vet[0];

    for (i = 0; i < 10; i++){

        vet[i] = rand()%1500;
        printf (" %d\n", pi+i);
        
        }
    

    return 0;
}