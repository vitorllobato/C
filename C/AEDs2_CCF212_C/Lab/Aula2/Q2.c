#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No* Apontador;

typedef struct No{
    char letra;
    Apontador esquerda, direita;
} No;

void inicializa(Apontador *p){
    *p = NULL;
}

void insere(Apontador *p, char x){
    if(*p == NULL){
        *p = (Apontador)malloc(sizeof(No));
        (*p)->letra = x;
        (*p)->esquerda = NULL;
        (*p)->direita = NULL;
        return;
    }
    if(x < (*p)->letra){
        insere(&(*p)->esquerda, x);
        return;
        }
    if(x > (*p)->letra){
        insere(&(*p)->direita, x);
        return;
        }    
}

void preOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    printf("%c ", p->letra);
    preOrdem(p->esquerda);
    preOrdem(p->direita);
}

void emOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    emOrdem(p->esquerda);
    printf("%c ", p->letra);
    emOrdem(p->direita);
}

void posOrdem(Apontador p){
    if(p == NULL){
        return;
    }
    posOrdem(p->esquerda);
    posOrdem(p->direita);
    printf("%c ", p->letra);
}

int main(){
    Apontador arvore;
    inicializa(&arvore);
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        insere(&arvore, str[i]);
    }
    preOrdem(arvore);
}