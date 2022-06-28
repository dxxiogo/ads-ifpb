#include <stdio.h>
const float PI = 3.14;

void main(){
    float raio;
    printf("informe o valor do raio:");
    scanf("%f", &raio);
    float comprimento = 2 * PI * raio;
    float area = PI * pow(raio, 2);
    printf("O comprimento e area respectivamente sera: %.2f %.2f", comprimento, area); 
}