#include <stdio.h>

void main(){
    float pesoPlayer1, pesoPlayer2, pesoPlayer3, pesoPlayer4, pesoPlayer5, pesoPlayer6, pesoPlayer7, pesoPlayer8;
    float alturaPlayer1, alturaPlayer2, alturaPlayer3, alturaPlayer4, alturaPlayer5, alturaPlayer6, alturaPlayer7, alturaPlayer8;
    printf("Informe o peso dos jogadores da primeira dupla:");
    scanf("%f %f", &pesoPlayer1, &pesoPlayer2);
     printf("Informe o peso dos jogadores da segunda dupla:");
    scanf("%f %f", &pesoPlayer3, &pesoPlayer4);
    printf("Informe o peso dos jogadores da terceira dupla:");
    scanf("%f %f", &pesoPlayer5, &pesoPlayer6);
    printf("Informe o peso dos jogadores da quarta dupla:");
    scanf("%f %f", &pesoPlayer7, &pesoPlayer8);
    printf("Informe a altura dos jogadores da primeira dupla:");
    scanf("%f %f", &alturaPlayer1, &alturaPlayer2);
     printf("Informe a altura dos jogadores da segunda dupla:");
    scanf("%f %f", &alturaPlayer3, &alturaPlayer4);
    printf("Informe a altura dos jogadores da terceira dupla:");
    scanf("%f %f", &alturaPlayer5, &alturaPlayer6);
    printf("Informe a altura dos jogadores da quarta dupla:");
    scanf("%f %f", &alturaPlayer7, &alturaPlayer8);
    
    float pesoMedioD1 = (pesoPlayer1 + pesoPlayer2)/2;
    float alturaMediaD1 = (alturaPlayer1 + alturaPlayer2)/2;
    printf("O peso media da primeira dupla e %.2f\n A altura media da primeira dupla e %.2f\n", pesoMedioD1, alturaMediaD1);

   float pesoMedioD2 = (pesoPlayer3 + pesoPlayer4)/2;
    float alturaMediaD2 = (alturaPlayer3 + alturaPlayer4)/2;
    printf("O peso media da segunda dupla e %.2f\n A altura media da primeira dupla e %.2f\n", pesoMedioD2, alturaMediaD2);

    float pesoMedioD3 = (pesoPlayer5 + pesoPlayer6)/2;
    float alturaMediaD3 = (alturaPlayer5 + alturaPlayer6)/2;
    printf("O peso media da terceira dupla e %.2f\n A altura media da primeira dupla e %.2f\n", pesoMedioD3, alturaMediaD3);

    float pesoMedioD4 = (pesoPlayer7 + pesoPlayer8)/2;
    float alturaMediaD4 = (alturaPlayer7 + alturaPlayer8)/2;
    printf("O peso media da quarta dupla e %.2f\n A altura media da primeira dupla e %.2f\n", pesoMedioD4, alturaMediaD4);

    float pesoMedioGeral = (pesoPlayer1 + pesoPlayer2 + pesoPlayer3 + pesoPlayer4 + pesoPlayer5 + pesoPlayer6 + pesoPlayer7 + pesoPlayer8)/8;
     float alturaMediaGeral = (alturaPlayer1 + alturaPlayer2 + alturaPlayer3 + alturaPlayer4 + alturaPlayer5 + alturaPlayer6 + alturaPlayer7 + alturaPlayer8)/8;

     printf("A peso medio geral e %.2f\n A altura media geral e %.2f", pesoMedioGeral, alturaMediaGeral);


    }