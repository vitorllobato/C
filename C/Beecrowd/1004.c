#include <stdio.h>
#include <stdlib.h>

double A, B, MED ; // Define A,B e MED como variáveis inteiras.

int main(){
    if (A < 10.1 && B < 10.1){    
        scanf(" %lf %lf", &A, &B); // Lê A e B.
        A = A * 3.5;
        B = B * 7.5;
        MED = (A + B) / 11;
        printf ("MEDIA = %.5lf\n" , MED);
    }
    return 0;
}