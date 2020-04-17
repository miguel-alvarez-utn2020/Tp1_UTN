#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
/**
**\brief pide un numero entero por pantalla al usuario.
**  lo valida, y le da al usurio x reintentos por si este digita algo
**  que no se un numero.
**
**\param puntero a entero variable numero.
**\param mensaje al usuario.
**\param mensaje de error al usuario.
**\param cantindad de intentos por valor variable intentos.
**
**\return retorna 1 si el usuario ingreso un numero.
**\return retorna 0 si el usuario no ingreso ningun numero en sus x intentos.
**/
int utn_getNumero(int* numero,char msj[],char msjError[],int intentos)
{
    int retorno = 0;
    int auxNumero;
    int flag;
    printf("%s",msj);
    flag = scanf("%d",&auxNumero);
    fflush(stdin);
    while(!flag)
    {
        intentos --;
        printf("%s",msjError);
        printf("%s",msj);
        flag = scanf("%d",&auxNumero);
        fflush(stdin);
        if(intentos == 0)
        {
            system("cls");
            break;
        }
    }
    if(flag)
    {
        system("cls");
        *numero = auxNumero;
        retorno = 1;
    }
    return retorno;
}
/**
**\brief pide por pantalla una opcion numerica al usuario.
**      valida que sea una opcion numerica.
**\param puntero a entero opcion.
**\return retorna 1 si la opcion es valida.
**\return retorna 0 si la opcion es invalida.
**/
int utn_getOpcion(int* opcion){
    int retorno = 0;
    int auxOpcion;
    int flag;
    *opcion = 0;
    flag = scanf("%d",&auxOpcion);
    fflush(stdin);
    if(flag){
        *opcion = auxOpcion;
        retorno = 1;
    }
    return retorno;
}

