#include <stdio.h>
#include <stdlib.h>


int main(){
    int i,cem=100,clientes[cem];
    float preços[cem];
    int faturamento[cem],montante=0;
    for (i = 0; i < cem; i++){
        preços[i] = 0;
        clientes[i] = 0;
        }
        i=-1;
    while (clientes[i]>=0){
        i++;
        printf("ID: ");
        scanf("%d",&clientes[i]);  
        if (cliente[i]<0)
        {
            break;
        }
        
        printf("Valor: ");
        scanf("%d",&preços[i]);
        montante=montante+preços[i];
        }
    for (int j=0; j<i; j++)
    {
        printf("Cliente %d pagou %d.",clientes[j],preços[j]);
        printf("O montante do dia foi %d.",montante);
        }
    
   
    
    return 0;
}