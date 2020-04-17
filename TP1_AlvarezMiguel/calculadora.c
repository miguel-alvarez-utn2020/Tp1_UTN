#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "calculadora_output.h"

/**
**\brief calcula la suma entre numeroA y numeroB y escribe
**  el total en la variable resultado pasada por referencia.
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**\param puntero a entero resultado.
**
**\return retorna 1 para uso de valor verdadero.
**/
int calculadora_suma(int numeroA,int numeroB,int* resultado)
{
    *resultado = numeroA + numeroB;
    return 1;
}
/**
**\brief calcula la resta entre numeroA y numeroB y escribe
**  el total en la variable resultado pasada por referencia.
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**\param puntero a entero resultado.
**
**\return retorna 1 para uso de valor verdadero.
**/
int calculadora_resta(int numeroA,int numeroB,int* resultado)
{
    *resultado = numeroA - numeroB;
    return 1;
}
/**
**\brief calcula la multiplicacion entre numeroA y numeroB y escribe
**  el total en la variable resultado pasada por referencia.
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**\param puntero a entero resultado.
**
**\return retorna 1 para uso de valor verdadero.
**/
int calculadora_multiplicacion(int numeroA,int numeroB,int* resultado)
{
    *resultado = numeroA * numeroB;
    return 1;
}
/**
**\brief calcula la division entre numeroA y numeroB y escribe
**  el total en la variable resultado pasada por referencia.
**  valida la division por 0.
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**\param puntero a float resultado.
**
**\return retorna 1 si la funcion logro dividir los los valores
** de las variables numeroA y numeroB con exito.
**\return retorna 0 si no logro dividir los valores con exito.
**/
int calculadora_division(int numeroA,int numeroB,float* resultado)
{
    int retorno = 0;
    if(numeroB > 0)
    {
        *resultado = (float)numeroA / numeroB;
        retorno = 1;
    }
    return retorno;
}
/**
**\brief calcula el factorial de un numero y escribe el total
**  del factoreo en la variable resultado pasada por referencia.
**  valida que el numero para el factorial no sea 0
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**\param puntero a entero resultado.
**
**\return retorna 1 si la funcion logro hacer un factoreo exitoso.
**
**\return retorna 0 si no logro el factoreo con exito.
**/
int calculadora_factorial(int numero,int* resultado)
{
    int c;
    int r = 1;
    int retorno = 0;
    if(numero > 0)
    {
        for (c = 1; c <= numero; c++)
            r = r * c;
            retorno = 1;
    }
    if(retorno == 1){
        *resultado = r;
    }
    return retorno;
}
