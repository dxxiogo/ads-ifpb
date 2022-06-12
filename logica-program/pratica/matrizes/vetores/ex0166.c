/*166. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos do vetor A que não estão presentes
no vetor B. O terceiro vetor não deverá armazenar valores repetidos.

1- Ler vetor A e B
2- Comparar vetores com For, se o bloco do vetor A for diferente do bloco do vetor B, armazena no vetor C;
*/
#include <stdio.h>

void main(){
    int i, m;
    int vetorA[5];
    int vetorB[5];
    int vetorC[5];
    printf("Informe cinco numeros: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &vetorA[i]);
    }
    printf("Informe mais cinco numeros: ");
    for(m = 0; m < 5; m++){
        scanf("%d", &vetorB[i]);
    }
    for(i = 0; i < 5; i++){
        do{
           if(vetorA[i] != vetorB[i]){
               vetorC[i] = vetorA[i];
           }
        } while(vetorA[i] == vetorB[i]);
    }
    for(i = 0; i < 5; i ++){
        printf("%d ", vetorC[i]);
    }

}