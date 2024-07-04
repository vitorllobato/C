#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=(rand() % 800), *pi=&i;
    float real=(rand() % 150), *preal=&real;

    printf("%d, %d, %u, %f, %f, %u", i, *pi, pi, real, *preal, preal);

    return 0;
}