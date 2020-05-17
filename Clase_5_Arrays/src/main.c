#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define EDADESSIZE 5

/*
// EJERICIO: Pedirle al usuario 5 edades y LUEGO
// imprimir las 5 edades. Definir un array de 5 posiciones.
// y usar la funcion utn_getNumero() para pedir los valores
*/
int main(void)
{
	int edad;
	int edades[EDADESSIZE];
	int i;
	for(i=0;i<EDADESSIZE;i++)
	{
		if(utn_getNumero(&edades[i],"Ingrese edad: ","Error de edad\n",1,99,2)==0)
		{
			printf("Se cargo la edad en la posicion %d\n",i);
		}
	}
	for(i=0;i<EDADESSIZE;i++)
	{
		printf("\nla edad es :%d - pos %d ",edades[i],i);
	}
	return EXIT_SUCCESS;
}
