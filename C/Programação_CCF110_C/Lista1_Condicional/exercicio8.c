#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    printf("Digite dois números: \n");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("%d %d", a, b);
    return 0;
}