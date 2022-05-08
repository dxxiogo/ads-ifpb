#include <stdio.h>

void main(){
    float financiamento;
    printf("Informe o valor do financiamento:");
    scanf("%f", &financiamento);
    float parcelas = financiamento/5;
    float primeiraParcela = parcelas * 20/100;
    float outrasParcelas = (primeiraParcela - 12/100) * 4;
    float valor = primeiraParcela + outrasParcelas;
    float diferenca = financiamento - valor;
    printf("O valor da primeira parcela sera %.2f, e das seguintes %.2f", primeiraParcela, outrasParcelas);
    printf("O valor final e %.2f, e a diferenca %.2f", valor, diferenca);
}