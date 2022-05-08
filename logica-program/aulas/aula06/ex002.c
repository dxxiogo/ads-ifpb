#include <stdio.h>

const float GUINCHE = 5;
const int TEMPO_CHECKIN = 15;

void main(){
    int posFila;
    printf("Informe a posicao de Carlos na fila:");
    scanf("%d", &posFila);
    int check_in = posFila/GUINCHE;
    int guincheAtende = posFila%GUINCHE;
    int tempoFila = (posFila%GUINCHE) * TEMPO_CHECKIN;
    int horas = tempoFila/60;
    int minutos = (tempoFila%60);
    printf("O guinche que Carlos sera atendido e o %d\n", guincheAtende);
    printf("Ele levara %d horas e %d minutos", horas, minutos);
}