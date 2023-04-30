#include "RedeSocial.h"

int t = 0; //tempo global
REDE rede;

void inicializarRede(REDE* rede){
    rede->L_users = NULL;
    rede->n_users = 0;
}

void lerArquivo(FILE* arquivo, REDE* rede){
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }
    
    int n_usuarios;
    fscanf(arquivo, "%d", &n_usuarios);

    inicializarRede(rede);

    for(int i = 0; i < n_usuarios; i++){
        int id, n_amigos;
        char nome[50];
        fscanf(arquivo, "%d %s %d", &id, nome, &n_amigos);
        USER* novo_user = (USER*)malloc(sizeof(USER));
        novo_user->ID = id;
        strcpy(novo_user->nome, nome);
        novo_user->n_amigos = n_amigos;
        novo_user->L_amigos = NULL;
        novo_user->L_mensagens = NULL;
        novo_user->proximo = NULL;
        USER* aux = rede->L_users;
        if(aux == NULL){
            rede->L_users = novo_user;
        }else{
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux->proximo = novo_user;
        }
        rede->n_users++;
    }
    
    int tempo, funcao, id1, id2,idmensagem;
    char post[140];
        while(fscanf(arquivo, "%d;%d", &tempo, &funcao) != EOF){
            t = tempo;
            if(funcao == 1){
                fscanf(arquivo, "%d;%d", &id1, &idmensagem);
                USER* aux = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        fgets(post, 140, arquivo);
                        postarMensagem(aux, post, idmensagem);
                        break;
                    }
                    aux = aux->proximo;
                }
            }else if(funcao == 2){
                fscanf(arquivo, "%d;%d", &id1, &id2);
                USER* aux = rede->L_users;
                USER* aux2 = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        while(aux2 != NULL){
                            if(aux2->ID == id2){
                                iniciarAmizade(aux, aux2);
                                break;
                            }
                            aux2 = aux2->proximo;
                        }
                        break;
                    }
                    aux = aux->proximo;
                }
            }else if(funcao == 3){
                fscanf(arquivo, "%d;%d", &id1, &id2);
                USER* aux = rede->L_users;
                USER* aux2 = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        while(aux2 != NULL){
                            if(aux2->ID == id2){
                                cancelarAmizade(aux, aux2);
                                break;
                            }
                            aux2 = aux2->proximo;
                        }
                        break;
                    }
                    aux = aux->proximo;
                }
            }else if(funcao == 4){
                fscanf(arquivo, "%d;%d", &id1, &idmensagem);
                USER* aux = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        while(aux->L_mensagens != NULL){
                            if(aux->L_mensagens->ID == idmensagem){
                                curtirMensagem(aux->L_mensagens, idmensagem);
                                break;
                            }
                            aux->L_mensagens = aux->L_mensagens->proximo;
                        }
                        break;
                    }
                    aux = aux->proximo;
                }
            }else if(funcao == 5){
                fscanf(arquivo, "%d", &id1);
                USER* aux = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        verAmigos(aux);
                        break;
                    }
                    aux = aux->proximo;
                }
            }else if(funcao == 0){
                fscanf(arquivo, "%d", &id1);
                USER* aux = rede->L_users;
                while(aux != NULL){
                    if(aux->ID == id1){
                        exibirTimeline(aux);
                        break;
                    }
                    aux = aux->proximo;
                }
            }
        }
    fclose(arquivo);
}

void iniciarAmizade(USER* user1, USER* user2){
    AMIGO* novo_amigo = (AMIGO*)malloc(sizeof(AMIGO));  
    novo_amigo->user = user2;
    novo_amigo->tempo_amizade = t;
    novo_amigo->proximo = NULL;
    AMIGO* aux = user1->L_amigos;   
    if(aux == NULL){
        user1->L_amigos = novo_amigo;
    }else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo_amigo;
    }
    user1->n_amigos++;  //Adiciona user2 na lista de amigos de user1

    novo_amigo = (AMIGO*)malloc(sizeof(AMIGO));
    novo_amigo->user = user1;
    novo_amigo->tempo_amizade = t;
    novo_amigo->proximo = NULL;
    aux = user2->L_amigos;
    if(aux == NULL){
        user2->L_amigos = novo_amigo;
    }else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo_amigo;
    }
    user2->n_amigos++;  //Adiciona user1 na lista de amigos de user2
}

void cancelarAmizade(USER* user1, USER* user2){
    AMIGO* aux = user1->L_amigos;
    AMIGO* aux2 = user1->L_amigos;
    while(aux != NULL){
        if(aux->user == user2){
            if(aux == user1->L_amigos){
                user1->L_amigos = aux->proximo;
            }else{
                aux2->proximo = aux->proximo;
            }
            free(aux);
            user1->n_amigos--;
            break;
        }
        aux2 = aux;
        aux = aux->proximo;
    }
    aux = user2->L_amigos;
    aux2 = user2->L_amigos;
    while(aux != NULL){
        if(aux->user == user1){
            if(aux == user2->L_amigos){
                user2->L_amigos = aux->proximo;
            }else{
                aux2->proximo = aux->proximo;
            }
            free(aux);
            user2->n_amigos--;
            break;
        }
        aux2 = aux;
        aux = aux->proximo;
    }
}

void postarMensagem(USER* user, char* texto, int id){
    MENSAGEM* nova_mensagem = (MENSAGEM*)malloc(sizeof(MENSAGEM));
    nova_mensagem->ID = id;
    strcpy(nova_mensagem->texto, texto);
    nova_mensagem->tempo_postagem = t;
    nova_mensagem->curtidas = 0;
    nova_mensagem->proximo = NULL;
    MENSAGEM* aux = user->L_mensagens;
    if(aux == NULL){
        user->L_mensagens = nova_mensagem;
    }else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = nova_mensagem;
    }
}

void verAmigos(USER* user){
    AMIGO* aux = user->L_amigos;
    while(aux != NULL){
        printf("%s\n", aux->user->nome);
        aux = aux->proximo;
    }
}

void curtirMensagem(MENSAGEM* mensagem, int id){
    MENSAGEM* aux = mensagem;
    while(aux != NULL){
        if(aux->ID == id){
            aux->curtidas++;
            break;
        }
        aux = aux->proximo;
    }
}

void exibirTimeline(USER* user){
    AMIGO* aux = user->L_amigos;
    while(aux != NULL){
        MENSAGEM* aux2 = aux->user->L_mensagens;
        while(aux2 != NULL){
            if(aux2->tempo_postagem >= aux->tempo_amizade){
                printf("%s: %s\n", aux2->user.nome, aux2->texto);
            }
            aux2 = aux2->proximo;
        }
        aux = aux->proximo;
    }
}

void teste(char* ordem){
    FILE* arquivo;
    if(strcmp(ordem,"teste1")==0){ 
        arquivo = fopen("entrada1.txt", "r");
    }else if(strcmp(ordem,"teste2")==0){
        arquivo = fopen("entrada2.txt", "r");
    }else if(strcmp(ordem,"teste3")==0){
        arquivo = fopen("entrada3.txt", "r");
    }
    
    REDE rede;
    lerArquivo(arquivo, &rede);
    fclose(arquivo);
}