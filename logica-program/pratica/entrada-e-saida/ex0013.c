// Ler o valor  em KB e calcular o valor em bits, bytes MB e GB

#include <stdio.h>

void main(){
    int valorKB;
    printf("Infome o valor em KB:");
    scanf("%d", &valorKB);
    int valorBit = valorKB * 1024 * 8;
    int valorByte = valorKB * 1024;
    int valorMB = valorKB/1024;
    int valorGB = valorKB/1024/1024;
    printf("O valor de %d Kb e:\n %d bits\n %d bytes\n %d MB, %dGB",valorKB, valorBit, valorByte, valorMB, valorGB) ;
}