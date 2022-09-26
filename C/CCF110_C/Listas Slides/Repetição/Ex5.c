#include <stdio.h>
#include <stdlib.h>

int media=0,count=50,i,n;

int main(){
    for (i = 0; i < count; i++){
        printf("Escreva um numero:");
        scanf("%d",&n);
        media=media+n;
        }
    printf("A media é : %d.\n",media/count);
    
    return 0;
}