
/* Pasar arrays por parametro */

#include <stdio.h>

darvalor(int tabla[5], int i);
vervalor(int tabla[5], int i); //Declaracion

// int numero; //variable global

main()
{
	int tabla[5],i;
	darvalor(tabla,i);
	vervalor(tabla,i); //Invocacion
}

darvalor(int tabla[5], int i)
{
	int numero; //variable local, esta linea se podria poner como variable global despues de la declaracion de las funciones

	for(i=0;i<5;i++)
	{
		printf("Ponga un valor: ");
		scanf(" %d",&numero);
		tabla[i]=numero;
	}
}

vervalor(int tabla[5], int i) //Definicion
{
	for(i=0;i<5;i++)
	{
		printf(" %d",tabla[i]);
	}
}
