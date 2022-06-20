#include <stdio.h>
#include <string.h>

const char caractere[10] = '*';

void main(){
    int num, i;
    char impressao[100];
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    for(i= 0; i < num; i++){
        printf("%s\n", impressao);
        strcat(impressao, caractere);
    }
}