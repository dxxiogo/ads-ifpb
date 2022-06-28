/*172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um
número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada
por elementos consecutivos existem no vetor, de forma que todos os elementos da
sequência estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,
10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0,
6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.*/

#include <stdio.h>

const int QUANTIDADE = 10;

void main(){
    int vVetor[QUANTIDADE], num, i, m, sequencia = 0;
    int fator = 0;
    printf("\nInforme um numero entre 1 e 10: ");
    scanf("%d", &num);
    printf("\nInforme um vetor:\n");
    for(i = 0; i < QUANTIDADE; i++){
        scanf("%d", &vVetor[i]);
    }
    for(i = 0; i  < QUANTIDADE; i++){
        for(m= i; m < QUANTIDADE; m++){
            if(vVetor[m] < vVetor[m + 1]){
                fator ++;
            }
        }
        if(fator == num){
             sequencia ++;
        }
        fator = 0;
    }
    /*for(i =  0; i < QUANTIDADE; i++){
        if(vVetor[i] < vVetor[i+1]){
            fator ++;
        }
    }*/
    printf("Existe %d sequencia do  tamanho %d", sequencia, num);
}