#include <stdio.h>

void main(){
    int ano;
    printf("Informe um ano:");
    scanf("%d", &ano);
    if(ano%4 == 0 && ano%100 != 0){
        printf("%d e um ano bissexto", ano);
    }
    else{ 
        printf("%d nao e um ano bissexto", ano);
    }
}