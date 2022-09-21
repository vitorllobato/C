#include <stdio.h>
#include <stdlib.h>

double raio, area; // Define raio e area como variaveis do tipo double.

int main(){

    scanf ("%lf", &raio);   // Lê a variável raio.
    area = 3.14159 *(raio*raio); // Calcula a área.
    printf("A=%.4lf\n" , area); // Imprime a área.

    return 0; 
}