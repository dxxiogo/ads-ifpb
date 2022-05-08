#include <stdio.h>

void main(){
    int quantQ, quantAcertos;
    printf("Informe o numero de questoes, e a quantidade acertos do candidato respectivamente:");
    scanf("%d %d", &quantQ, &quantAcertos);
    float quantErros = quantQ - quantAcertos;
    float percentual = (quantErros/quantQ) * 100;
    printf("O percentual de erros do candidato e de %.0f%%", percentual);
}