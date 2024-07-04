#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char nomeLivro[100];
} Livro;

int main() {
    int N;
    scanf("%d", &N);

    Livro *livros = malloc(N * sizeof(Livro));
    if (livros == NULL) {
        perror("Erro ao alocar memória para o vetor de livros");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &livros[i].numero);
        getchar(); 
        fgets(livros[i].nomeLivro, 100, stdin);
        livros[i].nomeLivro[strcspn(livros[i].nomeLivro, "\n")] = '\0';
    }

    int M;
    scanf("%d", &M);

    int posicao = -1;
    for (int i = 0; i < N; i++) {
        if (livros[i].numero == M) {
            posicao = i;
            break;
        }
    }
    if (posicao != -1) {
        printf("Posição: %d\n", posicao + 1);
        printf("Nome do Livro: %s\n", livros[posicao].nomeLivro);
    } else {
        printf("Livro não encontrado.\n");
    }

    FILE *arquivo = fopen("livros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        free(livros);
        return 1;
    }
    fprintf(arquivo, "%d\n", N);
    for (int i = 0; i < N; i++) {
        fprintf(arquivo, "%d %s\n", livros[i].numero, livros[i].nomeLivro);
    }
    fclose(arquivo);
    free(livros);

    return 0;
}
