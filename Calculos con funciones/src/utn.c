#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumarOp(int operador1,int operador2)
	{
		int resultado;
		resultado=operador1 + operador2;
		return resultado;
	}

int restarOp(int operador1,int operador2)
	{
		int resultado;
		resultado=operador1 - operador2;
		return resultado;
	}

	int multiplicarOp(int operador1, int operador2)
	{
		int resultado;
		resultado=operador1 * operador2;
		return resultado;
	}

	float dividirOp(int operador1, int operador2)
	{
		float resultado;
		resultado=operador1 / operador2;
		return resultado;
	}
