#include <stdio_ext.h>
#include <stdlib.h>

#define LIMITE_ARRAY 3

int main()
{
    /* int valorUno;
     int valorDos;
     int valorTres;
     int valorMax;
     int valorMin;
     printf("\tIngrese 1er valor: ");
     while (scanf("%d",&valorUno)!= 1)
     {
         printf("\nError al ingresar valor solicitado");
         __fpurge(stdin);
     }
     valorMax=valorUno;
     valorMin=valorUno;
     printf("\n\tIngrese 2do valor: ");
     while (scanf("%d",&valorDos)!= 1)
     {
         printf("\nError al ingresar valor solicitado");
         __fpurge(stdin);
     }
      if (valorDos < valorMin)
     {
         valorMin=valorDos;
     }
     else if (valorDos > valorMax)
                 {
         valorMax=valorDos;
     }
     printf("\n\tIngrese 3er valor: ");
     while (scanf("%d",&valorTres)!= 1)
     {
         printf("\nError al ingresar valor solicitado");
         __fpurge(stdin);
     }
     if (valorTres < valorMin)
     {
         valorMax=valorTres;
     }else if (valorTres > valorMax)
     {
         valorMax=valorTres;
     }
     printf("\n\tEl valor mínimo es %d", valorMin);
     printf("\n\tEl valor máximo es %d", valorMax);
     if ( valorUno < valorMax && valorUno > valorMin)
     {
     printf("\n\tEl valor del medio es %d", valorUno);
     } else if ( valorDos < valorMax && valorDos > valorMin)
     {
     printf("\n\tEl valor del medio es %d", valorDos);
     } else if( valorTres < valorMax && valorTres > valorMin)
     {
     printf("\n\tEl valor del medio es %d", valorTres);
     }
     return 0;
     */

     //*Como resolverlo utilizando ARRAYS

    int numero[LIMITE_ARRAY];
    int numeroMaximo;
    int numeroMinimo;
    int i;

    for (i=0; i<3; i++)
    {
        printf("Ingrese numero %d: ",i+1);
        while (scanf("%d",&numero[i]) != 1)
        {
            printf("\nError al ingresar dato solicitado. \nIngrese numero %d: ",i+1);
            __fpurge(stdin);
        }
        if (i==0)
        {
            numeroMinimo = numero[i];
            numeroMaximo = numero[i];
        }
        else if (numero[i] > numeroMaximo)
        {
            numeroMaximo = numero[i];
        }
        else if (numero[i] < numeroMinimo)
        {
            numeroMinimo = numero[i];
        }

    }
    printf("\nEl numero mínimo es %d", numeroMinimo);
    printf("\nEl numero máximo es %d", numeroMaximo);

    for (i=0; i<3; i++)
    {
        if (numero[i] > numeroMinimo && numero[i] < numeroMaximo)
        {
            printf("\nEl numero del medio es %d", numero[i]);
            break;
        }
    }
    return 0;

}
