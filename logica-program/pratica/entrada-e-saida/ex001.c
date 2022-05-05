#include <stdio.h>

void main(){
    float nota1, nota2, nota3;
    printf("Digite respectivamente as 3 notas dos aluno:");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media = (nota1 + nota2 + nota3)/3;
    printf("A media do aluno e %.1f", media);
}