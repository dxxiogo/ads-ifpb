//ler a área e valor cobrado por cada metro quadradado

#include <stdio.h>

void main(){
    float area, valorM2;
    printf("Digite o valor da area:");
    scanf("%f", &area);
    printf("Informe o custo de cada metros quadrados:");
    scanf("%f", &valorM2);
    float valorFinal = area * valorM2;
    printf("O valor final para o terreno com area de %.2fm2 e R$%.2f ", area, valorFinal);
}