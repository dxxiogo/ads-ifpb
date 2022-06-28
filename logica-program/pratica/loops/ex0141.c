/*141. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos
números lidos.*/

#include <stdio.h>

void main(){
   int num1, num2, num3, divisor = 2, mmc = 1;
   printf("Informe tres numeros para calcular o mmc: ");
   scanf("%d %d %d", &num1, &num2, &num3);
   while(num1 != 1 && num2 != 1 && num3 != 1){
        while(num1%divisor == 0 || num2%divisor == 0 || num3%divisor == 0){
            mmc *= divisor;
            if(num1%divisor == 0){
                num1 /= divisor;
            }
            if(num2%divisor == 0){
                num2 /= divisor; 
            }
            if(num3%divisor == 0){
                num3 /= divisor;
            }
        } 
        divisor ++;
   }     
   printf("O mmc entre os tres numeros e %d", mmc);
}