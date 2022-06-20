#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char item[20];
    int condicao, quantidade = 0;
    float preco, valor = 0;
    do{
        printf("Informe o nome do item: ");
        gets(item);
        fflush(stdin);
        printf("\nInforme a quantidade: ");
        scanf("%d", &quantidade);
        printf("\nInforme o preco do unitario do item: ");
        scanf("%f", &preco);
        valor += preco * quantidade;
        printf("Deseja continuar?\n1- Sim\n2- Nao\n");
        scanf("%d", &condicao);
        system("cls");
    }while(condicao != 2);
    float precoAprazo = valor * 15/100;
    printf("O valor da compra a vista e %.2f, e a prazo %.2f.", valor, precoAprazo);
    printf("Fim do programa!");

}