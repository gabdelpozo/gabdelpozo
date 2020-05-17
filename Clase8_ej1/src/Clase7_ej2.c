#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"



int main(void) {

	int edad;

	if(utn_getNumero(&edad, "\nEdad? ","\nError", 0,200,2) == 0)
	{
		printf("\nLa edad es %d",edad);
	}
	return EXIT_SUCCESS;
}





