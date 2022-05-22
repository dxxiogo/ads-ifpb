#include <stdio.h>

void main(){
    int numero1, numero2, numero3, numero4, numero5, segundoMaior;
    printf("Informe cinco numeros:");
    scanf("%d %d %d %d %d", &numero1, &numero2, &numero3, &numero4, &numero5);
    if(numero1 > numero2 && numero2 > numero3 && numero3 > numero4 && numero4 > numero5){
        segundoMaior = numero2;
        printf("O segundo numero maior e %d, e foi o segundo numero informado", segundoMaior);
    } else if( numero2 > numero4 && numero4 > numero5 && numero4 > numero3 && numero4 > numero1){
        segundoMaior = numero4;
         printf("O segundo numero maior e %d, e foi o quarto numero informado", segundoMaior);
    } else if (numero4 > numero3 && numero3 > numero5 && numero5 > numero2 && numero2 > numero1){
        segundoMaior = numero3;
         printf("O segundo numero maior e %d, e foi o terceiro numero informado", segundoMaior);
    } else if(numero3 > numero1 && numero1 > numero2 && numero2 > numero4 && numero4 > numero5){
         segundoMaior = numero1;
         printf("O segundo numero maior e %d, e foi o primiro numero informado", segundoMaior);
    } else{
         segundoMaior = numero5;
         printf("O segundo numero maior e %d, e foi o quinto numero informado", segundoMaior);
    }
}