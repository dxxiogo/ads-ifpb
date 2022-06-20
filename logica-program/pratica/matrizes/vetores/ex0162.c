/*
Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.
*/
#include <stdio.h>

void main(){
    int i = 0, m, num, binario[20];
    printf("Informe um numero inteiro entre 0 e 255: ");
    scanf("%d", &num);
    do{
        binario[i] = num%2;
        num /= 2;
        i ++;
    } while(num/2 >= 1);
    binario[i] = num;
    for(m = i; m >= 0; m-- ){
        printf("%d ", binario[m]);
    }
}