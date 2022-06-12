#include <stdio.h>

void main(){
    int i, m;
    int matriz[3][5] = {1, 2, 3 , 4 ,5 , 
                                 6, 7, 8, 9, 10,
                                 11, 12, 13, 14, 15};
    for(i= 0; i < 3; i++){
         for(m= 0; m < 5; m++){
             printf("%d ", matriz[i][m]);
         }           
        printf("\n");
    }                            
}