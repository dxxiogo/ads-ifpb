#include <stdio.h>

void main(){
    int valorSeg;
    printf("Informe um valor em segundos: ");
    scanf("%d", &valorSeg);
    int horas = valorSeg/(float)3600;
    float resto = valorSeg%3600;
    int minutos = resto/60;
    int segundos = resto %60;
    printf("%d segundos e %d horas, %d segundos e %d segundos.", valorSeg, horas, minutos, segundos);
}