#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "calculadora_output.h"
#include "calculadora.h"
int main()
{
    int numeroA = 0;
    int numeroB = 0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicar;
    float resultadoDivision;
    int resultadoFactorialA;
    int resultadoFactorialB;
    int opcion;
    int flagA = 0;
    int flagB = 0;
    do
    {
        calculadora_menuPrincipal(numeroA,numeroB);
        utn_getOpcion(&opcion);
        switch(opcion)
        {
        case 1:
            system("cls");
            printf("opcion: %d\n",opcion);
            if(utn_getNumero(&numeroA,"Ingrese Operando: ","Error, digito invalido\n",3)){
                flagA = 1;
            }
            break;
        case 2:
            system("cls");
            printf("opcion: %d\n",opcion);
            if(utn_getNumero(&numeroB,"Ingrese Operando: ","Error, digito invalido\n",3)){
                flagB = 1;
            }
            break;
        case 3:
            system("cls");
            if(flagA && flagB)
            {
                system("cls");
                calculadora_suma(numeroA,numeroB,&resultadoSuma);
                calculadora_resta(numeroA,numeroB,&resultadoResta);
                calculadora_multiplicacion(numeroA,numeroB,&resultadoMultiplicar);
                printf("***************INFORME DE LAS OPERACIONES***************\n");
                printf("OPERANDO A: %d\nOPERANDO B: %d\n",numeroA,numeroB);
                printf("El resultado de A+B es: %d\n",resultadoSuma);
                printf("El resultado de A-B es: %d\n",resultadoResta);
                printf("El resultado de A*B es: %d\n",resultadoMultiplicar);
                if(calculadora_division(numeroA,numeroB,&resultadoDivision))
                {
                    printf("El resultado de A/B es: %.2f\n",resultadoDivision);
                }
                else
                {
                    printf("No es posible la division por 0\n");
                }
                if(calculadora_factorial(numeroA,&resultadoFactorialA))
                {
                    printf("El factorial de %d, es: %d\n",numeroA,resultadoFactorialA);
                }
                else
                {
                    printf("No es posible el factorial de 0\n");
                }
                if(calculadora_factorial(numeroB,&resultadoFactorialB))
                {
                    printf("El factorial de %d, es: %d\n",numeroB,resultadoFactorialB);
                }
                else
                {
                    printf("No es posible el factorial de 0\n");
                }
                system("pause");
                system("cls");
                flagA = 0;
                flagB = 0;
                numeroA = 0;
                numeroB = 0;

            }
            else if(flagA)
            {
                printf("No ingreso el segundo operando\n");
            }
            else if(flagB)
            {
                printf("No ingreso el primer operando\n");
            }
            else
            {
                printf("No ingreso ningun operando\n");
            }
            break;
        default:
            system("cls");
            printf("Opcion incorrecta\n");
        }
    }
    while(opcion != 4);


}
