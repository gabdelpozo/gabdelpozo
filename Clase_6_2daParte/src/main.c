#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	char nombre[11]="JUAN"; // '\0'
	char auxiliar[11]; // '\0'

	strcpy(nombre,"MARIA");
	strcpy(auxiliar,nombre);

	strncpy(auxiilar,nombre,sizeof(auxiliar));
	return EXIT_SUCCESS;
}

