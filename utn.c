#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
*\brief Solicia un numero al ususario y devuelve el resultado
*\param mensaje Es el mensaje a ser mostrado
*\return El numero ingresado por el usuario
*/
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

/*
*\brief Solicia un numero al ususario y devuelve el resultado
*\param mensaje Es el mensaje a ser mostrado
*\return El numero ingresado por el usuario
*/
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s", mensaje);
    scanf("%f", &auxiliar);
    return auxiliar;
}
/*
*\brief Solicia un cartacter al ususario y devuelve el resultado
*\param mensaje Es el mensaje a ser mostrado
*\return El caracter ingresado por el usuario
*/
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &auxiliar);
    return auxiliar;
}
/*
*\brief suma dos numeros
*\param numero1 el primer operando de la suma
*\param numero2 el segundo operando de la suma
*\return la suma de dos operandos
*/
float sumar(float numero1, float numero2)
{
    return numero1 + numero2;
}
/*
*\brief resta dos numeros
*\param numero1 el primer operando de la resta
*\param numero2 el segundo operando de la resta
*\return la resta de dos operandos
*/
float restar(float numero1, float numero2)
{
    return numero1 - numero2;
}
/*
*\brief multiplicacion de  dos numeros
*\param numero1 es el multiplicando (es el factor que se encuentra arriba en la multiplicacion )
*\param numero2 es el multiplicador (es el factor que se encuentra debajo del multiplicando)
*\return el producto de la multiplicacion de las factores
*/
float multiplicar(float numero1, float numero2)
{
    return numero1 * numero2;
}
/*
*\brief division de  dos numeros
*\param numero1 es el dividendo
*\param numero2 es el divisor
*\return el cociente de la division del dividendo y el divisor
*/
float dividir(float numero1, float numero2)
{
    if(numero2 == 0)
    {
        return -1;
    }
    return (float) numero1/numero2;
}
/*
*\brief factorial de un numero
*\param numero entero positivo
*\return el factorial de un numero
*/
long factorial(float numero)
{
    if(numero == 0)
        return 1;
    else
        return(numero*factorial(numero -1));
}
