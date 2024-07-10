#include "hash.h"

void recebeAviao(FILE* arquivo, tripulante* lista){
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
        }
    for (int i = 0; i < 7; i++){
        fscanf(arquivo, "%s %s", lista[i].nome, lista[i].id);
        }
    }

void nomeParaAscii(char *nome, int* asciiValues) {
    int i;
    for (i = 0; nome[i] != '\0'; i++) {
        asciiValues[i] = nome[i]; 
    }
    asciiValues[i] = -1; 
}

void embarque(tripulante* lista,tripulante* aviao){
    for (int i = 0; i < 7; i++){
        hashUniversal(*lista[i], aviao);
        printf("Embarque realizado com sucesso.\n");
        return;
        }
    }

void consulta(char nome, tripulante* aviao){
    printf ("Consulta de tripulantes.\n");
    scanf("%s", &nome);
    for (int i = 0; i < 7; i++){
        printf("Nome: %s\n", aviao[i].nome);
        printf("ID: %s\n", aviao[i].id);
        }
    }

int hashUniversal(tripulante lista, tripulante* aviao) {
    int asciiValues[50];
    nomeParaAscii(lista.nome, asciiValues);
    int i = 0;
    int hash = 0;
    while (asciiValues[i] != -1) {
        hash += asciiValues[i];
        i++;
    }
    hash = hash % 7;
    if (aviao[hash].ascii == 0) {
        aviao[hash] = *lista;
        return hash;
    } else {
        return -1;
    }
}

void main(){
    FILE* arquivo = fopen("tripulantes.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
        }
    tripulante aviao[7], lista[7];
    recebeAviao(arquivo, lista);
    embarque(lista, aviao);
    consulta('a', aviao);
    fclose(arquivo);
    }