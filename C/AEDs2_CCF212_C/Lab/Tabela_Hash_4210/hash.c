#include "hash.h"

void recebeAviao(FILE* arquivo, tripulante* lista, tripulante* aviao){//inicializa tabela
    if(arquivo == NULL){
        printf("Erro ao abrir arquivof.\n");
        exit(1);
        }
    for (int i = 0; i < 7; i++){
        fscanf(arquivo, "%s %s\n", lista[i].nome, lista[i].id);
        strcpy(aviao[i].nome, "vazio");
        strcpy(aviao[i].id, "vazio");
        printf("%s %s\n", lista[i].nome, lista[i].id);
        }
    }
int codHash(tripulante* lista, int i){
    int ascii = 0;
    char* nome;
    nome = lista[i].nome;
    for (int j = 0; j < strlen(nome); j++){
        ascii += nome[j];
    }
    return ascii % 7;
}

void embarque(tripulante* lista, tripulante* aviao) {
    int hash;
    for (int i = 0; i < 7; i++){
        hash = codHash(lista, i);
        while(strcmp(aviao[hash].nome, "vazio") != 0){
            hash = (hash + 1) % 7;
            }
        strcpy(aviao[hash].nome, lista[i].nome);
        printf("%d\n", hash);
        printf("%s\n", aviao[hash].nome);
        }

}
    

void consultaPoltrona(char* nome, tripulante* aviao){
    int hash;
    for (int i = 0; i < 7; i++){
        if(strcmp(aviao[i].nome, nome) == 0){
            hash = i;
            break;
            }
        }
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
    embarque(lista, aviao);
    
    printf("Gostaria de consultar algum triplante?\n 1-Sim\n 2-Não\n");
    scanf("%d", &opcao);
    printf("Digite o nome do tripulante: ");
    scanf("%s", nome);
    if(opcao == 1){
        consultaPoltrona(&nome, aviao);
        }
}