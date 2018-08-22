#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorUno;
    int valorDos;
    int valorTres;
    int valorDelMedio;
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
        }else if (valorDos > valorMax)
                {
                    valorMax=valorDos;
                }
        }
    if ((valorUno >= valorDos && valorUno <= valorTres) || (valorUno <= valorDos && valorUno >= valorTres))
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
    }
    printf("El valor del medio es %d", valorDelMedio);
    printf("\nEl valor minimo es el %d", valorMin);
    printf("\nEl valor max es %d", valorMax);
    return 0;
}
