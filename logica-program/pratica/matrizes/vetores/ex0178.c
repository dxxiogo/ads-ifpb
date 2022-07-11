/*178. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos da sua diagonal principal.*/

#include <stdio.h>

const int LINHAS = 4;
const int COLUNAS = 4;

void main(){
    int matriz[LINHAS][COLUNAS], i, m;
    printf("Informe a matriz de ordem 5:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            if(i == m){
                printf("%d ", matriz[i][m]);
            }
        }
    }
}