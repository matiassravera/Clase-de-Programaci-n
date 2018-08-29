#include <stdio_ext.h>
#include <stdlib.h>

int pedirEdad();
int validarEdad (int edad, int minimo, int maximo);

int main()
{
   pedirEdad();
   return 0;
}

int validarEdad (int edad, int minimo, int maximo)
{
    minimo=1;
    maximo=100;
    if (edad < minimo || edad > maximo)
    {
        printf("Error! Ingrese la edad correcta \n");
    }
    else
    {
        printf("\n Ingreso una edad valida %d!", edad);
    }
    return 1;
}

int pedirEdad ()
{
    int edad;
    printf("Ingrese su edad: ");
    __fpurge(stdin);
    if ( scanf("%d",&edad) == 1)
    {
        validarEdad(edad, 1, 100);
    }else
    {

    }
    return edad;
}


