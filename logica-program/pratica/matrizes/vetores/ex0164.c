/*Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.

1- Ler vetor A e B
2- 
*/
#include <stdio.h>
const int QUANTIDADE = 10;

void main(){
     int   vetA[QUANTIDADE], vetB[QUANTIDADE], vetC[QUANTIDADE];
     int i, m;
    printf("Informe %d numeros para o vetor A: ", QUANTIDADE);
    for(i = 0; i < QUANTIDADE; i++){
        scanf("%d", &vetA[i]);
    }
    printf("Informe %d numeros para o vetor B: ", QUANTIDADE);
    for(i = 0; i < QUANTIDADE; i ++){
        scanf("%d", &vetB[i]);
    }
    for(i = 0; i < QUANTIDADE; i++){
        if(vetA[i] != vetB[i]){
                vetC[i] = vetA[i];
        }
    }
    for( i = 0; i < QUANTIDADE; i ++){
        printf("%d ", vetC[i]);
    }
}
