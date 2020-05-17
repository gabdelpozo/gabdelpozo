/*
 * clase7header.c
 *
 *  Created on: 16 abr. 2020
 *      Author: tepo
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos){
	int retorno = -1;
	int bufferInt;
	int i;

	for(i=0; i<=reintentos; i++){
		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0){
			printf("%s", mensaje);
			__fpurge(stdin);
			scanf("%d", &bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo){
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}else{
				printf("%s", mensajeError);
			}
		}
	}
	return retorno;
}

int calcularMayor(int* pResultado, int num1, int num2){
	int res = -1;
	if(pResultado != NULL){
		if(num1 == num2){
			res = 0;
		}else if(num1 > num2){
			*pResultado = num1;
			res = 1;
		}else{
			*pResultado = num2;
			res = 1;
		}
	}
	return res;
}

int utn_getfloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos){
	int retorno = -1;
	float bufferFloat;
	int i;

	for(i=0; i<=reintentos; i++){
		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0){
			printf("%s", mensaje);
			__fpurge(stdin);
			scanf("%f", &bufferFloat);
			if(bufferFloat >= minimo && bufferFloat <= maximo){
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}else{
				printf("%s", mensajeError);
			}
		}
	}
	return retorno;
}

int validarNumeroFloat(char* stringRecibido)
{
    int retorno=1;
	int i;
	int contadorPuntos=0;

    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if(stringRecibido[i]<'0' || stringRecibido[i]>'9')
        {
        	// no estoy en el rango de los numeros
        	if(stringRecibido[i]=='.') // es un punto
        	{
        		contadorPuntos++;
        		if(contadorPuntos>1)
        		{
        			// encontre un segundo punto, doy error
                    retorno=0;
                    break;
        		}
        	}
        	else
        	{
        		//Hay algo que no es un punto ni numero
        		if(i==0)
        		{
        			// me pongo a ver que onda con el caracter
        			if(stringRecibido[i]!='+' && stringRecibido[i]!='-')
        			{
        				retorno=0;
        				break;
        			}
        		}
        		else
        		{
        			retorno=0;
        			break;
        		}
        	}
        }
    }
    return retorno;
}
