#include <stdio.h>

void main(){
    int numero;
    printf("Informe um numero:");
    scanf("%d", &numero);
    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("O antecessor de %d e %d, e seu sucessor e %d", numero, antecessor, sucessor);
}