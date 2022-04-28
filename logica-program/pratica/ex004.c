#include <stdio.h>

void main(){
    float firstNumber, secondNumber, thirdNumber;
    float firstWeight, secondWeight, thirdWeight;
    printf("Digite as tres notas para o calculo:");
    scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
    printf("Digite seus respectivos pesos:");
    scanf("%f %f %f", &firstWeight, &secondWeight, &thirdNumber);
    float media = (firstNumber * firstWeight + secondNumber * secondWeight + thirdNumber * thirdWeight) / (firstWeight + secondWeight + thirdWeight);
    printf("A media ponderada e: %.2f", media);
}