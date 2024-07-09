#include "hash.h"

void recebeAviao(FILE* arquivo, REDE* rede){
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }
    
    int n_usuarios;
    fscanf(arquivo, "%d", &n_usuarios);


void embarque()