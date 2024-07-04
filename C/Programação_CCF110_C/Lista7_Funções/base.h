#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//-------------------------Exercício 9.---------------------------//

typedef struct ex9{
    char sexo[10],olho[10],cabelo[10];
    int idade;
    }ex9;

int qtd = 2;
ex9 pessoa;

void pesquisa(ex9 *pessoa){
    for (int i = 0; i < qtd; i++){    
        printf("Qual a cor do cabelo da pessoa?");
        fgets(&pessoa->cabelo ,10,stdin);
        printf("Qual a cor dos olhos da pessoa?");
        fgets(&pessoa->olho,10,stdin);
        printf("Qual o sexo da pessoa? (H ou M).");
        fgets(&pessoa->sexo,10,stdin);
        scanf("%d",&pessoa->idade);
        }
    }

//-------------------------Exercício 10.---------------------------//

int vogal (char a){
    if( a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'){
        return 1;
        }
    else{
        return -1;
    }
    }

//-------------------------Exercício 11.---------------------------//

int segundos (int a, int b, int c){
    int segundos;
    segundos = (a*3600)+(b*60)+c;
    return segundos;
    }

//-------------------------Exercício 12.---------------------------//

int d2=10;
int matrizes (int izquierdo[][d2],int n){
    int flag=1;
    d2=n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i>=j){
                if (izquierdo[i][j]!=0){
                    flag=0;
                    }
                }
            if (i<j){
                if (izquierdo[i][j]==0){
                    flag=0;
                    }
                }
            }
        }
    if(flag==1){
        return 1;
        }
    else if(flag==0){
        return 0;
        }
}
