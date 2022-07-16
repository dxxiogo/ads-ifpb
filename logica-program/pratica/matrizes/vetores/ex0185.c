/*184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
elementos da coluna N.*/

#include <stdio.h>

const int LINHAS = 5;
const int COLUNAS = 5;

void main(){
    int matriz[LINHAS][COLUNAS], i, m;
    int soma = 0;
    printf("Informe a matriz:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
    for( i = 0; i < LINHAS; i++){
        for( m = 0; m < COLUNAS; m++){
            soma += matriz[i][m];
        }
        printf("A soma de todos os elementos da linha %d, e %d", i, soma);
        soma = 0;
        printf("\n");
    }
}