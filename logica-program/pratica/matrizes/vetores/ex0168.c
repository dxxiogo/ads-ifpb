#include <stdio.h>

const int TAMANHO = 10;

void main(){
    int vetorA[TAMANHO], vetorB[TAMANHO], vetorC[TAMANHO * 2];
    int i, tamanho = 0;
    printf("Informe o primeiro vetor ordenado: ");
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &vetorA[i]);
    }
    printf("Informe o segundo vetor ordenado: ");
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &vetorB[i]);
    }
    i = 0;
    int m = 0;
    while(tamanho < TAMANHO*2){
        if(vetorA[i] <= vetorB[m]){
            vetorC[tamanho] = vetorA[i];
            i++;
        } else {
            vetorC[tamanho] = vetorB[m];
            m++;
        }
        tamanho ++;
    }
    for(i = 0; i < TAMANHO *2; i++ ){
        printf("%d ", vetorC[i]);
    }
}