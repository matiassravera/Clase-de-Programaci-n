#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define CANTIDAD_EMPLEADOS 3

typedef struct sEmpleado
{
    char nombre [51];
    char apellido [51];
    float salario;
} Empleado;


int sortEmpleadosPorNombres(Empleado* pEmpleado, int limite)
{
    int swap;
    int i;
    Empleado bufferEmpleado;
    do
    {
        swap=0;
        for(i=0; i<limite-1; i++;)
        {
            if (strcmp(pEmpleado[i], nombre, pEmpleado[i+1], nombre) > 0)
            {

            }
        }
    }
}


/* ORDENAMIENTO POR BURBUJEO - NO SERA UTILIZADA */
void ordenarPorNombre (char pNombres[][50], char pApellidos[][50], char pDni[][50], int limite)
{
    int swap;
    int i;
    char bufferStr[256];
    do
    {
        for (i=0; i < limite-1; i++)
        {
            if (strcmp(pNombres[i], pNombres[i+1]) > 0)
            {
                swap = 1;
                strcpy(bufferStr, pNombres[i]);
                strcpy(pNombres[i], pNombres[i+1]);
                strcpy(pNombres[i+1], bufferStr);

                strcpy(bufferStr, pApellidos[i]);
                strcpy(pApellidos[i], pApellidos[i+1]);
                strcpy(pApellidos[i+1], bufferStr);

                strcpy(bufferStr, pDni[i]);
                strcpy(pDni[i], pDni[i+1]);
                strcpy(pDni[i+1], bufferStr);
            }
        }
    }while(swap);
}


int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    char apellidos[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    char dni[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    int i;

 /*   for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i], 50,"\n\nNombre? ", "\n\nError! Ingreso un valor invalido.\n\n", 2);
    }
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("\n\nUsted ingreso: %s\n",nombres[i]);
    }

    return 0;
}
*/
    ordenarPorNombre(nombres, apellidos, dni, CANTIDAD_EMPLEADOS);

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("\n\nNombres: %s\n\nApellidos: %s\n\n DNI: %s\n\n",nombres[i], apellidos[i], dni[i]);
    }

    return 0;

}




