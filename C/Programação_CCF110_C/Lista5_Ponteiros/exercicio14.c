
#include <stdio.h>
#include <stdlib.h>

int main(){
    short int v[5] = {2,5,1,4,0},*psi;
    int v1[5] = {2,5,1,4,0},*pi;
    char c[5] = {'a','b','m','4','-'},*pc;
    float f[5] = {2.66, 0.125, 1.0, 4.99, 2.009},*pf;
    double d[5] = {2.66, 0.125, 1.0, 4.99, 2.009},*pd;
    psi = &v[0];    pi = &v1[0];    pc = &c[0]; pf = &f[0]; pd = &d[0];
    int difsi, difi, diff, difc, difd;

    difsi = psi++;
    difc = pc++;
    difi = pi++;
    difd = pd++;
    diff = pf++;

    difsi = difsi - (int *) psi;
    difc = difc - pc;
    difi = difi - pi;
    difd = difd - pd;
    diff = diff - pf;
        
    printf("Os tamanhos são %d short int, %d int, %d char %d float e %d double", difsi, difi, difc, diff, difd);
    


    return 0;
}