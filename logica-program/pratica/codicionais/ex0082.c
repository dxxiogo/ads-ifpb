#include <stdio.h>

void main(){
    float nota1, nota2, nota3, provaFinal;
    printf("Informe as tres notas do aluno:");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media = (nota1 + nota2 + nota3)/3;
    if(media >= 4 && media <= 6){
        provaFinal = (25 - (3*media))/2;
        printf("O aluno esta em recuperacao final. Ele precisara de %.1f", provaFinal);
    }
    else if(media >= 7){
        printf("O aluno esta aprovado!");
      }
        else{
            printf("O aluno esta reprovado!");
        }
}