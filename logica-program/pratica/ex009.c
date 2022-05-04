#include <stdio.h>

void main(){
    float distancia, preco;
    printf("Digite a distancia percorrida:");
    scanf("%f", &distancia);
    printf("Digite o preco atual do combustivel: ");
    scanf("%f", &preco);
    float divKm = distancia/14;
    float valor = divKm * preco;
    printf("Joao devera gastar R$%.2f de combustivel na viagem", valor);

}