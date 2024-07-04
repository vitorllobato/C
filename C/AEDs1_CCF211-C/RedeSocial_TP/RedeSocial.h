#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct USER USER;
typedef struct MENSAGEM MENSAGEM;


typedef struct AMIGO{       //Função de adicionar amigos foi feita pensando em user como variavel e nã o como ponteiro, possivel fonte de erro.
    USER* user;
    int tempo_amizade;
    struct AMIGO* proximo;
}AMIGO;

typedef struct USER{
    int ID;
    char nome[50];
    int n_amigos;
    AMIGO* L_amigos;
    MENSAGEM* L_mensagens;
    struct USER* proximo;
}USER;      

typedef struct MENSAGEM{
    USER user;
    char texto[140];
    int ID;
    int curtidas;
    int tempo_postagem;
    struct MENSAGEM* proximo;
}MENSAGEM;

typedef struct REDE{
    USER* L_users;
    int n_users;
    }REDE;

void inicializarRede(REDE* rede);
void lerArquivo(FILE* arquivo, REDE* rede);
void iniciarAmizade(USER* user1, USER* user2);
void cancelarAmizade(USER* user1, USER* user2);
void postarMensagem(USER* user, char* texto, int id);
void curtirMensagem(MENSAGEM* mensagem, int id);
void verAmigos(USER* user);
void exibirTimeline(USER* user);
void teste(char* ordem);