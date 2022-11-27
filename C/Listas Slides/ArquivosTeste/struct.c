#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
typedef struct dados{
    int idade;
    char nome[20],sobrenome[20];
    };
struct dados cliente;
scanf("%s %s",&cliente.nome, &cliente.sobrenome);
scanf("%d",&cliente.idade);
printf("O cliente %s %s tem %d anos.",cliente.nome,cliente.sobrenome,cliente.idade);
    return 0;
}