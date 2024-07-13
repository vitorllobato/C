#include "hash.h"

void recebeAviao(FILE* arquivo, tripulante* lista, tripulante* aviao){
    if(arquivo == NULL){
        printf("Erro ao abrir arquivof.\n");
        exit(1);
        }
    for (int i = 0; i < 7; i++){
        fscanf(arquivo, "%s %s", lista[i].nome, lista[i].id);
        aviao[i].nome[0] = '\0';
        }
    }

void embarque(tripulante* lista, tripulante* aviao) {
    for (int i = 0; i < 7; i++) {
        int ascii = 0;
        // Calcular a soma dos valores ASCII dos caracteres do nome
        for (int k = 0; lista[i].nome[k] != '\0'; k++) {
            ascii += lista[i].nome[k];
        }
        int hash = ascii % 7;
        // Probing linear para lidar com colisões
        while (aviao[hash].nome[0] != '\0') {
            hash = (hash + 1) % 7;
        }

        strcpy(aviao[hash].nome, lista[i].nome);
        strcpy(aviao[hash].id, lista[i].id);
    }
    for(int i = 0; i < 7; i++){
        printf("Nome: %s\n", aviao[i].nome);
        printf("ID: %s\n", aviao[i].id);
        printf("Poltrona: %d\n", i);
        printf("\n");
        }
}

void consultaPoltrona(char* nome, tripulante* aviao){
    int ascii = 0;
    while (nome != '\0'){
        ascii += nome;
        }
    int hash = ascii % 7;
    printf("Nome: %s\n", aviao[hash].nome);
    printf("ID: %s\n", aviao[hash].id);
    printf("Poltrona: %d\n", hash);
}

int main(){
    char nome[50];
    int opcao;
    FILE* arquivo = fopen("tripulacao.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
        }
    recebeAviao(arquivo,lista,aviao);
    //embarque(lista, aviao);
    /*printf("Lista de tripulantes:\n");*/
    printf("Gostaria de consultar algum triplante?\n 1-Sim\n 2-Não\n");
    /*scanf("%d", &opcao);
    printf("Digite o nome do tripulante: ");
    scanf("%s", nome);
    if(opcao == 1){
        consultaPoltrona(&nome, aviao);
        }*/
}