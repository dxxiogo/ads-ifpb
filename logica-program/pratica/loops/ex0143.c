#include <stdio.h>


void main(){
    float financiamento;
    int prestacoes;
    printf("Informe o valor a ser financiado: ");
    scanf("%f", &financiamento);
    printf("\nDeseja dividir em quantas prestacoes? ");
    scanf("%d", &prestacoes);
    float primeiraParcela = financiamento/ prestacoes;
    float demaisParcelas = financiamento/ (prestacoes - 1) + 7/100;
    float valorTotal = primeiraParcela + (demaisParcelas * (prestacoes -1));
    float diferenca = valorTotal - financiamento;
    printf("O valor a primeira parcela e R$%.2f, e das demais parcelas R$%.2f.", primeiraParcela, demaisParcelas);
    printf("\n\nO valor a ser pago e %.2f, e a diferenca entre ele e o finaciamento e de R$%.2f.", valorTotal, diferenca);


}