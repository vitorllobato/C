#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No* Apontador;

typedef struct No{
    int numero;
    Apontador esquerda, direita;
} No;

void inicializa(Apontador *p){
    *p = NULL;
}

void insere(Apontador *p, int x){
    if(*p == NULL){
        *p = (Apontador)malloc(sizeof(No));
        (*p)->numero = x;
        (*p)->esquerda = NULL;
        (*p)->direita = NULL;
        return;
    }
    if(x < (*p)->numero){
        insere(&(*p)->esquerda, x);
        return;
    }
    if(x > (*p)->numero){
        insere(&(*p)->direita, x);
        return;
    }
}

void preOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    printf("%d ", p->numero);
    preOrdem(p->esquerda);
    preOrdem(p->direita);
}

void emOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    emOrdem(p->esquerda);
    printf("%d ", p->numero);
    emOrdem(p->direita);
}

void posOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    posOrdem(p->esquerda);
    posOrdem(p->direita);
    printf("%d ", p->numero);
}


int main() {
    Apontador arvore;
    inicializa(&arvore);
    int quantidade, numeros;
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++){
        scanf("%d", &numeros);
        insere(&arvore, numeros);
    }
    printf("Pré-Ordem: ");
    preOrdem(arvore);
    printf("\n");
    printf("Em Ordem: ");
    emOrdem(arvore);
    printf("\n");
    printf("Pós-Ordem: ");
    posOrdem(arvore);
    printf("\n");

    return 0;
}