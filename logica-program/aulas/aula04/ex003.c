#include <stdio.h>

void main(){
    float quantQ, quantAcertos;
    printf("Informe o numero de questoes, e a quantidade acertos do candidato respectivamente:");
    scanf("%f %f", &quantQ, &quantAcertos);
    float quantErros = quantQ - quantAcertos;
    float percentual = (quantErros/quantQ) * 100;
    printf("O percentual de erros do candidato e de %.0f%%", percentual);
}