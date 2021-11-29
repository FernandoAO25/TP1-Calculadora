#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "funcion.h"
#include "color.h"
#include "menu.h"




/*Funcion que muestra el menu*/

void mostrarMenu (int a, int b){
    
    printf("\n");
    
    
   gotoxy(5,9);printf ("***** ***** ********************************************** ***** ***** \n" );
   gotoxy(5,10);printf("***** ***** *****************     MENU     *************** ***** ***** \n" );
   gotoxy(5,11);printf("   ***** ** ********************************************** ** *****    \n" );
   gotoxy(5,12);printf("   ***** ** ****                                      **** ** *****    \n" );
   gotoxy(5,13);printf("***** ***** **** 1-> INGRESAR 1ER OPERANDO %d          **** ***** *****\n",a);
   gotoxy(5,14);printf("***** ***** **** 2-> INGRESAR 2DO OPERANDO %d          **** ***** *****\n",b);
   gotoxy(5,15);printf("   ***** ** **** 3-> CALCULAR LA SUMA                 **** ** *****    \n" );
   gotoxy(5,16);printf("   ***** ** **** 4-> CALCULAR LA RESTA                **** ** *****    \n" );
   gotoxy(5,17);printf("***** ***** **** 5-> CALCULAR LA MULTIPLICACION       **** ***** ***** \n" );
   gotoxy(5,18);printf("***** ***** **** 6-> CALCULAR LA DIVISION             **** ***** ***** \n" );
   gotoxy(5,19);printf("   ***** ** **** 7-> CALCULAR EL FACTORIAL            **** ** *****    \n" );
   gotoxy(5,20);printf("   ***** ** **** 8-> CALCULAR TODAS LAS OPERACIONES   **** ** *****    \n" );
   gotoxy(5,21);printf("***** ***** **** 9-> SALIR                            **** ***** ***** \n" );
   gotoxy(5,22);printf("***** ***** ****                                      **** ***** ***** \n" );
   gotoxy(5,23);printf("   ***** ** ********************************************** ** *****    \n" );
   gotoxy(5,24);printf("   ***** ** ********************************************** ** *****    \n" );
}

/*Funcion de mensaje de bienvenida*/

void mensajeBien(){

    printf("\n");
    printf("*******************************************************************************\n");
    printf("****  **  **  **  **    *BIENVENIDO A MI CALCULADORA*      **  **  **  **  ****\n");
    printf("** **  **  **  **  **       -TRABAJO PRACTICO-            **  **  **  **  ** **\n");
    printf("**  **  **  **  **  **       INTEGRANTES:                **  **  **  **  **  **\n");
    printf("**   **  **  **  **  **     *FERNANDO ARIEL ORELLANA    **  **  **  **  **   **\n");
    printf("**    **  **  **  **  **    *FLORENCIA MACARENA RUIZ   **  **  **  **  **    **\n");
    printf("*******************************************************************************\n");
    }





// Delay del menu
 void retardo1(){
     for (int i = 0; i < 4000; i++){
         for (int j=0; j<3000; j++){
         }
      }
   }

//Delay de efectos
   void retardo2(){
     for (int i = 0; i < 15000; i++){
         for (int j=0; j<5000; j++){
         }
      }
   }

//Efecto distorcion de entrada y error al ingresar datos incorrectos
 void efecto1(){
    
for (int i = 0; i < 80; i++)
{
    for (int j = 0; j < i; j++){
        
    printf(":D :D :D :D :D");
    Sleep(0.1);
    }  
  }
 }
 //Efecto carga de entrada del programa

 void mensajeInicial(){
     gotoxy(40,13);
        printf(":D");
        printf("\n");
        printf("\n");
        getch();//Remplaza al system("pause"), es lo mismo pero sin mensaje.
     system("cls");

     for(int i=0; i<40; i++){
         int j,p,m;
         gotoxy(23,10);
         printf("cargando....\n");
         gotoxy(23,11);
         printf("========================================\n");
         gotoxy(23,12);
         printf("========================================\n");
         gotoxy(23,13);
         for (j = 0; j < i; j++){
             printf(">");
         }
         printf("\n");
         gotoxy(23,14);
         for ( p = 0; p < i; p++){
             printf(">");
         }
         printf("\n");
         gotoxy(23,15);
         for ( m = 0; m < i; m++){
             printf(">");
         }
         gotoxy(23,16);
         printf("========================================\n");
         gotoxy(23,17);
         printf("========================================\n");
         retardo1();
         system("cls");
       }
    }

    //Efecto distorcion de error
  void efecto2(){
    
for (int i = 80; i > 0; i--)
{
    for (int j = i; j > 0; j--){
        
    printf("X X X X X X");
    Sleep(0.1);
    }  
  }
 }

//Efecto carga del cierre de programa
 void final(){

     for(int i=40; i>0; i--){
         int j,p,m;
         gotoxy(23,10);
         printf("cargando....\n");
         gotoxy(23,11);
         printf("========================================\n");
         gotoxy(23,12);
         printf("========================================\n");
         gotoxy(23,13);
         for (j = i; j > 0; j--){
             printf("<");
         }
         printf("\n");
         gotoxy(23,14);
         for ( p = i; p > 0; p--){
             printf("<");
         }
         printf("\n");
         gotoxy(23,15);
         for ( m = i; m > 0; m--){
             printf("<");
         }
         gotoxy(23,16);
         printf("========================================\n");
         gotoxy(23,17);
         printf("========================================\n");
         retardo1();
         system("cls");
       }
 }
