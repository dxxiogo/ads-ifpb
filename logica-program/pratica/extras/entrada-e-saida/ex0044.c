#include <stdio.h>
#include <math.h>

void main(){
    int d1, d2, d3, d4;
    printf("Informe um numero binario de 4 digitos:");
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
    int conversaoDecimal = (d1* pow(2,3)) + (d2 * pow(2,2)) + (d3 * pow(2, 1)) + (d4 * pow(2, 0));
    printf("O numero %d %d %d %d em decimal e %d", d1, d2, d3, d4, conversaoDecimal);
}