/*184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
elementos da coluna N.*/

#include <stdio.h>

const int LINHAS = 4;
const int COLUNAS = 4;

void main(){
    int matriz[LINHAS][COLUNAS], N, i, m, soma = 0;
    printf("Informe a matriz:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d", &matriz[i][m]);
        }
    }
    printf("Informe um numero entre 1 e 5: ");
    scanf("%d", &N);
    for(i= 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            if(m == N){
                printf("%d ", matriz[i][m]);
                soma += matriz[i][m];
            }
        }
    }
    float media = (float)soma/COLUNAS;
    printf("A media aritmetica de todos os numeros da coluna %d, e %f", N, media);
}