#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)

{
	setbuf(stdout,NULL); // SIEMPRE!!!
	int num1;
	int num2;
	int operacion;
	int sumar;
	int restar;
	int multiplicar;
	float dividir;

    printf("ingrese un numero\n");

    scanf("%d",&num1);

    printf("ingrese otro numero\n");

    scanf("%d",&num2);

    printf("Seleccione operacion\n1 Sumar\n2 Restar\n3 Multiplicar \n4 Dividir\n");

    scanf("%d",&operacion);

    if(operacion==1)
    {
    	sumar=sumarOp(num1,num2);
    	printf("La suma es %d",sumar);
    }

    if(operacion==2)
    {
    	restar=restarOp(num1,num2);
    	printf("La resta es %d",restar);
    }

    if(operacion==3)
    {
    	multiplicar=multiplicarOp(num1,num2);
    	printf("La multiplicacion es %d",multiplicar);
    }

    if(operacion==4)
    {
    	if(num2<=0)
		{
			printf("Error. Poner valor mayor o igual a 1.");
			return 0;
		}
		else
		{
			dividir=dividirOp(num1,num2);
			printf("La division es %.2f",dividir);
		}
    }
	return 0;
}


