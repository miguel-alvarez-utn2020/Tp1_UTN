/**
**\brief menu principal del programa calculadora.
**       muestra en pantalla los dos operando numeroA y numeroB.
**
**\param entero por valor numeroA.
**\param entero por valor numeroB.
**/
void calculadora_menuPrincipal(int numeroA, int numeroB){
    printf("***********CALCULADORA***************\n");
    printf("******Ingrese Numero De Opcion*******\n");
    printf("*1)-Primer Operando A               *\n");
    printf("*2)-Segundo Operando B              *\n");
    printf("*3)-Calcular todas las Operaciones  *\n");
    printf("***********OPERACIONES***************\n");
    printf("*a)-Calcular la suma (A+B)          *\n");
    printf("*b)-Calcular la resta (A-B)         *\n");
    printf("*c)-Calcular la division (A/B)      *\n");
    printf("*d)-Calcular la multiplicacion (A*B)*\n");
    printf("*e)-Calcular el factorial (A!)      *\n");
    printf("*************************************\n");
    printf("*OPERANDO A:%d\n",numeroA);
    printf("*OPERANDO B:%d\n",numeroB);
    printf("*************4-SALIR*****************\n");
    printf("*************************************\n");
}
