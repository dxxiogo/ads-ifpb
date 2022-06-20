 /* Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor.

1- Fazer leitura do vetor em paralelo com a soma de todos os números dos vetores;
2- calcular a média fora do for;
3- comparar os números vetores com a média, se o número for maior que a média, imprimir número;
*/
#include <stdio.h>

void main(){
    int i, m, soma = 0, vetor[10];
    for(i = 0; i < 10; i++){
        printf("Informe 10 numeros: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    float media = soma/10;
    printf("A media e %.f", media);
    for(m = 0; m < 10; m++){
        if(vetor[m] > media){
            printf("%d ", vetor[m]);
        }
    }
    
}