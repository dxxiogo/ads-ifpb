/* 
O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome  ́fim’, que não deve ser processado. O programa deve
imprimir também a pontuação média dos candidatos.

1- Ler gabarito da prova ---
2- Ler nome do candidato e o gabarito do aluno ---
3- Calcular percentual (que será dado pela quantidade de acertos dividido pela quantidade de questões)
4-    
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int QUANTIDADE = 10;

void main(){
    int i, resposta, acertos = 0;
    char  gabarito[QUANTIDADE];
    char candidato[30], cartaoCand[QUANTIDADE];
    char fim[30] = "fim";
    printf("informe o gabarito:\n");
    for(i = 0; i < QUANTIDADE - 1; i ++){
        scanf("%c ", &gabarito[i]);
    }
    fflush(stdin); 
    do{
        printf("Informe o nome do candidato:\n");
        gets(candidato);
        printf("Informe o gabarito do candidato:\n");
        for(i = 0; i < QUANTIDADE; i++){
            scanf("%c", &cartaoCand[i]);
            fflush(stdin);
        }
        for(i = 0; i <= QUANTIDADE; i ++){
            if(gabarito[i] == cartaoCand[i]){
                acertos ++;
            }
        }
       float percentual = (float)acertos/ QUANTIDADE;
       printf("O candidato %s, teve %.f%% de acertos.\n", candidato, percentual * 100);
       fflush(stdin);
       resposta = strcmp(fim, candidato);
       getch();
       system("cls");
    }while(resposta != 0);
    printf("Fim do programa!");
}

