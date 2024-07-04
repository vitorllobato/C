#include <stdio.h>
#include <stdlib.h>

int main(){
    int quant=2;
    typedef struct{
        char phone[12];
        char name[30];
        char address[100];
        }dados;
    dados pessoa[quant];

    for (int i = 0; i < quant; i++){
        fgets(pessoa[i].name, 30, stdin); fflush(stdin);
        pessoa[i].name[strcspn(pessoa[i].name, "\n")] = 0;
        fgets(pessoa[i].address, 100, stdin); fflush(stdin);
        pessoa[i].address[strcspn(pessoa[i].address, "\n")] = 0;
        fgets(pessoa[i].phone, 12, stdin); fflush(stdin);
        pessoa[i].phone[strcspn(pessoa[i].phone, "\n")] = 0;
        };
    
    for (int i = 0; i < quant; i++){
        printf("%s, %s, %s. \n",pessoa[i].name,pessoa[i].address,pessoa[i].phone);
    }
    
    


    return 0;
}