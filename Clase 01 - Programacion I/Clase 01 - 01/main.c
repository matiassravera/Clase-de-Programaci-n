#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorUno;
    int valorDos;
    int valorTres;
    /*int valorDelMedio;*/
    int valorMax;
    int valorMin;
    printf(" Ingrese 1er valor: ");
    scanf("%d",&valorUno);
    valorMax=valorUno;
    valorMin=valorUno;
    printf(" Ingrese 2do valor: ");
    scanf("%d",&valorDos);
    printf(" Ingrese 3er valor: ");
    scanf("%d",&valorTres);
    if (valorDos < valorMin)
    {
        valorMin=valorDos;
    }
    else if (valorDos > valorMax)
                {
        valorMax=valorDos;
    }
    if (valorTres < valorMin)
    {
        valorMax=valorTres;
    }else if (valorTres > valorMax)
    {
        valorMax=valorTres;
    }
    printf("\nEl valor mínimo es %d", valorMin);
    printf("\nEl valor máximo es %d", valorMax);
   /*if ((valorUno >= valorDos && valorUno <= valorTres) || (valorUno <= valorDos && valorUno >= valorTres))
    {
        valorDelMedio = valorUno;
    }else
    {
        if (( valorDos >= valorUno && valorDos <= valorTres) || (valorDos <= valorUno && valorDos >= valorTres))
        {
            valorDelMedio = valorDos;
        }else
        {
            valorDelMedio = valorTres;
        }
    }*/
    if ( valorUno < valorMax && valorUno > valorMin)
    {
    printf("\nEl valor del medio es %d", valorUno);
    } else if ( valorDos < valorMax && valorDos > valorMin)
    {
    printf("\nEl valor del medio es %d", valorDos);
    } else if( valorTres < valorMax && valorTres > valorMin)
    {
    printf("\nEl valor del medio es %d", valorTres);
    }
    return 0;
}
