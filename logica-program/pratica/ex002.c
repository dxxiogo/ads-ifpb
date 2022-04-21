//Directivos del preprocesador y Variables
#include<stdio.h>//librería
#define PI 3.1416// macro

int y = 10;//variable global

int main(){
    int x = 20;//variable local

    float suma = 0;// float va a armazenar numeros reales

    suma = PI + x;
    printf("La suma es: %.3f", suma); //%i para indicar que tipo de dato es.



    return 0;
}