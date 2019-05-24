#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include <string.h>
#include "utn_strings.h"

Empleado* Emp_new(void)
{
    return (Empleado*) malloc(sizeof(Empleado));
}

int Emp_delete(Empleado* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        free(this);
        retorno = 0;
    }
    return retorno;
}

int Emp_setId(Empleado* this, int id)
{
    int retorno = -1;
    if(this != NULL && id >= 0)
    {
        this->id = id;
        retorno = 0;
    }
    return retorno;
}

int Emp_getId(Empleado* this, int* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        *resultado = this->id;
        retorno = 0;
    }
    return retorno;
}

int Emp_setPeso(Empleado* this, float peso)
{
    int retorno = -1;
    char bufferPeso[4098];
    sprintf(bufferPeso,"%f",peso);
    if(this != NULL && isNumberFloat(bufferPeso))
    {
        strcpy(this->peso,bufferPeso);
        retorno = 0;
    }
    return retorno;
}


int Emp_getPeso(Empleado* this, char* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        *resultado = this->peso;
        retorno = 0;
    }
    return retorno;
}

int Emp_setNombre(Empleado* this, char* nombre)
{
    int retorno = -1;
    if(this != NULL && isLetter(nombre))
    {
        strcpy(this->nombre,nombre);
        retorno = 0;
    }
    return retorno;
}


int Emp_getNombre(Empleado* this, char* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        strcpy(resultado,this->nombre);
        /*resultado = this->nombre;*/
        retorno = 0;
    }
    return retorno;
}

int Emp_setApellido(Empleado* this, char* apellido)
{
    int retorno = -1;
    if(this != NULL && isLetter(apellido))
    {
        strcpy(this->apellido,apellido);
        retorno = 0;
    }
    return retorno;
}

int Emp_getApellido(Empleado* this, char* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        strcpy(resultado,this->apellido);
        retorno = 0;
    }
    return retorno;
}

int Emp_setEdad(Empleado* this, int edad)
{
    int retorno = -1;
    char bufferEdad[4098];
    sprintf(bufferEdad,"%i",edad);
    if(this != NULL && !isNumber(bufferEdad))
    {
        this->edad = edad;
        retorno = 0;
    }
    return retorno;

}
int Emp_getEdad(Empleado* this, int* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        *resultado = this->edad;
        retorno = 0;
    }
    return retorno;
}

int Emp_setEstado(Empleado* this, int estado)
{
    int retorno = -1;
    if(this != NULL && estado>=0)
    {
        this->estado = estado;
        retorno = 0;
    }
    return retorno;
}


int Emp_getEstado(Empleado* this, int* resultado)
{
    int retorno = -1;
    if(this != NULL && resultado != NULL)
    {
        *resultado = this->estado;
        retorno = 0;
    }
    return retorno;
}






