#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=3, *pi=&i;
    float f=1.5, *pf=&f;
    char ch = 'V', *pc=&ch;

    printf("%d, %d, %d . \n", i, pi, sizeof(int) );
    printf("%f, %d, %ld . \n", f, pf, sizeof(float) );
    printf("%c, %d, %d . \n", ch, pc, sizeof(char) );

    return 0;
}