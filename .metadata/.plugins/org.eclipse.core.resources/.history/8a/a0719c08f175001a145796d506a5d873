#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int sumarDosNumeros(int num1, int num2, int *resultado)
{
    *resultado =num1 + num2;
    return 0;
}

int restarDosNumeros(int num1, int num2, int *resultado)
{
    *resultado = num1 - num2;
    return 0;
}

int dividirDosNumeros(int num1, int num2, float *resultado)
{
    int ret = -1;
    if (num2 == 0)
    {
        ret = -1;
    }else
        {
            *resultado = (float)num1/num2;
            ret = 0;
        }
    return ret;
}

int multiplicarDosNumeros(int num1, int num2, int *resultado)
{
    *resultado = num1 * num2;
    return 0;
}

int factorialDeUnNumero(int num1, int *resultado)
{
    int i;
    int ret = 0;
    long int buffer;
    buffer = num1;
    num1--;
    if (num1<0)
    {
        ret = -1;
    }else if (num1 == 0)
        {
            buffer = 1;
        }else
            {
                for (i=1;i<num1;num1--)
                {
                    buffer *= num1;
                }
            }
    *resultado = buffer;
    return ret;
}

int MenuCalculadora (int a, int b)
{
    printf("1. Ingresar 1er operando (A=%d) \n2. Ingresar 2do operando (B=%d) \n3. Calcular todas las operaciones \n4. Informar resultados \n5. Salir\n",a,b);
    return 0;
}

int imprimirResultados(int suma, int resta, float division,int divisionError, int multiplicacion, long int factorial1, long int factorial2)
{
    printf("El resultado de A+B es: %d \nEl resultado de A-B es: %d\n",suma, resta);
    if (!divisionError)
    {
        printf("El resultado de A/B es: %.2f\n",division);
    }else
        {
            printf("No es posible dividir por cero\n");
        }
    printf("El resultado de A*B es: %d\n",multiplicacion);
    printf("El factorial de A es: %ld y El factorial de B es: %ld\n",factorial1,factorial2);
    return 0;
}











