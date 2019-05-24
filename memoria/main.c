#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

int main()
{
    Empleado *pArrayEmpleado[3000];
    int ultimoElementoArrayEmpleado = 0;
    int indiceActual;
    int auxInt;
    char auxFloat[2000];

    indiceActual = ultimoElementoArrayEmpleado;
    pArrayEmpleado[indiceActual] =  Emp_new();


    if(pArrayEmpleado[indiceActual] != NULL)
    {
        ultimoElementoArrayEmpleado++;
        printf("OK");
        if(!Emp_setId(pArrayEmpleado[indiceActual],14))
        {
            Emp_getId(pArrayEmpleado[indiceActual], &auxInt);
            printf("\n El id es %d",auxInt);

        }
        if(!Emp_setPeso(pArrayEmpleado[indiceActual],2.5))
        {
            Emp_getPeso(pArrayEmpleado[indiceActual],auxFloat);
            printf("\n El peso es %f",auxFloat);
        }

    }


    return 0;
}
