#include <stdio.h>
const int TEMPO_CONSULTA = 25;

void main(){
    int horas, minutos, senha;
    float tempoTotal;
    printf("Informe a hora e minutos que Ana chegou:");
    scanf("%d %d", &horas, &minutos);
    printf("Informe o numero da sua senha:");
    scanf("%d", &senha);
    float esperaConsulta = (senha * TEMPO_CONSULTA) - 25;
    float valorTotalMinutos = (minutos + esperaConsulta);
    if(valorTotalMinutos >= 60){
        tempoTotal = valorTotalMinutos/60 + horas;
        printf("Ana sera antendida %.2f minutos", tempoTotal);
    } else{
        printf("Ana sera antendida %dh e %.f minutos", horas, valorTotalMinutos);
    }
   
}