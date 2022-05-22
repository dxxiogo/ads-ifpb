#include <stdio.h>

void main(){
    int valorSaque, resto;
    printf("Informe o valor do saque (max: R$1000,00)\n");
    scanf("%d", &valorSaque);
    int cedulaCem = valorSaque/100;
    resto = valorSaque%100;
    int cedulaCinquenta = resto/50;
    resto = resto%50;
    int cedulaVinte = resto/20;
    resto = resto%20;
    int cedulaDez = resto/ 10;
    printf("Sera necessario:\n %d cedulas de R$100\n %d cedulas de R$50\n%d cedulas de R$20\n %d cedulas de R$10", cedulaCem, cedulaCinquenta, cedulaVinte, cedulaDez);
}