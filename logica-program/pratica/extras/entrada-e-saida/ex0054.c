#include <stdio.h>

const TEMPO_ENTREGA = 20;

void main(){
    int horas, minutos;
    printf("Informe a hora e os minutos que Joaquim saiu de Cajazeiras:");
    scanf("%d %d", &horas, &minutos);
    int minutosTotal = (horas * 60) + TEMPO_ENTREGA + 50;
    int conversaoSeg = minutosTotal * 60;
    int tempoHora = conversaoSeg/3600;
    float resto = conversaoSeg % 3600;
    float tempoMinuto = resto / 60;
    printf("O tempo que Joaquim chegara em em Patos e %dh e %.f minutos.", tempoHora, tempoMinuto);
}