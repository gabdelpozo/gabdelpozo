/*
 * Informes.c
 *
 *  Created on: May 5, 2020
 *      Author: Gabriel
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Informes.h"
#include "Cliente.h"
#include "Publicacion.h"
static const char ESTADOS[2][8]={"PAUSADO","ACTIVO"};

int info_imprimirClientesConMasAvisosActivos(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes)
{
	int retorno = -1;
	int i;
	int indiceArrayCliente;
	int contadorAvisosActivos;
	int mayor = -1;
	int idCliente;
	if(arrayPublicaciones != NULL && limitePublicaciones > 0 && arrayClientes != NULL && limiteClientes > 0)
	{
		for(i=0;i<limiteClientes;i++)
		{
			if(arrayClientes[i].isEmpty == 0)
			{
				contadorAvisosActivos = 0;
				for(int j=0;j<limitePublicaciones;j++)
				{
					if(arrayPublicaciones[j].isEmpty == 0)
					{
						if(arrayClientes[i].idCliente == arrayPublicaciones[j].idCliente)
						{
							contadorAvisosActivos++;

						}
					}
				}

				if(contadorAvisosActivos > mayor)
				{
					idCliente = arrayClientes[i].idCliente;
					mayor = contadorAvisosActivos;
				}

			}
		}
		printf("\nEl Cliente con mas avisos activos es: \n");
		cli_imprimir(&arrayClientes[idCliente]);

		printf("\nCantidad de avisos: %d",mayor);

	}
	return retorno;
}



int info_imprimirClientesConMasAvisosPausados(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes)
{
	int retorno = -1;
	int pausados;
	int auxiliarId;
	int avisosPausados;
	if(arrayPublicaciones != NULL && limitePublicaciones > 0 && arrayClientes != NULL && limiteClientes > 0)
	{
		pausados = -1;
		for(int i = 0 ; i < limiteClientes ; i++){
			cli_imprimir(&arrayClientes[i]);
			if(arrayClientes[i].isEmpty == 0){
			avisosPausados= 0;
			for(int j = 0 ; j < limitePublicaciones ; j++){
				if (arrayPublicaciones[j].isEmpty == 0){
					if(arrayClientes[i].idCliente == arrayPublicaciones[j].idCliente && arrayPublicaciones[j].estado == 0){
						avisosPausados++;
					}
				}
			}
				if(avisosPausados > pausados){
					auxiliarId = arrayClientes[i].idCliente;
					pausados = avisosPausados;
				}
			}
		}
		printf("\nEl cliente con mas avisos pausados es: \n");
		cli_imprimir(&arrayClientes[auxiliarId]);
		printf("\nCantidad de avisos pausados: %d",pausados);
	}
	return retorno;
}


int info_imprimirClienteConMasAvisos(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes)
{

	int retorno = -1;
	int contAvisos;
	int auxiliarId;
	int avisosPausados;
	int maxAvisos = -1;

	for(int i = 0 ; i < limiteClientes ; i++){
		if(arrayClientes[i].isEmpty == 0){
		contAvisos= 0;
		for(int j = 0 ; j < limitePublicaciones ; j++){
			if (arrayPublicaciones[j].isEmpty == 0){
				if(arrayClientes[i].idCliente == arrayPublicaciones[j].idCliente){
					contAvisos++;
				}
			}
		}
			if(avisosPausados > maxAvisos){
				auxiliarId = arrayClientes[i].idCliente;
				maxAvisos = contAvisos;
			}
		}
	}
	printf("\nCliente con mas avisos:");
	cli_imprimir(&arrayClientes[auxiliarId]);
	printf("\nCantidad de avisos: %d",maxAvisos);
	return retorno;
}

/*
int info_calcularDeudaCliente(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes,char* auxiliarCuit, float* deuda)
{
	int retorno = -1;
	int i;
	int indiceArrayCliente;
	int idCliente;
	float auxiliarDeuda=0;
	if(arrayPublicaciones != NULL && limitePublicaciones > 0 && arrayClientes != NULL && limiteClientes > 0 && auxiliarCuit != NULL)
	{
		for(i=0;i<limitePublicaciones;i++)
		{
			if(arrayPublicaciones[i].isEmpty)
			{
				continue;
			}
			if(strncmp(arrayClientes[i].cuit,auxiliarCuit,CUIT_LEN) == 0)
			{
				idCliente = arrayPublicaciones[i].idCliente;
				indiceArrayCliente = cli_buscarId(arrayClientes,limiteClientes,idCliente);
				auxiliarDeuda = auxiliarDeuda + (arrayPublicaciones[i].rubro * arrayPublicaciones[indiceArrayCliente].estado);
			}
		}
		retorno = 0;
		*deuda=auxiliarDeuda;
	}
	return retorno;
}



*/
