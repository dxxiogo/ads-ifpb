/*177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule a sua matriz transposta.*/

#include <stdio.h>

const int LINHAS = 3;
const int COLUNAS = 2;

void main(){
    int matriz[LINHAS][COLUNAS], i, m;
    printf("Informe a matriz:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
    printf("A matriz transposta e:\n");
    for(i = 0; i < COLUNAS; i++){
        for(m = 0; m < LINHAS; m++){
            printf("%d ", matriz[m][i]);
        }
        printf("\n");
    }
}