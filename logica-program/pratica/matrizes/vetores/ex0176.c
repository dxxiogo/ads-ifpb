/*176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
e imprima a matriz lida.*/

#include <stdio.h>

const int LINHAS = 4;
const int COLUNAS = 4;

void main(){
    int matriz[LINHAS][COLUNAS], m, i;
    printf("Informe a matriz: ");
    for(i = 0; i < LINHAS; i++){
        for(m= 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            printf("%d ", matriz[i][m]);
        }
        printf("\n");
    }
}
