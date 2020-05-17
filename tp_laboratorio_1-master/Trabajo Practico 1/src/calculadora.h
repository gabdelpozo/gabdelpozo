#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

int sumarDosNumeros(int num1, int num2, int *resultado);

/* Solicita al usuario dos valores enteros, los suma y los entrega en la variable
   resultado.
 */

int restarDosNumeros(int num1, int num2, int *resultado);

/* Solicita al usuario dos valores enteros, los resta y los entrega en la variable
   resultado.
 */

int dividirDosNumeros(int num1, int num2, float *resultado);

/* Solicita al usuario dos valores enteros, los divide y los entrega en la variable
   resultado float.
 */

int multiplicarDosNumeros(int num1, int num2, int *resultado);

/* Solicita al usuario dos valores enteros, los multiplica y los entrega en la variable
   resultado.
 */

int factorialDeUnNumero(int num1, int *resultado);

/* Realiza el calculo del factorial del valor almacenado en los operandos y entrega el resultado.
 */

int MenuCalculadora (int a, int b);

/* Imprime el menu y almacena los valores que reemplazarian "x" e "y".
 */

int imprimirResultados(int suma, int resta, float division, int divisionError, int multiplicacion, long int factorialA, long int factorialB);

/* Imprime en pantalla las operaciones realizadas.
 */

#endif // FUNCIONESCALCU_H_INCLUDED
