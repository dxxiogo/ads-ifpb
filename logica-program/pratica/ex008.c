#include <stdio.h>

void main(){
    float base, altura;
    printf("Informe a base e altura do triangulo respectivamente:");
    scanf("%f %f", &base, &altura);
    float area = (base * altura)/2;
    printf("A area do triangulo e: %.2f", area);
}