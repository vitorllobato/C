#include "RedeSocial.h"

void main(){
    printf("Bem vindo ao twitter da shopee!\n
    Ainda estamos em fase Beta, por favor, não nos julgue.\n
    Caso queira ver nossos casos de teste escreva :\n
    'teste1' para ver o primeiro caso.\n
    'teste2' para ver o segundo caso.\n
    'teste3' para ver o terceiro caso.\n
    As saídas esperadas estão nos arquivos da nossa rede social caso queira conferir.\n");
    char comando[10];
    scanf("%s", comando);
    if(strcmp(comando, "teste1") == 0){
        teste1();
}