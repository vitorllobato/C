#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char pacoteProblema[100];

    scanf("%d", &N);
    getchar();

    char pacotes[N][100];
    for (int i = 0; i < N; i++) {
        printf("%d: ", i + 1);
        fgets(pacotes[i], 100, stdin);

        pacotes[i][strcspn(pacotes[i], "\n")] = '\0';
    }

    fgets(pacoteProblema, 100, stdin);
    pacoteProblema[strcspn(pacoteProblema, "\n")] = '\0';

    int posicao = -1;
    for (int i = 0; i < N; i++) {
        if (strcmp(pacotes[i], pacoteProblema) == 0) {
            posicao = i + 1; 
            break;
        }
    }
    if (posicao != -1) {
        printf("%d.\n", posicao);
    } else {
        printf("O pacote com problema não foi encontrado na lista.\n");
    }

    return 0;
}
