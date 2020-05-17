/*
 * >>>> PRIMER PARCIAL <<<<
 * */

#include <stdio.h>
#include <stdlib.h>

#include "Cliente.h"
#include "Publicacion.h"
#include "utn.h"
#include "Informes.h"
#define CANTIDAD_CLIENTES 		100
#define CANTIDAD_PUBLICACIONES 1000

int main(void) {

	Publicacion arrayPublicaciones[CANTIDAD_PUBLICACIONES];
	Cliente arrayClientes[CANTIDAD_CLIENTES];
	int idClientes=0;
	int idPublicaciones=0;
	int opcion;
	int auxiliarIndice;
	int auxiliarIdClientes;
	int auxiliarIdPublicacion;
	int auxiliarIndicePublicacion;
	char auxiliarCuit[CUIT_LEN];


	if(cli_inicializarArray(arrayClientes,CANTIDAD_CLIENTES) == 0)
	{
		printf("Array inicializado correctamente. \n\n");
	}

	if(pub_inicializarArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES) == 0)
	{
		printf("Array inicializado correctamente. \n\n");
	}

	cli_altaForzadaArray(arrayClientes,CANTIDAD_CLIENTES,0,&idClientes,"Fernando","Ruiz", 233453428,0);
	cli_altaForzadaArray(arrayClientes,CANTIDAD_CLIENTES,1,&idClientes,"Lucas","Perez", 23383583519,1);
	cli_altaForzadaArray(arrayClientes,CANTIDAD_CLIENTES,2,&idClientes,"Gabriel","Blanco", 24345533457,0);

	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,0,&idPublicaciones,1,"Aviso Periodistico","1234",2);
	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,1,&idPublicaciones,1,"Aviso de Deportes","1234",10);
	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,2,&idPublicaciones,1,"Aviso de Espectaculos","1234",20);
	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,3,&idPublicaciones,0,"Aviso de Musica","2222",2);
	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,4,&idPublicaciones,0,"Aviso de Economia","2222",10);
	pub_altaForzadaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,5,&idPublicaciones,2,"Aviso de Actualidad","2222",20);
	do
	{
		if(!utn_getNumero(	&opcion,
							"\n\n1.Cargar una Cliente"
							"\n2.Modificar una Cliente"
							"\n3.Eliminar una Cliente"
							"\n4.Publicar un nuevo aviso"
							"\n5.Pausar aviso"
							"\n6.Reanudar aviso"
							"\n7.Consulta facturación"
							"\n8.Imprimir Publicacion"
							"\n9.Imprimir lista Cliente"
							"\n10.Informar"

							"\n11.Salir\n\n",

							"\nError opcion invalida",1,11,2) )
		{
			switch(opcion)
			{
			case 1:
				auxiliarIndice = cli_getEmptyIndex(arrayClientes,CANTIDAD_CLIENTES);
				if(auxiliarIndice >= 0)
				{
					if(cli_altaArray(arrayClientes,CANTIDAD_CLIENTES,auxiliarIndice,&idClientes) == 0)
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
				cli_imprimirArray(arrayClientes,CANTIDAD_CLIENTES);
				if(utn_getNumero(&auxiliarIdClientes,"\nIndique el ID del cliente a modificar","\nID invalido",0,idClientes,0) == 0)
				{
					auxiliarIndice = cli_buscarId(arrayClientes,CANTIDAD_CLIENTES,auxiliarIdClientes);
					if(	auxiliarIndice >= 0 &&
							cli_modificarArray(arrayClientes,CANTIDAD_CLIENTES,auxiliarIndice) == 0)
					{
						printf("\nModificacion realizada con exito\n");
					}
				}
				break;

			case 3:
				cli_imprimirArray(arrayClientes,CANTIDAD_CLIENTES);
				if(utn_getNumero(&auxiliarIdClientes,"\nIndique el ID del Cliente a eliminar","\nID invalido",0,idClientes,0)==0)
				{
					auxiliarIndice = cli_buscarId(arrayClientes,CANTIDAD_CLIENTES,auxiliarIdClientes);
					if(	auxiliarIndice >= 0 &&
							cli_bajaArray(arrayClientes,CANTIDAD_CLIENTES,auxiliarIndice)== 0)
					{
						printf("\nBaja realizada con exito\n");
					}
				}
				break;
			case 4:
				auxiliarIndicePublicacion = pub_getEmptyIndex(arrayPublicaciones,CANTIDAD_PUBLICACIONES);
				if(auxiliarIndicePublicacion >= 0)
				{
					cli_imprimirArray(arrayClientes,CANTIDAD_CLIENTES);
					if(	utn_getNumero(&auxiliarIdClientes,"\nId Cliente: ","\nError",0,10000,2) == 0 &&
						cli_buscarId(arrayClientes,CANTIDAD_CLIENTES,auxiliarIdClientes) != -1)
					{
						pub_altaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIndicePublicacion,&idPublicaciones,auxiliarIdClientes);
					}
					else
					{
						printf("\nEL ID NO EXISTE");
					}
				}
				break;

				/*Se pedirá que se ingrese el cuit del cliente y se listaran todas las Clientes de
				video que el cliente tiene pubratadas mostrando todos sus campos.
				Luego de ingresar el ID de la Publicacion, se permitirá modificar la cantidad de días
				pubratados para la misma.*/
			case 5:
				if(	!utn_getDni(auxiliarCuit,CUIT_LEN,"\n CUIT? ", "\nError", 2) &&
					!info_imprimirClientespubratadasByCuit(arrayPublicaciones,CANTIDAD_PUBLICACIONES,arrayClientes,CANTIDAD_CLIENTES,auxiliarCuit))
				{

					if(!utn_getNumero(&auxiliarIdPublicacion,"\nID Publicacion a pausar? ","\nERROR",0,10000,2))
					{
						auxiliarIndicePublicacion = pub_buscarId(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIdPublicacion);
						if(auxiliarIndicePublicacion != -1)
						{
							pub_modificarArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIndicePublicacion);
						}
					}
				}
				else
				{
					printf("\nCUIT NO ENCONTRADO");
				}
				break;
				
			case 6:
				if(	!utn_getDni(auxiliarCuit,CUIT_LEN,"\n CUIT? ", "\nError", 2) &&
					!info_imprimirClientespubratadasByCuit(arrayPublicaciones,CANTIDAD_PUBLICACIONES,arrayClientes,CANTIDAD_CLIENTES,auxiliarCuit))
				{

					if(!utn_getNumero(&auxiliarIdPublicacion,"\nID Publicacion a reanudar? ","\nERROR",0,10000,2))
					{
						auxiliarIndicePublicacion = pub_buscarId(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIdPublicacion);
						if(auxiliarIndicePublicacion != -1)
						{
							pub_modificarArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIndicePublicacion);
						}
					}
				}
				else
				{
					printf("\nCUIT NO ENCONTRADO");
				}
				break;

			case 7:
				cli_imprimirArray(arrayClientes,CANTIDAD_CLIENTES);
				break;

			case 8:
				if(	!utn_getDni(auxiliarCuit,CUIT_LEN,"\n CUIT? ", "\nError", 2))
				{
					info_imprimirPublicacionesConEstado(arrayPublicaciones,CANTIDAD_PUBLICACIONES,arrayClientes,CANTIDAD_CLIENTES,auxiliarCuit);
				}
				break;



			case 9:
				if(	!utn_getDni(auxiliarCuit,CUIT_LEN,"\nCUIT? ", "\nError", 2) &&
					!info_imprimirClientespubratadasByCuit(arrayPublicaciones,CANTIDAD_PUBLICACIONES,arrayClientes,CANTIDAD_CLIENTES,auxiliarCuit))
				{

					if(!utn_getNumero(&auxiliarIdPublicacion,"\nID PUBLICACION A CANCELAR? ","\nERROR",0,10000,2))
					{
						auxiliarIndicePublicacion = pub_buscarId(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIdPublicacion);
						if(auxiliarIndicePublicacion != -1)
						{
							pub_bajaArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES,auxiliarIndicePublicacion);
						}
					}
				}
				else
				{
					printf("\nCUIT NO ENCONTRADO");
				}
				break;

			/*Consulta facturación: Se deberá ingresar el cuit del cliente y se deberá listar el importe
			a pagar por cada pubratación.*/


			/*case 10:
				info_imprimirPublicacionesConImportePorCliente(arrayPublicaciones,CANTIDAD_PUBLICACIONES,arrayClientes,CANTIDAD_CLIENTES);
				break;
			case 11:
				cli_ordenarPorNombre(arrayClientes,CANTIDAD_CLIENTES);
				break;

			case 12:
				pub_imprimirArray(arrayPublicaciones,CANTIDAD_PUBLICACIONES);
				break;
			 	 */

			}
		}
	}while(opcion != 11);

	return EXIT_SUCCESS;
}




