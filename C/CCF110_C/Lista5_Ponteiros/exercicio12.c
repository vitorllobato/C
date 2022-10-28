#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j,tam=100, vet[tam][tam], *pi;
    for (i = 0; i < 10000; i++)   {
        pi = &vet[0][0];          
        *(pi+i) = i+1;
        printf (" %d   %d \n", *(pi+i), pi);
            
        }
    

    return 0;
}