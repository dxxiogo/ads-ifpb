#include <stdio.h>

void main(){
    int vetor [10];
    int i, m;
    printf("Informe dez numeros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d ", &vetor[i]);
    }
    for(m = 0; m < 10; m++){
        printf("%d ", vetor[m]);
    }
}