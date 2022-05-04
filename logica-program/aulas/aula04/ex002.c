#include <stdio.h>

void main(){
    float tc;
    printf("Informe a temperatura em celsius:");
    scanf("%f", &tc);
    float tf = (9 * tc +160)/5;
    float tk = tc + 273;
    printf("O valor da temperatura em fahrenheit e: %.2f\n", tf);
    printf("O valor da temperatura em Kelvins e: %.2f", tk);
}