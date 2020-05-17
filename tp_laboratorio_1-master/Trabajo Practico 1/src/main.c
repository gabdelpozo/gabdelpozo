#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "calculadora.h"
#include "funciones.h"

int main()
{
    int x=0;
    int y=0;
    int opciones;
    int flagVaribleA=0;
    int flagVaribleB=0;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorialA;
    int factorialB;
    int falloDivision=0;


    do{
    	MenuCalculadora(x,y);
        if (!utn_getNumero(&opciones,"Escribi numero de opcion: ","error, intente nuevamente",1,5,3))
        {
            switch (opciones)
            {
                case 1:
                    utn_getNumero(&x,"ingrese un numero entre 0 y 100: ","numero invalido, intente nuevamente",0,100,10);
                    flagVaribleA = 1;
                    break;
                case 2:
                    utn_getNumero(&y,"ingrese un numero entre 0 y 100: ","numero invalido, intente nuevamente",0,100,10);
                    flagVaribleB = 1;
                    break;
                case 3:
                    if (flagVaribleA==1 && flagVaribleB==1)
                    {
                        sumarDosNumeros(x, y, &suma);
                        restarDosNumeros(x, y, &resta);
                        falloDivision = dividirDosNumeros(x, y, &division);
                        multiplicarDosNumeros(x, y, &multiplicacion);
                        factorialDeUnNumero(x, &factorialA);
                        factorialDeUnNumero(y, &factorialB);
                    }else printf("Faltan ingresar numeros!!\n");
                    break;
                case 4:
                    if (flagVaribleA==1 && flagVaribleB==1)
                    {
                        imprimirResultados(suma, resta, division, falloDivision, multiplicacion, factorialA, factorialB);
                        __fpurge(stdin);
                        getchar();
                    }else printf("Faltan ingresar numeros!!\n");
                    break;
            }
        }
    }while (opciones!=5);
    return 0;
}
