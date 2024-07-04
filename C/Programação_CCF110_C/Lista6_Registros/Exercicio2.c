#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qtd=10;
    typedef struct {
        char matricula[5];
        char nome[40];
        float nota;
    }alunos;
    alunos aluno[qtd],aprovados[qtd],reprovados[qtd];
    
    for (int i = 0; i < qtd; i++){
        fgets(aluno[i].nome, 40, stdin);
        aluno[i].nome[strcspn(aluno[i].nome,"\n")]=0;
        fgets(aluno[i].matricula, 5, stdin);
        strcspn(aluno[i].matricula,"\n");
        scanf("%f",&aluno[i].nota);
        }
    for (int i = 0; i < qtd; i++){
        if(aluno[i].nota >= 5.0){
            aprovados[i] = aluno[i];
            }
        else {
            reprovados[i] = aluno[i];
        }
    }
    for (int i = 0; i < qtd; i++)    {  
        printf("%s, %s, %f. \n",aprovados[i].nome,aprovados[i].matricula, aprovados[i].nota);
    }
    for (int i = 0; i < qtd; i++){
        printf("%s, %s, %f. \n",reprovados[i].nome,reprovados[i].matricula, reprovados[i].nota);
    }
    
    
    
    return 0;
}