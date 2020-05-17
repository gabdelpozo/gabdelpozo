#include <stdio.h>
#include <stdlib.h>

#define QTY_ALUMNOS 9

void printArray(int* pArray, int limite);
int ordenarArray(int* pArray, int limite);

int main(void)
{
	int edades[QTY_ALUMNOS] = {54,26,93,17,77,31,44,55,27};
	int respuesta;

	printArray(edades, QTY_ALUMNOS);
	respuesta = ordenarArray(edades,QTY_ALUMNOS);
	printf("\n Vueltas: %d\n",respuesta);


	return EXIT_SUCCESS;
}
int ordenarArray(int* pArray, int limite)
{
	int retorno = -1;
	int i;
	int buffer;
	int flagSwap;
	int contador=0;
	if(pArray != NULL && limite > 0)
	{
		retorno = 0;

		do
		{
			flagSwap = 0;
			for(i=0;i<limite;i++)
			{
				contador++;
				if(pArray[i]<pArray[i+1])
				{
					buffer=pArray[i];
					pArray[i]=pArray[i+1];
					pArray[i+1]=buffer;
					flagSwap = 1;
				}
			}
		}while(flagSwap);
		retorno=contador;
	}
	return retorno;
}

void printArray(int* pArray, int limite)
{
	int i;
	for(i=0;i<limite;i++)
	{
		printf("\n[DEBUG]  INDEX: %d - VALUE: %d",i,pArray[i]);
	}

}

