#include <stdio.h>

void main(){
    char estadoCivil;
    printf("Informe seu estado civil:\nS para solteiro\nC para casado\nD para divorciado\nV para viuvo\n");
    scanf("%c",&estadoCivil);
    switch(estadoCivil){
        case 'S':
            printf("O usuario e solteiro.");
            break;
        case 'C':
            printf("O usuario e casado.");
            break;
        case 'D':    
            printf("O usuario e divorciado");
            break;
        case 'V':
            printf("O usuario e viuvo");    
            break;
        default:
            printf("Estado civil invalido");    
    }
}