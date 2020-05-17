#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int edad;
	int peso;
	int respuesta;
	char letra;

	respuesta = utn_getCaracter(&letra,"Letra?\n","Error la letra debe ser desde A a J\n",'A','J',1);
	if(respuesta == 0)
	{
		printf("La letra es: %c\n",letra);
	}
	else
	{
		printf("ERROR");
	}

	respuesta = utn_getNumero(&edad,"Edad?\n","Error la edad debe ser desde 0 a 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d",edad);
	}
	else
	{
		printf("ERROR");
	}

	respuesta = utn_getNumero(&peso,"Peso?\n","Error peso debe ser desde 0 a 500\n",0,500,3);
	if(respuesta == 0)
	{
		printf("El peso es: %d",peso);
	}
	else
	{
		printf("ERROR");
	}




	return EXIT_SUCCESS;
}
