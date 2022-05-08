#include <stdio.h>
const int KB = 1024;

void main(){
    int tamanho, taxa;
    printf("Informe o tamanho do arquivo a taxa de dowload");
    scanf("%d %d", &tamanho, &taxa);
    int tamanhoKB = tamanho * 1024;
    int totalSeg = tamanhoKB/taxa;
    int horas = totalSeg/3600;
    int resto = totalSeg % 3600;
    int minutos = resto /60;
    int segundos = resto % 60;
    printf("%d horas, %d minutos, %d segundos", horas, minutos, segundos);
}