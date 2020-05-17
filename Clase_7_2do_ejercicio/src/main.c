/*
 * Ejercicio 2:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define MONTH_DAYS 31

int main(void) {
	float temperaturas[MONTH_DAYS];
	float temperatura;
	int menu;
	int i;

	for(i=0; i<MONTH_DAYS; i++)
		{
			if(utn_getFlotante(&temperatura,"Ingrese temperatura:","Esta temperatura no va\n",1,120,3)==0)
			//if(utn_getNumero(&  (edades[i]) ,"Ingrese edad:","Esta edad no va\n",1,120,3)==0)
			{
				 //en edades escribo edad en la posicion "i"
				 temperaturas[i] = temperatura; // guardo edad en el casillero "i"
				 printf("\n%f",temperatura);
			}
			else
			{
				printf("Eso no es una temperatura, abrazo'\n");
			}
		}

	return EXIT_SUCCESS;
}
