#include <stdio.h>
#include <stdlib.h>

int main(){
                int nMatricula,matriculas[99],nota[99],i,quantidade=0,FLAG_TESTE=0;
                char gabarito[10],respostas[10];

               
    printf("Escreva o gabarito da prova:\n");
    for(i=0;i<10;i++){
        printf("Questão %d:",i+1);
        scanf("%c",&gabarito[i]);
        getchar();
        }
    do{
        int acertos=0;
        printf("Escreva o numero de matricula do aluno:");
        scanf("%d",&nMatricula);
        matriculas[quantidade]=nMatricula;
    
        printf("Escreva o que o aluno marcou:\n");
        
        for(i=0;i<10;i++){
            printf("Questão %d:",i+1);
            scanf("%c",&respostas[i]);
            getchar();
            
            if (respostas[i]==gabarito[i]){
                acertos++;
                printf("%d",acertos);
                } 
            }
        nota[quantidade]=acertos;
        quantidade++;
    } while (nMatricula != 9999 || quantidade==98);
    
    for (i = 0; i < quantidade; i++){
        printf("O aluno de matricula %d ficou com a nota %d.\n",matriculas[i], nota[i]);
    }
    

    return 0;
}