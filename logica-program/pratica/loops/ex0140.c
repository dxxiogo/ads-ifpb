#include<stdio.h>

void main()
{
   int num, pares = 0;
   int impares = 0;
   int qntddPares = 0;
   int qntddImpares = 0;
  do{ 
        printf("Informe um numero:");
        scanf("%d", &num);
        if(num%2 == 0){
            if(num != 0){
                pares += num;
                qntddPares ++;
            }
        } else {
            impares += num;
            qntddImpares ++;
      }
    } while(num != 0);
    float mediaPar = pares/(float)qntddPares;
    float mediaImpar;
    if(impares == 0 && qntddImpares == 0){
        mediaImpar = 0;
    } else{
        mediaImpar = (float)impares/qntddImpares;
    }
    printf("A media de todos os pares e %.2f\nA media de todos os impares e %.2f", mediaPar, mediaImpar);
}