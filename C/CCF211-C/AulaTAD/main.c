#include "CARTA.c"

int main(){
    gera_carta();
    printf("Pressione uma tecla para receber a segunda carta: ");
    getchar();
    gera_carta();
    return 0;
}
