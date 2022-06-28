#include <stdio.h>

void main(){
    int n1, n2, n3, n4, n5, segundoMaior;
    printf("Informe cinco numeros:");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if(n5 > n4 && n4 > n3 && n3 > n2 && n2 > n1){
        printf("O numero %d e o segundo maior numero informado, na quarta ordem.", n4);
    } else if(n4 > n5 && n5 > n3 && n3 > n2 && n2 >n1){
        printf("o numero %d e o segundo maior numero informado, na quinta ordem.", n5);
    } else if(n2 > n3 && n3 > n5 && n5 > n4 && n4 > n1){
        printf("o numero %d e o segundo maior numero informado, na terceira ordem.", n3);
    }
}