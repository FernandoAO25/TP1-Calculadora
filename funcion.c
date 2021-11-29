#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "funcion.h"
#include "color.h"
#include "menu.h"



/*funcion que pide los numeros*/

int numeros(char mensaje []){
    printf("%s" , mensaje);
    int val = 0;
    scanf("%d", &val);
    return val;
}

/*funcion que calcula el factorial*/

double factorial(int nro){
   double  resultado = 1;
    for(int i =1 ; i <= nro ; i++ ){
        resultado = resultado * i;
        printf("\t\t\tFactorial: %d!, Resultado = %.2lf \n",i,resultado);
    }
    printf("\n");
    return (resultado);
}

/*función que calcula la suma*/

int suma(int a, int b){
    int resultado;
    resultado=a+b;
    return(resultado);
}

/*función que calcula la resta*/

int resta(int a, int b){

    int resultado;
    resultado=a-b;
    return(resultado);
}

/*función que calcula la multiplicacion*/

int multiplicacion(int a, int b){

    int resultado;
    resultado=a*b;
    return(resultado);
}

/*función que calcula la division*/

float division(float a, float b){

    float resultado;
    resultado=a/b;
    return(resultado);
}

/* Funcion gotoxy que nos ayuda a pocicionar 
el cursor en algun punto de la pantalla*/

void gotoxy(int x, int y){

// Controlador para la ventana y manipulacion de la consola
    HANDLE ventana;
    ventana = GetStdHandle(STD_OUTPUT_HANDLE);

//Objetode las coordenadas 
    COORD cordenadas;

// Redireccion de las variables 
    cordenadas.X = x;
    cordenadas.Y = y;

//Posicion de mensaje dentro de la consola
    SetConsoleCursorPosition(ventana,cordenadas);

}