/*183. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos
da linha N.*/

#include <stdio.h>

const int LINHAS = 5;
const int COLUNAS = 5;

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
            if(i == N){
                soma += matriz[i][m];
            }
        }
    }
    printf("A soma de todos os numeros da linha %d, e %d", N, soma);
}