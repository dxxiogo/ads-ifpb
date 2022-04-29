#include <stdio.h>
void main(){
    float nota1, nota2, nota3;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media = (nota1+ nota2 + nota3)/ 3;
    if(media <= 4){
        printf("O aluno esta reprovado!");
    } else if(media >= 5 && media <= 6){
        printf("O aluno está em recuperacao!");
    } else{
        printf("O aluno esta aprovado!");
    }
}