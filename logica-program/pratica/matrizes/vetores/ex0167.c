/* 167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
lido em ordem crescente.*/

#include <stdio.h>

const int QUANTIDADE = 10;
void main(){
    int i, vetorA[QUANTIDADE], vetorB[QUANTIDADE], aux = 0;
    printf("Informe um vetor aleatorio de numeros inteiros: ");
    for(i = 0; i < QUANTIDADE; i ++){
        scanf("%d", &vetorA[i]);
    }
    for(i = 0; i < QUANTIDADE; i++){
        if( vetorA[i] > aux){
            aux = vetorA[i];
            vetorB[i] = aux;
        } else{
            vetorB[i -1] = vetorA[i];
        }
    }
    for(i= 0; i < QUANTIDADE; i++){
        printf("%d ", vetorB[i]);
    }
}