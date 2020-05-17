/*
 * Ejercicio 1:
 * Escribir la funcion calcularMayor(). La funcion debe recibir dos
 * numeros int y devolver por referencia, el numero mayor.
 * La funcion debe retornar un 1 si encontro un mayor, o un 0
 * si ambos numeros son iguales.
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int resultado;
	int num1,num2;


	// Pedir dos numeros al usuario con utn_getNumber() y guardarlos
	// en num 1 y num 2
	utn_getNumero(&num1,"Ingrese primer numero:\n","Error el numero debe ser entre 0 y 199\n",0,199,2);
	utn_getNumero(&num2,"Ingrese segundo numero:\n","Error el numero debe ser entre 0 y 199\n",0,199,2);

	// luego llamo a la funcion calcularMayor()
	if(calcularMayor(&resultado,num1,num2)==0)
	{
		printf("Los numeros son iguales\n");
	}
	else
	{
		printf("El mayor es:%d\n",resultado);
	}

	return EXIT_SUCCESS;
}


