#include <stdio.h>
#include <math.h>

void main(){
    int a, b , c;
    printf("informe o valor de a, b e c da equacao:");
    scanf("%d %d %d", &a, &b, &c);
    int delta = pow(b, 2) - 4 * a * c;
    if(delta >= 0){
        float raiz1= (- b + sqrt(delta))/2 * a;
        float raiz2 = (- b - sqrt(delta))/ 2 * a;
        printf("As raizes da equacao sao %.f e %f", raiz1, raiz2);
    } else{
        printf("A equacao nao possui raizes reais");
    }
}