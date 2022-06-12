#include<stdio.h>
#include <string.h>

const int QUANTIDADE = 5;
void main(){
        char maisPesado[20], menosPesado[20], boi[20];
        int cont;
        float peso, menorPeso = 0;
        float maiorPeso = 0;
        printf("Informe o nome do boi: ");
        gets(boi);
        printf("\nInforme o peso: ");
        scanf("%f", &peso);
        fflush(stdin);
        for(cont = 1; cont < QUANTIDADE; cont++){
            if(peso >= maiorPeso){
            maiorPeso = peso;
            strcpy(maisPesado, boi);
             printf(maisPesado);   
            }else if(peso <= menorPeso){
                    menorPeso = peso;
                    strcpy(menosPesado, boi);
                    printf(menosPesado);
                    }         
            printf("Informe o nome do proximo boi: ");
            gets(boi);
            printf("\nInforme o peso: ");
            scanf("%f", &peso);
            fflush(stdin);   
            }
        printf("%s e o boi mais pesado, %s e o boi mais leve", maisPesado, menosPesado);
}