#include <stdio.h>
#include <math.h>

void main(){
    float lado;
    printf("Informe o valor dos lados do quadrado:");
    scanf("%f", &lado);
    float area = pow(lado, 2);
    float perimetro = lado + lado + lado;
    printf("O valor da area do quadrado e: %.1f\n O valor do perimetro e: %.1f", area, perimetro);
}