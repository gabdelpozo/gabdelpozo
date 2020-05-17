/*
 * >>>> CLASE 10 <<<<
 *
 * Desarrollar una aplicacion que permita gestionar una array de FANTASMAS
 *
 * Se debera poder realizar
 * 	ALTAS
 * 	BAJAS
 * 	MODIFICACIONES
 *
 * La aplicacion debera permitir ordenar el array por Nombre del Fantasma
 *
 * */

#include <stdio.h>
#include <stdlib.h>

#include "Fantasma.h"
#include "utn.h"

#define CANTIDAD_FANTASMAS 4

int main(void) {

	Fantasma arrayFANTASMAS[CANTIDAD_FANTASMAS];
	int idFANTASMAS=0;
	int opcion;
	int auxiliarIndice;
	int auxiliarId;

	if(fan_inicializarArray(arrayFANTASMAS,CANTIDAD_FANTASMAS) == 0)
	{
		printf("Array inicializado correctamente. \n\n");
	}
	do
	{
		if(!utn_getNumero(	&opcion,
							"\n\n1.Cargar un Fantasma"
							"\n2.Modificar un FANTASMAS"
							"\n3.Eliminar un Fantasma"
							"\n4.Ordenar lista de FANTASMAS"
							"\n5.Imprimir lista FANTASMAS"
							"\n6.Salir\n\n",
							"\nError opcion invalida",1,6,2) )
		{
			switch(opcion)
			{
			case 1:
				auxiliarIndice = fan_getEmptyIndex(arrayFANTASMAS,CANTIDAD_FANTASMAS);
				if(auxiliarIndice >= 0)
				{
					if(fan_altaArray(arrayFANTASMAS,CANTIDAD_FANTASMAS,auxiliarIndice,&idFANTASMAS) == 0)
					{
						printf("\nCarga realizada con exito\n");
					}
				}
				else
				{
					printf("\nNO HAY MAS LUGAR");
				}
				break;
			case 2:
				fan_imprimirArray(arrayFANTASMAS,CANTIDAD_FANTASMAS);
				if(utn_getNumero(&auxiliarId,"\nIndique el ID del Fantasma a modificar","\nID invalido",0,idFANTASMAS,0) == 0)
				{
					auxiliarIndice = fan_buscarId(arrayFANTASMAS,CANTIDAD_FANTASMAS,auxiliarId);
					if(	auxiliarIndice >= 0 &&
						fan_modificarArray(arrayFANTASMAS,CANTIDAD_FANTASMAS,auxiliarIndice) == 0)
					{
						printf("\nModificacion realizada con exito\n");
					}
				}
				break;

			case 3:
				fan_imprimirArray(arrayFANTASMAS,CANTIDAD_FANTASMAS);
				if(utn_getNumero(&auxiliarId,"\nIndique el ID del Fantasma a eliminar","\nID invalido",0,idFANTASMAS,0)==0)
				{
					auxiliarIndice = fan_buscarId(arrayFANTASMAS,CANTIDAD_FANTASMAS,auxiliarId);
					if(	auxiliarIndice >= 0 &&
						fan_bajaArray(arrayFANTASMAS,CANTIDAD_FANTASMAS,auxiliarIndice)== 0)
					{
						printf("\nBaja realizada con exito\n");
					}
				}
				break;
			case 4:
				fan_ordenarPorNombre(arrayFANTASMAS,CANTIDAD_FANTASMAS);
				break;

			case 5:
				fan_imprimirArray(arrayFANTASMAS,CANTIDAD_FANTASMAS);
				break;

			}
		}
	}while(opcion != 6);

	return EXIT_SUCCESS;
}





