/*172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um
número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada
por elementos consecutivos existem no vetor, de forma que todos os elementos da
sequência estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,
10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0,
6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.*/

#include <stdio.h>

const int QUANTIDADE = 10;

void main(){
    int vVetor[10], num, i, m;
    int sequencia = 0, sequenciaElementos = 0;
    printf("Informe o vetor: ");
    for(i = 0; i < QUANTIDADE; i++){
        scanf("%d", &vVetor[i]);
    }
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    for(i = 0; i < QUANTIDADE - num; i++){
        int controladora = 0;
        for(m = i; controladora < num; m++){
            if(vVetor[m] < vVetor[m + 1]){
                sequencia++;
            }
            if(sequencia == num){
                sequenciaElementos ++;
                sequencia = 0;
            }
            controladora ++;
        }
    }
    printf("Existe %d sequencias de tamanho %d", sequenciaElementos, num);
}