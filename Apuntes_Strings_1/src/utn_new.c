/*
 * utn_new.c
 *
 *  Created on: 17 abr. 2020
 *      Author: gabriel
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn_new.h"

/*
 *\brief
 *\param pResultado puntero al espacio de memoria donde se dejara el resultado de la funcion
 *\return retorna 0(exito) si se obtiene una cadena y -1(error) si no.
 *
 */
static int getInt(int *pResultado)
{
	int retorno=-1;
	char bufferString[50];

	if(	pResultado != NULL &&
		myGets(bufferString,sizeof(bufferString) == 0) &&
		esNumerica(bufferString))
	{
		retorno=0;
		*pResultado = atoi(bufferString);

	}
	return retorno;
}
/*
 *\brief Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 *	     un maximo de 'longitud -1' caracteres.
 *\param pResultado puntero al espacio de memoria donde se copiara la cadena obtenida
 *\param longitud define el tamaño de cadena
 *\return retorna 0(exito) si se obtiene una cadena y -1(error) si no.
 *
 */

static int myGets(char* cadena, int longitud)
{
	int retorno = -1;
	char bufferString[4096];

	if(cadena != NULL && longitud > 0)
	{
		__fpurge(stdin);
		if (fgets(bufferString,sizeof(bufferString),stdin) != NULL)
		{
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n')
			{
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}
			if(strnlen(bufferString,sizeof(bufferString)) <= longitud)
			{
				strncpy(cadena,bufferString,longitud);
				retorno=0;
			}

		}

	}
	return retorno;

}

/*
 *\brief Verifica si la cadena ingresada es numerica
 *\param cadena Cadena de caracteres a ser analizada
 *\return retorna 1 (verdadero) si la cadena es numerica y 0 (falso) si no lo es
 *
 */

static int esNumerica(char* cadena, int limite)
{
	int retorno = 1; // VERDADERO
	int i;
	for(i=0;i<limite && cadena[i] != '\0';i++)
	{
		if(i==0 && (cadena[i] == '+' || cadena[i] == '-'))
		{
			continue;
		}
		if(cadena[i] > '9' || cadena[i] < '0')
		{
			retorno =0;
			break;
		}
	}
	return retorno;
}
/*
 *\brief Solicita un numero al usuario, luego de verificarlo devuelve el resultado
 *\param pResultado Puntero al espacio de memoria donde se dejara elresultado de la
 *			funcion
 *\param mensaje Es el mensaje a ser mostrado
 *\param mensajeError Es el mensaje de Error a ser mostrado
 *\param minimo Es el numero minimo a ser aceptado
 *\param maximo Es el numero maximo a ser aceptado
 *\return Retorna 0 si se obtuvo el numero y -1 si no
 */

static int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

		do
		{
			printf("%s",mensaje);
			if( getInt(&bufferInt) == 0 &&
				bufferInt >= minimo &&
				bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			reintentos--;
			printf("%s",mensajeError);
		}while(reintentos >= 0);

	return retorno;
}
