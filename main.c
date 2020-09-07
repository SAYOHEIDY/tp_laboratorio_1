#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"

int main(void)
{
    char opcion;
    char seguir = 's';
    char confirma;
    float a;
    float b;
    float resultado;
    float resultaFactorial2;
    do
    {
        system("cls");

        printf("**** Menu de opciones ****\n\n");
        printf("a sumar\n");
        printf("b restar\n");
        printf("c multiplicar\n");
        printf("d dividir\n");
        printf("e factorial\n");
        printf("f salir\n");
        printf("Ingrese opcion: ");
        fflush(stdin);
        opcion = tolower(getchar());

        switch(opcion)
        {
            case 'a':
                system("cls");
                printf("****SUMA****\n");
                a = getFloat("ingrese numero 1: ");
                b = getFloat("ingrese numero 2: ");
                resultado = sumar( a, b );
                printf("\n%.2f + %.2f = %.2f\n", a, b, resultado);

                break;
            case 'b':
                system("cls");
                printf("****RESTAR****\n");
                a = getFloat("ingrese numero 1: ");
                b = getFloat("ingrese numero 2: ");
                resultado = restar( a, b );
                printf("\n%.2f - %.2f = %.2f\n", a, b, resultado);

                break;
            case 'c':
                system("cls");
                printf("****MULTIPLICAR****\n");
                a = getFloat("ingrese numero 1: ");
                b = getFloat("ingrese numero 2: ");
                resultado = multiplicar( a, b );
                printf("\n%.2f * %.2f = %.2f\n", a, b, resultado);

                break;
            case 'd':
                system("cls");
                printf("****DIVIDIR****\n");
                a = getFloat("ingrese numero 1: ");
                b = getFloat("ingrese numero 2: ");
                resultado = dividir( a, b );
                if(resultado == -1)
                {
                    printf("No se puede dividir entre 0\n");
                }
                else
                {
                   printf("\n%.2f / %.2f = %.2f\n", a, b, resultado);
                }


                break;
            case 'e':
                system("cls");
                printf("****Factorial****\n");
                a = getFloat("ingrese numero 1: ");
                b = getFloat("ingrese numero 2: ");
                resultado = factorial( a);
                resultaFactorial2 = factorial(b);
                printf("\n%.2f! = %.2f\n", a, resultado);
                printf("\n%.2f! = %.2f\n", b, resultaFactorial2);

                break;

            case 'f':
                printf("Esta seguro de salir?(s/n): ");
                fflush(stdin);
                scanf("%c", &confirma);
                confirma = tolower(confirma);
                if(confirma == 's')
                {
                  seguir = 'n';
                }
        }
        system("pause");

    }while(seguir == 's');

    return 0;
}



