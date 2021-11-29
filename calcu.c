/*llamada a bibliotecas*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "funcion.h"
#include "color.h"
#include "menu.h"

/*programa principal: En ella usaremos las funciones
 para nuestra calculadora llamandolas para que nos 
 ayude a ajecutar correctamente nuestro programa principal 
 con las opciones del menu. pdt: solo calcula numeros enteros. */

int main()
{
    int seguir=0;
    int opcion=0;
    char numero[20];
    int resultado;
    int numA=0;
    int numB=0;

    //Animaciones de inicio.

    system("title Calculadora");
    system("cls");
    colorAll();
    mensajeInicial();
    system("cls");
    efecto1();
    system("cls");
    
   //Cartel de integrantes.
    colorMain();
    retardo2();
    mensajeBien();
    
    //Condicion para salir del while es que sea 9.
    while(seguir != 9 )
    {
        retardo2();
        mostrarMenu (numA, numB);//Funcion que muestra el menu.
        

        printf("\n");
        printf("\t\tIngrese alguna opci%cn del men%c: ",162,163);
        scanf("%s",numero);

        /* La función atoi ()
         se usa para convertir una cadena en un entero (int).*/
        opcion=atoi(numero);

        if(opcion!=9) {

        switch(opcion)
        {
            case 1://Pide el ingreso del valor de A.
            system("cls");
            colorMain();
            gotoxy(25,12);numA=numeros("Ingrese un valor A: "); 

            system("cls");
            gotoxy(25,5);printf(" Valor ingresado: %d   \n",numA);
                break;

            case 2://Pide el ingreso del valor de B.
            system("cls");
            colorMain();
            gotoxy(25,12);numB=numeros("Ingrese otro valor B: ");

            system("cls");
            gotoxy(25,5);printf(" Valor ingresado: %d   \n",numB);
                break;

            case 3://Calcula la suma de A+B.
            system("cls");
            colorSuma();
            gotoxy(25,5);printf("La operaci%cn %d+%d = %d\n",162,numA,numB,suma(numA,numB));
                break;

            case 4://Calcula la resta de A-B.
            system("cls");
            colorResta();
            gotoxy(25,5);printf("La operaci%cn %d-%d = %d\n",162,numA,numB,resta(numA,numB));
                break;

            case 5://Calcula la multiplicacion de A*B.
            system("cls");
            colorMulti();
            gotoxy(25,5);printf("La operaci%cn %d*%d = %d\n",162,numA,numB,multiplicacion(numA,numB));
                break;

            case 6://Calcula la division de A/B.
            system("cls");
            colorDividir();
            if (numB == 0){//Si el dividendo es igual a 0, salta un error.
                 gotoxy(25,5);printf("ERROR!!!\n\n\t\t\tNO SE PUEDE DIVIDIR POR 0.\n\n\t\t\tDO BETTER SABES!! :p");

            }else{         //Si el dividendo no es igual a 0, calcula la division.
                 gotoxy(25,5); printf("La operaci%cn %d/%d = %.2f\n",162,numA,numB,division(numA,numB));
            } 
            break;

            case 7: //Calcula el factorial de A o B.
            system("cls");
            colorFactori();
            if (numA > 0 && numA < 171){ //Si el valor de A es mayor a 0 y menor a 171, calcula el factorial de A.
                printf("\n");
                printf("\t\t\tEl factorial de %d es de: %.2lf\n",numA,factorial(numA));
                printf("\n");
                printf("\n");
                system("\tpause");
                system("cls");

            }else if(numB > 0 && numB < 171){ //Si el valor de A es igual a 0 y B menor a 171, calcula el factorial de B.
                printf("\n");
                printf("\t\t\tEL factorial de %d es de: %.2lf\n",numB,factorial(numB));
                printf("\n");
                printf("\n");
                system("pause");
                system("cls");
           
            }else{ //Si es un numero mayor a 171 sale alerta.
                gotoxy(10,5); printf("El factorial del numero ingresado es muy grande y da infinito.\n"); 
            }
            break;  

            case 8: //Calcula todas las opciones del menu.
            system("cls");
            colorAll();
            printf("\n");
            printf("\t\t\tSumando %d+%d = %d \n",numA,numB,suma(numA,numB));//Suma.
            printf("\n");
            printf("-------------------------------------------------------------------------------\n");
          
            printf("\t\t\tRestando %d-%d = %d \n",numA,numB, resta(numA,numB));//Resta.
            printf("\n");
            printf("-------------------------------------------------------------------------------\n");
            printf("\n");
            printf("\t\t\tMultiplicando %d*%d = %d \n",numA,numB,multiplicacion(numA,numB));//Multiplicacion.
            printf("\n");
            printf("-------------------------------------------------------------------------------\n");
           
             if (numB == 0){//Si B es igual a 0, sale el error.
                 printf("\n");
                 printf("\t\t\tERROR!!!\n\n\t\t\tNO SE PUEDE DIVIDIR POR 0.\n");
                 printf("\n");
                 printf("-------------------------------------------------------------------------------\n");
                
            }else{//Si B no es igual a 0, resuelve la division.
                 printf("\n");
                 printf("\t\t\tDividiendo %d/%d = %.2f \n",numA,numB,division(numA,numB));
                 printf("\n");
                 printf("-------------------------------------------------------------------------------\n");
                 
                 
            }
            if (numA < 171 ){//Si el valor de A es menor a 171, calcula su factorial.
                printf("\n");
                printf("\t\t\tEl factorial de %d es de: %.2lf\n",numA,factorial(numA));
                printf("\n");
                printf("-------------------------------------------------------------------------------\n");
            }else{//Si el valor de A es mayor a 171,sale error.
                printf("\n");
                printf("\tEl factorial del numero ingresado es muy grande y da infinito.\n"); 
                printf("\n");
                printf("-------------------------------------------------------------------------------\n");
            }
            if ( numB < 171){//Si el valor de B es menor a 171, calcula su factorial.
                printf("\t\t\tEL factorial de %d es de: %.2lf\n",numB,factorial(numB));
                printf("\n");
                printf("-------------------------------------------------------------------------------\n");
            }else{//Si el valor de B es mayor a 171,sale error.
                printf("\n");
                printf("\tEl factorial del numero ingresado es muy grande y da infinito.\n"); 
                printf("\n");
                printf("-------------------------------------------------------------------------------\n");
            }
            printf("\n");
            printf("\n");
            system("pause");
            system("cls");
                break;  
           
            default://En caso de algun valor que no pertenezca al menu o no se un numero, sale error.
            system("cls");
            colorErro();
            efecto2();
            system("cls");
            colorMain();
            printf("\n");
            gotoxy(25,2);
            printf("LA OPCION \"%s\"  ES INCORRECTA!!\n\n\t\tIngrese una opci%cn que este en el men%c.\n",numero,162,163);
            printf("\n");       
         }  

         }else {
        system("cls");
        seguir = 9;//Iguala a 9 para salir del while y muestra saludo.
        colorAll();
        final();

        system("cls");
        efecto1();

        system("cls");
        retardo2();
        colorMain();
        gotoxy(25,13);printf("GRACIAS POR USARME... ADIOOSS!!!  :D \n");//Saludito 
        printf("\n");
        printf("\n");
         getch();
        } 
      
    }
 
 return 0;
 
}
