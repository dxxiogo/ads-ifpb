#include <stdio.h>
# include <math.h>

void main(){
    float lado;
    printf("Digite o valor dos lados do quadrado:");
    scanf("%f", &lado);
    float area = lado * lado;
    printf("A area do quadrado e: %f", area);
}