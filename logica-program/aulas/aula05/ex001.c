#include <stdio.h>

const int VALOR_ACERTO = 5;
const int VALOR_ERRO = -3;
const int VALOR_EM_BRANCO = 0;
void main(){
    int quantAce, quantE, quantB;
    printf("Digite a quantidade de acertos, erros, e questoes em branco, respectivamente:");
    scanf("%d %d %d", &quantAce, &quantE, &quantB);
    float pontuacao = (quantAce * VALOR_ACERTO) - (quantE * VALOR_ERRO) - (quantB * VALOR_EM_BRANCO);
    printf("A pontuacao do candidato e %.f pontos", pontuacao);
}