#include <stdio.h>
const float VALORM2 = 300;

void main(){
    float compri, larg;
    printf("Informe o comprimento e largura do terreno:");
    scanf("%f %f", &compri, &larg);
    float area = compri * larg;
    float valorFinal = area * VALORM2;
    printf("O valor final terreno e R$%.2f", valorFinal);
}