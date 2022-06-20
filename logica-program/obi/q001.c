#include <stdio.h>

int main(){
    int M, A, B;
    printf("Informe a idade de Monica: ");
    scanf("%d", &M);
    printf("Informe a idade do primeiro filho: ");
    scanf("%d", &A);
    printf("Informe a idade do segundo filho: ");
    scanf("%d", &B);
    int maisVelho = M - A - B;
    printf("%d", maisVelho);
    return 0;
}