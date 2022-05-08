#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero entre 1000 e 9999: \n");
    scanf("%d", &numero);
    int milhar = numero/1000;
    int centena = (numero%1000)/100;
    int dezena = (numero%100)/10;
    int unidade = numero%10;
    int reverso = milhar + (centena*10) + (dezena*100) + (unidade *1000);
    printf("O reverso de %d, e %d", numero, reverso);
}