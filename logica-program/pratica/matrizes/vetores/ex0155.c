#include <stdio.h>

void main(){
    int vetor[10];
    int i, num;
    printf("Informe 10 numeros: ");
    for(i = 0; i < 10; i++){
         scanf("%d", &vetor[i]);   
    }
    printf("Informe mais um numero:");
    scanf("%d", &num);
    printf("O enesimo numero informado foi: %d", vetor[num - 1]);
}