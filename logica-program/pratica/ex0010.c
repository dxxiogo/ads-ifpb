#include <stdio.h>

const float CM = 2.54;
void main(){
    float polegada;
    printf("Informe o numero de polegadas de sua TV:");
    scanf("%f", &polegada);
    float convertCm = CM * polegada;
    printf("A TV convertida em Cm é: %.2fcm", convertCm);
}