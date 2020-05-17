/*
 * Alumno.c
 *
 *  Created on: 21 abr. 2020
 *      Author: gabriel
 */
#include "Alumno.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * \brief Imprime el array de alumnos
 * \param pArray
 */
int imprimirArrayAlumnos(Alumno* pArray, int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			if(pArray[i].isEmpty == 0)
			{
				printf("\n Nombre: %s - Legajo: %d - Altura: %f",auxiliar.nombre,auxiliar.legajo,auxiliar.altura);
			}
		}
		retorno = 0;
	}
	return retorno;
}
