/*181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
sua diagonal principal.*/

#include <stdio.h>

const int LINHAS = 5;
const int COLUNAS = 5;

void main(){
    int matriz[LINHAS][COLUNAS], m, i, num;

    printf("Informe um numero inteiro entre 1 e 5: ");
    scanf("%d", &num);

    printf("Informe a matriz:\n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d ", &matriz[i][m]);
        }
    }
    
    for(i = 0; i < num; i++){
        for(m = 0; m < COLUNAS; m++){
            if(m == i){
                printf("%d ", matriz[i][m]);
            }
        }
    }
}
