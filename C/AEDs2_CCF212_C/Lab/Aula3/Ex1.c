#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char caractere;
    struct No *menor, *igual, *maior;
    char *nome;  
} No;

No* novoNo(char caractere) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }
    novo->caractere = caractere;
    novo->menor = novo->igual = novo->maior = NULL;
    novo->nome = NULL;
    return novo;
}

No* inserir(No* raiz, char* chave) {
    if (*chave == '\0') {
        if (raiz == NULL)
            raiz = novoNo('\0');
        else {
            // Alocar memória para a string no nó final
            raiz->nome = (char*)malloc(sizeof(char));
            if (raiz->nome == NULL) {
                printf("Erro de alocação de memória!\n");
                exit(1);
            }
            *raiz->nome = '\0'; // Terminar a string
        }
    } else {
        if (raiz == NULL)
            raiz = novoNo(*chave);
        if (*chave < raiz->caractere)
            raiz->menor = inserir(raiz->menor, chave);
        else if (*chave > raiz->caractere)
            raiz->maior = inserir(raiz->maior, chave + 1);
        else
            raiz->igual = inserir(raiz->igual, chave + 1);
    }
    return raiz;
}



int buscar(No* raiz, char* chave) {
    if (raiz == NULL)
        return 0;
    if (*chave == '\0')
        return (raiz->nome != NULL);
    if (*chave < raiz->caractere)
        return buscar(raiz->menor, chave);
    else if (*chave > raiz->caractere)
        return buscar(raiz->maior, chave);
    else
        return buscar(raiz->igual, chave + 1);
}

void liberarTrieTST(No* raiz) {
    if (raiz == NULL)
        return;
    liberarTrieTST(raiz->menor);
    liberarTrieTST(raiz->igual);
    liberarTrieTST(raiz->maior);
    free(raiz->nome);
    free(raiz);
}

int main() {
    No* raiz = NULL;
    char nomes[100][101];
    char pessoa_buscada[101];
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0)
            break;

        for (int i = 0; i < N; i++) {
            scanf("%s", nomes[i]);
            raiz = inserir(raiz, nomes[i]);
        }

        scanf("%s", pessoa_buscada);

        if (buscar(raiz, pessoa_buscada))
            printf("Pessoa Encontrada\n");
        else
            printf("Pessoa Não Encontrada\n");

        liberarTrieTST(raiz);
        raiz = NULL;
    }

    return 0;
}
