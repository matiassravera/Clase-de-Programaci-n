#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

int getOnlyLetters (char* palabra )
{
    int retorno=0;
    int i;
    int largo= strlen(palabra);
    for(i=0; i <= largo-1 ; i++ ) {
        if((palabra[i]>='0' && palabra[i]<='9')){
            retorno=1;
            break;
        }else if ((palabra[i]>='a' && palabra[i]<='z') || (palabra[i]>='A' && palabra[i]<='Z')){
            if(i == largo-1){
                return retorno;
            }
        }
        else{
            retorno=1;
            break;
        }
    }
    return retorno;
}

char* pedirPalabraSinCaracteresEspeciales (char* palabra)
{
    printf("Ingresar el valor solicitado: ");
    scanf("%s",&palabra);
    __fpurge(stdin);
    if (getOnlyLetters(palabra) != 0)
    {
        printf("Ingreso un dato incorrecto");
    }
    else
    {
        printf("\nIngreso el dato: %s.\n",&palabra);
    }
    return palabra;
}
