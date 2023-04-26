
typedef struct Aluno{
        char nome[20];
        int idade,tam=3;
        float nota[tam],media;
        //nota notas;
    }Aluno;

void media(Aluno *aluno){
    float soma = 0;
    for(int i = 0; i < *aluno.tam; i++){
        soma += *aluno.nota[i];
    }
    *aluno.media = soma / *aluno.tam;
}

