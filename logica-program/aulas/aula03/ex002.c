#include <stdio.h>
#include <math.h>

void main(){
    int n;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);
    int cubo = pow(n, 3);
    float raizQ = sqrt(n);
    printf("O cubo e: %d\nA raiz quadrada e: %.2f", cubo, raizQ);
}