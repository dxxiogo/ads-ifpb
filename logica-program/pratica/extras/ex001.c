#include <stdio.h>

const float VALOR_MENOR = 0.30; // valor da unidade da maçâ caso a quantidade total seja menor que 12
const float VALOR_DUZIA = 0.20; // valor da unidade da maçâ caso a quantidade total for maior ou igual a 12

void main(){
    int quantMacas;
    float valorTotal;
    printf("Informe  quantidade de macas compradas:");
    scanf("%d", &quantMacas);
    if(quantMacas >= 12){
        valorTotal = quantMacas * VALOR_DUZIA;
        printf("O valor total da compra e R$%.2f", valorTotal);
    }else{
        valorTotal = quantMacas * VALOR_MENOR;
        printf("O valor total da compra e R$%.2f", valorTotal);
    }
}