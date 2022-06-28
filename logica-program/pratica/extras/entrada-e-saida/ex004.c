#include <stdio.h>
#include <math.h>

void main(){
    int numero;
    printf("Digite um numero inteiro e positivo:");
    scanf("%d", &numero);
    int dobro = numero * numero;
    int triplo = numero * numero * numero;
    int quadrado = pow(numero, 2);
    int cubo = pow(numero, 3);
    float raizQ = sqrt(numero);
    printf("O dobro de %d e %d\n", numero, dobro);
    printf("O triplo de %d e %d\n", numero, triplo);
    printf("O quadrado de %d e %d\n", numero, quadrado);
    printf("O cubo de %d e %d\n", numero, cubo);
    printf("A raiz quadrada de %d e %.2f", numero, raizQ);
}