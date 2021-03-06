#ifndef EMPLEADO_H
#define EMPLEADO_H
typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int edad;
    char peso[50];
    int estado;
}Empleado;
#endif

Empleado* Emp_new(void);
int Emp_delete(Empleado* this);

int Emp_setId(Empleado* this, int id);
int Emp_getId(Empleado* this, int* resultado);
int Emp_setPeso(Empleado* this, float peso);
int Emp_getPeso(Empleado* this, char* resultado);
int Emp_setNombre(Empleado* this, char* nombre);
int Emp_getNombre(Empleado* this, char* resultado);
int Emp_setApellido(Empleado* this, char* apellido);
int Emp_getApellido(Empleado* this, char* resultado);
int Emp_setEdad(Empleado* this, int edad);
int Emp_getEdad(Empleado* this, int* resultado);
int Emp_setEstado(Empleado* this, int estado);
int Emp_getEstado(Empleado* this, int* resultado);
int isNumberFloat (char* pStr);
int isLetter (char* pStr);
int Emp_compararPorNombre;
int Emp_alta;




