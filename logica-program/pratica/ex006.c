#include <stdio.h>

void main(){
    int n1, n2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    int suma = n1 + n2;
    float subtra = n1 - n2;
    int multi = n1 * n2;
    float divisao = n1 / n2;
    printf("A adicao entre %d e %d e: %d\n", n1, n2, suma);
    printf("A subtracao entre %d e %d e: %f\n", n1, n2, subtra);
    printf("A multiplicação entre %d e %d e: %d\n", n1, n2, multi);
    printf("A divisao entre %d e %d e: %f\n", n1, n2, divisao);
}