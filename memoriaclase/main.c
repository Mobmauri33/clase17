#include <stdio.h>
#include <stdlib.h>

int main()
{
    Empleado* pArrayEmpleados;
    Empleado* pArrayEmpleadosAux;
    pArrayEmpleados = (Empleado*) malloc(sizeof(Empleado)*100);
    Empleado auxE;
    Empleado* pEmp2;

    auxE.legajo = 111;
    pEmp = &auxE.legajo;
    pEmp->legajo = 111;
    if(pArrayEmpleados != NULL)
    {
        *(pArrayEmpleados+2).legajo = 222 ;
        (pArrayEmpleados+2)->legajo = 222 ;
    }

    pEnteroAux = (int*) realloc(pEntero,sizeof(int)*1000);
    if(pEnteroAux != NULL)
    {
        pEntero = pEnteroAux;
    }

    free(pEntero);

    pEntero = &i;
    *pEntero = 14;


    return 0;
}
