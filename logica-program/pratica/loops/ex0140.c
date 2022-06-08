#include<stdio.h>

void main()
{
   int num, pares = 0;
   int impares = 0;
   int qntddPares = 0;
   int qntddImpares = 0;
   printf("Informe um numero:");
   scanf("%d", &num);
   while(num != 0){
        if(num%2 == 0){
        pares += num;
        qntddPares ++;
        } else {
            impares += num;
            qntddImpares ++;
      }
        printf("Informe um numero:");
        scanf("%d", &num);
    }
    float mediaPar = pares/(float)qntddPares;
    float mediaImpar = impares/(float)qntddImpares;
    printf("A media de todos os pares e %.2f\nA media de todos os impares e %d", mediaPar, mediaImpar);
}