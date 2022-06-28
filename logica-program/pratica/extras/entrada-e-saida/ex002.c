#include <stdio.h>
 
 void main(){
     float n1, n2, n3;
     int peso1, peso2, peso3;
     printf("Digite 3 numeros:");
     scanf("%f %f %f", &n1, &n2, &n3);
     printf("Digite respectivamente o peso de cada numero:");
     scanf("%d %d %d", &peso1, &peso2, &peso3);
     float media = (n1*peso1+n2*peso2+n3*peso3)/ (peso1+ peso2+ peso3);
     printf("A media e: %.2f", media);
 }