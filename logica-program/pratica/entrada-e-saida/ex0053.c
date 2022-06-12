#include <stdio.h>

void main(){
    int mesInicio, anoInicio, penaMes, penaAno;
    printf("Informe o mes e ano de inicio da pena: ");
    scanf("%d %d", &mesInicio, &anoInicio);
    printf("Informe o tamanho da pena em meses e ano: ");
    scanf("%d %d", &penaMes, &penaAno);
    int penaEmAnos = anoInicio + penaAno; 
    float penaEmMeses = (pena + mesInicio)%12.0;
    printf("A pena terá fim %d no mes %f", penaEmAnos, penaEmMeses);
}