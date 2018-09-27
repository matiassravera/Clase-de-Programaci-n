#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int validarCorreoElectronico (char* pCorreo, int limite)
{
    int i;
    int retorno = 0;
    int contadorDeArrobas=0;
    if (pCorreo != NULL && limite > 0)
    {
        for (i=0; i < limite; i++)
        {
            if ((pCorreo[i] >= 'a' && pCorreo[i] <= 'z') || (pCorreo[i] >= 'A' && pCorreo[i] <= 'Z') ||
                (pCorreo[i] >= '0' && pCorreo[i] <= '9') || pCorreo[i] == '-'|| pCorreo[i] == '_'|| pCorreo[i] == '~'||
                pCorreo[i] == '!' || pCorreo[i] == '$' || pCorreo[i] == '&' || pCorreo[i] == '(' || pCorreo[i] == ')' ||
                pCorreo[i] == '*' || pCorreo[i] == '+' || pCorreo[i] == ',' || pCorreo[i] == ';' || pCorreo[i] == '=' ||
                pCorreo[i] == ':' || pCorreo[i] == '%' || pCorreo[i] == '<' || pCorreo[i] == '>' || pCorreo[i] == '@' ||
                pCorreo[i] == '"' || pCorreo[i] == '[' || pCorreo[i] == ']')
            {
                if(pCorreo[i] == '@')
                {
                    contadorDeArrobas++;
                    if (contadorDeArrobas > 1 || contadorDeArrobas < 1 )
                }
            }
        }

    }

}
