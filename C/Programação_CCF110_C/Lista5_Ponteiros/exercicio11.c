#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vet[10], *pi[10];
    for (i = 0; i < 10; i++)
    {
        vet[i] = rand()%1500;
        pi[i] = &vet[i];
        printf (" %d   %d \n", *pi[i], pi[i]);
        }
    

    return 0;
}