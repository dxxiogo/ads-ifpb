#include <stdio.h>

const int DIAS_TRABALHADOS = 180;

void main(){
    int pedreiros, ajudantes;
    float diaria;
    printf("Informe o valor da quantidade de pedreiros, e a quantidade de ajudantes:");
    scanf("%d %d", &pedreiros, &ajudantes);
    printf("Infome o valor da diaria do pedreiro:");
    scanf("%f", &diaria);
    float diaria_pedreiro = (diaria * pedreiros) * DIAS_TRABALHADOS;
    float diaria_ajudante = (diaria/2 * ajudantes) * DIAS_TRABALHADOS;
    float valor_final =  diaria_pedreiro + diaria_ajudante;
    printf("Lazaro gastou R$%.2f com a mao de obra", valor_final);
}