#include <stdio.h>

void main(){
	float n1, n2, n3;
	printf("Digite as tres notas do aluno:");
	scanf("%f%f%F", &n1, &n2, &n3);
	float media = (&n1 + &n2 + &n3)/3;
	printf("A media preliminar do aluno: %f", media);
}