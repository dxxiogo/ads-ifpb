#include <stdio.h>

const int MENSALIDADE = 80;
const int DADOS = 100;
const int TAXA = 5;

void main(){
    int quantDados;
    printf("Por favor, informe a quantidade de dados usada mensalmente em GB:");
    scanf("%d", &quantDados);
    int dadosExtraGastos = quantDados - DADOS;
    int valorExtra = dadosExtraGastos * TAXA;
    int valorFinal = MENSALIDADE + valorExtra;
    printf("O valor da conta sera de R$%d", valorFinal);  
}