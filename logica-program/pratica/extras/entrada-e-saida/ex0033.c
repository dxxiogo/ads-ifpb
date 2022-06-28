#include <stdio.h>
#include <string.h>

void main(){
    char candidato01[30];
    char candidato02[30];
    char candidato03[30];
    int quantdd1, quantdd2, quantdd3;
    printf("Informe o nome do primeiro candidato: ");
    gets(candidato01);
    printf("\nInforme a quantidade de votos:");
    scanf("%d", &quantdd1);
    fflush(stdin);

    printf("\nInforme o nome do segundo candidato:");
    gets(candidato02);
    printf("\nInforme a quantidade de votos:");
    scanf("%d", &quantdd2);
    fflush(stdin);
    
    printf("\nInforme o nome do terceiro candidato: ");
    gets(candidato03);
    printf("\nInforme a quantidade de votos:");
    scanf("%d", &quantdd3);
    fflush(stdin);

    int votosTotal = quantdd1 + quantdd2 + quantdd3;
    float perceCand1 = (quantdd1/(float)votosTotal) * 100;
    float perceCand2 = (quantdd2/(float)votosTotal) * 100;
    float perceCand3 = (quantdd3/(float)votosTotal) * 100;

    printf("O percentual de votos de %s e %.2f%%\n", candidato01, perceCand1);
    printf("O percentual de votos de %s e %.2f%%\n", candidato02, perceCand2);
    printf("O percentual de votos de %s e %.2f%%\n", candidato03, perceCand3);
}
