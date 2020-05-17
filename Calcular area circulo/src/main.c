/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaración de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el código repetido y ayuda a que
*    el mismo sea mas legible
*   -La función debería comenzar indicando el objetivo que persigue y el
*    significado de sus parámetros.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main()
{
	setbuf(stdout,NULL);

	float num1;
	float num2 = 3.14;
	float resultado;
	int flag = 1;
	char continuar;

	while(flag==1)
	{
		num1 = getRadio("Ingrese el radio del circulo: \n");

		if(num1>0)
		{
		resultado = calcularArea(num1,num2,resultado);
		}

		printf("\nDesea seguir calculando? s/n\n");
		scanf("%s",&continuar);
		if(continuar=='s')
		{
			flag=1;
		}
		else
		{
			break;
		}
	}

	return 0;
}

