/*182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
determine o maior valor presente na diagonal principal.*/

#include <stdio.h>

const int LINHAS = 4;
const int COLUNAS = 4;

void main(){
    int matriz[LINHAS][COLUNAS], m, i, maior = 0;

    printf("Informe a matriz:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
     for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            if(m == i){
                if(matriz[i][m] > maior){
                    maior = matriz[i][m];
                }
            }
        }
    }
    printf("O maior numero da matriz na diagonal principal e %d", maior);
}    