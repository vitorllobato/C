#include "RedeSocial.c"

int main(){
    printf("Bem vindo ao twitter da shopee!\nAinda estamos em fase Beta, por favor, não nos julgue.\nCaso queira ver nossos casos de teste escreva :\n'teste1' para ver o primeiro caso.\n'teste2' para ver o segundo caso.\n'teste3' para ver o terceiro caso.\nAs saídas esperadas estão nos arquivos da nossa rede social caso queira conferir.\n");
    char comando[10];
    fgets(comando, 10, stdin);
    printf("%s", comando);
    teste(comando);
    printf("Obrigado por usar a nossa rede social!\n");
    return 0;
}