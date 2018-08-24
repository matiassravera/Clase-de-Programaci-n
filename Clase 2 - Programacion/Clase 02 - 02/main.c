#include <stdio_ext.h>
#include <stdlib.h>

#define TOTAL_NOTAS 5

int main()
{
    float nota [TOTAL_NOTAS];
    float promedio;
    float acumNota=0;
    int i;

    for (i=0; i<TOTAL_NOTAS; i++)
    {
        printf("Ingrese nota %d: ",i+1);
        while (scanf("%2f",&nota[i]) != 1 || nota[i]>10 || nota[i]<1)
        {
            printf("\nError al ingresar dato solicitado. \nIngrese nota %d: ",i+1);
            __fpurge(stdin);
        }
        acumNota=acumNota+nota[i];
    }
    promedio=acumNota/TOTAL_NOTAS;
    printf("\n El promedio de las notas es: %.2f", promedio);
    return 0;
}
