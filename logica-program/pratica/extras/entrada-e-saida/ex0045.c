#include<stdio.h>

const float KWH = 0.35;
const int TAXA = 15;

void main()
{
   int qntddKWh;
   printf("Informe o valor em KWh:"); 
   scanf("%d", &qntddKWh);
   float valor = qntddKWh * KWH;
   float ICMS = valor * 17/100;
   float valorFinal = valor + ICMS + TAXA;
   printf("O valor da energia e R$%.2f ", valorFinal);
}