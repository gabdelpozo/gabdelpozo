/*
 * Informes.h
 *
 *  Created on: May 5, 2020
 *      Author: Mauro
 */

#ifndef INFORMES_H_
#define INFORMES_H_

int info_imprimirClientesPublicadosByCuit(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes,char* auxiliarCuit);
int info_imprimirPublicacionesConEstado(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes,char* auxiliarCuit);
int info_imprimirPublicacionesConImportePorCliente(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes);
int info_calcularDeudaCliente(Publicacion* arrayPublicaciones,int limitePublicaciones,Cliente* arrayClientes,int limiteClientes,char* auxiliarCuit, float* deuda);
#endif /* INFORMES_H_ */
