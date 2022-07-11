/*180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros
e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz.*/

#include <stdio.h>

const int LINHAS = 5;
const int COLUNAS = 5;

void main(){
    int matriz[LINHAS][COLUNAS], i, m, num, quantVezes = 0;
    printf("Informe a matriz de %d linhas e %d colunas:\n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            scanf("%d", &matriz[i][m]);
        }
    }
    printf("Informe um numero inteiro: ");
    scanf("%d ", &num);
    printf("A matriz informada foi: \n");
    for(i = 0; i < LINHAS; i++){
        for(m = 0; m < COLUNAS; m++){
            printf("%d ", matriz[i][m]);
            if(matriz[i][m] == num){
                quantVezes ++;
            }
        }
        printf("\n");
    }
    printf("O numero %d aparece %d vezes na matriz", num, quantVezes);
}