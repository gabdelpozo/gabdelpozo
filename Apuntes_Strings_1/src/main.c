#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn_new.h"

int main(void)
{
	int edad;

	if(utn_getNumero(&edad,"\n Nombre?","\n Error",0,200,2) == 0)
	{
		printf("\n La edad es %d",edad);
	}
	return EXIT_SUCCESS;
}

