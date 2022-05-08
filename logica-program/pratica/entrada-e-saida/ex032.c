#include <stdio.h>

const int KM_POR_L = 14;
const int L_POR_14KM = 1;

void main(){
    float distancia, precoGasolina;
    printf("Informe a dstancia e o valor da gasolina por litro respectivamente:");
    scanf("%f %f", &distancia, &precoGasolina);
    int litrosGasolina = distancia/KM_POR_L;
    float valor =  litrosGasolina * precoGasolina;
    printf("Joao pagara R$%.2f por %dl de gasolina", valor, litrosGasolina);

}