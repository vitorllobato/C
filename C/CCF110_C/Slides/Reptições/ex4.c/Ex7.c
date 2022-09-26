#include <stdio.h>
#include <stdlib.h>

int media=0, count, i, n;

int main(){
    printf("Quer fazer a media de quantos numeros?");
    scanf("%d",&count);
    for (i = 0; i < count; i++){
        printf("Escreva um numero:");
        scanf("%d",&n);
        media=media+n;
        }
    printf("A media é : %d.\n",media/count);
    
    return 0;
}