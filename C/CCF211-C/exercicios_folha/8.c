#include "7.c"


int main(){
    
    Aluno aluno1;

    media(&aluno1);
    printf("%f", aluno1.media);
    
    return 0;
}



FILE *arquivo;

    arquivo = fopen("aluno.txt", "");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fscanf(arquivo, "%s %s %f %f %f", aluno1.nome, aluno1.sobrenome, &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

    fclose(arquivo);

    aluno1.media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3)/3;

    printf("Nome: %s %s