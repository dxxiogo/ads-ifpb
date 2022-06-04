#include<stdio.h>

void main(){
    int horas, minutos, fuso_horario,  hora_atual;
    printf("Informe a hora e o minutos:");
    scanf("%d %d", &horas, &minutos);
    printf("Informe o fuso horario:");
    scanf("%d", &fuso_horario);
    if(fuso_horario > 0){
        hora_atual = fuso_horario + horas;
        printf("A hora atual e %dh %d minutos", hora_atual, minutos);
    } else if(fuso_horario < 0){
        hora_atual = horas - fuso_horario;
        printf("%d", hora_atual);
    }
}