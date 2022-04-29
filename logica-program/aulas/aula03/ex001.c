#include <stdio.h>
#include <math.h>
const float PI = 3.14;    
void main(){
    float raio;
    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    float compri = 2 * PI * raio;
    printf("A area e: %.1f\n", area);
    printf("O comprimento e: %.2f", compri);
}
