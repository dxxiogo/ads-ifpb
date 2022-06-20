#include <stdio.h>

void main(){
    int hora, minutos, fuso, horaAtual;
    printf("Informe a hora e os minutos atuais: ");
    scanf("%d %d", &hora, &minutos);
    printf("\nInforme o fuso horario: ");
    scanf("%d", &fuso);
    if(fuso > 0 ){
        if(hora + fuso > 23){
            horaAtual =  (hora + fuso) - 24;
            printf("E exatamente %d horas e %d minutos.", horaAtual, minutos);
        } else {
            horaAtual = hora + fuso;
            printf("E exatamente %d horas e %d minutos.", horaAtual, minutos);
        }
    }
    if(fuso < 0){
        if(hora - fuso <= 0){
            horaAtual = 24 - (fuso + hora);
            printf("E exatamente %d horas e %d minutos.", horaAtual, minutos);
         } else {
            horaAtual = hora - fuso;
            printf("E exatamente %d horas e %d minutos.", horaAtual, minutos);
        }
    }
    if(fuso == 0){
         printf("E exatamente %d horas e %d minutos.", hora, minutos);
    }
}