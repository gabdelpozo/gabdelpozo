#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#define QTY_ALUMNOS 1000


int main(void)
{
	Alumno auxiliar;
	Alumno arrayAlumnos[QTY_ALUMNOS];


	auxiliar.altura = 2.04;
	auxiliar.legajo = 25;
	strcpy(auxiliar.nombre,"JUAN");
	auxiliar.isEmpty = 0;

	//printf("Nombre: %s - Legajo: %d - Altura: %f",auxiliar.nombre,auxiliar.legajo,auxiliar.altura);

	arrayAlumnos[14] = auxiliar;

	imprimirArrayAlumnos(arrayAlumnos,QTY_ALUMNOS);

	return EXIT_SUCCESS;
}

