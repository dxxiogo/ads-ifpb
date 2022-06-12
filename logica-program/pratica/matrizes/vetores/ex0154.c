#include <stdio.h>

void main(){
    int contagem[10];
    int i, m;
    printf("Informe dez numeros: ");
    for(i = 9; i >= 0; i--){
        scanf("%d", &contagem[i]);
    }
    for(m = 0; m < 10; m++){
        printf("%d ", contagem[m]);
    }
}