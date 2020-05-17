#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int getInt(int *pResultado);
/* Recibe el ingreso por consola de un char y lo pasa a int, lo almacena en la variable pResultado.
*/

int utn_getFloat(float *pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);
/*Recibe las siguientes variables: float *pResultado donde almacena el numero; const char *mensaje para el mensaje; const char
 *mensajeError para el mensaje de error, int minimo y int maximo para indicar los limites de los numeros, y int reintentos
 para indicar la cantidad de veces que puede intentar el usuario.
*/

int getFloat(float *pResultado);
/* Recibe el ingreso por consola de un char y lo pasa a float, lo almacena en la variable pResultado.
*/
int utn_getChar(char* pResultado,const char *mensaje,const char *mensajeError,const char *minimo,const char *maximo,int reintentos);
/*Recibe las siguientes variables: char *pResultado donde almacena el numero; const char *mensaje para el mensaje; const char
 *mensajeError para el mensaje de error, const char minimo y const char maximo para indicar los limites de los numeros, y int reintentos
 para indicar la cantidad de veces que puede intentar el usuario. */

int utn_getNumero(int* pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);
/*Recibe las siguientes variables: int *pResultado donde almacena el numero; const char *mensaje para el mensaje; const char
 *mensajeError para el mensaje de error, int minimo y int maximo para indicar los limites de los numeros, y int reintentos
 para indicar la cantidad de veces que puede intentar el usuario.*/


#endif // FUNCIONES_H_INCLUDED
