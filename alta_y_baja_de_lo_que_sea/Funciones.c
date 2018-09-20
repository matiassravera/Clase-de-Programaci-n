#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

int validarNumero (int* pArrayNumeros)
{
    int retorno = 0;
    char buffer [4960];
    char auxNumero[51];
    int i;
    int contadorNegativos=0;

    if (pArrayNumeros != NULL)
    {
        fgets(buffer,51,stdin);
        strcpy(auxNumero, buffer);
        for (i=0; i < strlen(auxNumero)-1; i++)
        {
            if (((auxNumero [i] >= 'a' && auxNumero [i] <= 'z') || (auxNumero [i] >= 'A' && auxNumero [i] <= 'Z')) && (auxNumero[i] != '-'))
            {
                retorno =1;
                break;
            }
            else if (auxNumero[i] == '-')
            {
                contadorNegativos++;
                if (contadorNegativos > 1)
                {
                    retorno = 1;
                    break;
                }
            }
        }
        if (retorno == 0)
        {
            *pArrayNumeros=atoi(auxNumero);
        }

    }
    return retorno;
}
