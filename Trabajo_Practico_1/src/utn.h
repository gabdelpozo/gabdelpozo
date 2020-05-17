#ifndef UTN_H_
#define UTN_H_

/*
 *\brief Recibe las variables: int *pResultado en donde se guarda el numero ingresado.
 *		 char *mensaje para el mensaje, char *mensajeError para el mensaje de error,
 *		 int minimo para indicar el limite minimo, int maximo para indicar el limite maximo,
 *		 y int reintentos para determinar la cantidad de veces que puede intentar el usuario.
 *\param int *pResultado puntero al espacio de memoria donde se copiara el entero obtenido
 *\param char *mensaje puntero al espacio de memoria donde se copiara la respuesta del usuario
 *\param char mensajeError mensaje a retornar en caso de error
 *\param int minimo numero minimo que se puede almacenar
 *\param int maximo numero maximo que se puede almacenar
 *\param int reintentos cantidad de intentos que tiene el usuario para operar
 *\return retorna 0(exito) si el usuario respeta los parametros de las opciones, -1(error) si no
 *		 , cada error saca posibilidades de reintentos
 *
 */

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);


#endif /* UTN_H_ */
