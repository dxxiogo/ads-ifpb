#include <stdio.h>

void main(){
    int n1, n2 ,n3;
    printf("Informe tres numeros distintos:");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2  && n2 > n3 || n3 > n2 && n2 > n1){
        printf("%d nao e nem maior nem menor", n2);
    } else if(n1 > n3 && n3 > n2 || n2 > n3 && n2 > n1){
           printf("%d nao e nem maior nem menor", n3);
    }else{
           printf("%d nao e nem maior nem menor", n1);
    }
}