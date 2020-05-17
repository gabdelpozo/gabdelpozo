/*
 * Alumno.h
 *
 *  Created on: 21 abr. 2020
 *      Author: gabriel
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

typedef struct
{
	int legajo;
	char nombre[51];
	float altura;
}Alumno;

int imprimirArrayAlumnos(Alumno* pArray, int limite);

#endif /* ALUMNO_H_ */
