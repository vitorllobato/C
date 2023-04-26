#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    char nome[]="papapapudo";
    char teste = 'p';
    for(int i = 0; (nome[i]) != '\0'; i++){
        if(nome[i] == teste){
            nome[i]= 'c';
        }
    }
    printf("%s", nome);

    return 0;
}