#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
//??? ingresarNombre (???);
//??? validarNombre (???);
//#define TAMANIO 10
#define TAMANIO 31
int main()
{
    char palabra[TAMANIO];
    pedirPalabraSinCaracteresEspeciales(&palabra[TAMANIO]);

  /*  char nombre [21];
    char auxNombre[];
    int i;
    fgets(nombre, 21, stdin);
    __fpurge(stdin);
    for (i=auxNombre; i < 21; i++)
    {
        if (getOnlyLetters (auxNombre)==0)
        {
            printf("\n\nUSTED INGRESO EL NOMBRE: %s.\n\n");
        }
    }

 */



/*  FUNCIONES PARA USUARIO Y CONTRASEÑA
    char usuario[6];
    char clave[9];
    char auxUser[]="admin\n";
    char auxClave[]="admin\n";
    int otroAux=strlen(usuario);
    int retorno;

    printf("\n\nUSUARIO: ");
    fgets(usuario, 16, stdin);
    __fpurge(stdin);

    printf("\n\nCLAVE: ");
    fgets(clave, 9, stdin);
    __fpurge(stdin);

    retorno=strcmp(usuario, clave);

    printf("\nCLAVE: %s.\nUSUARIO: %s.", clave, usuario);
    printf("\n\nTamanio %d.\n", otroAux);
    printf("\nretorno %d \n", retorno);

    if (strcmp(usuario, auxUser)==0 && strcmp(usuario, auxClave)==0 )
    {

        //STRCMP ==============> COMPARA LA CANTIDAD DE BYTES.
        //9-7= + 2 (RETORNO) ==> PRIMER VALOR POSEE MAYOR CANTIDAD DE BYTES.
        //9-9= 0   (RETORNO) ==> IGUAL CANTIDAD DE BYTES.
        //7-9= - 2 (RETORNO) ==> SEGUNDO VALOR POSEE MAYOR CANTIDAD DE BYTES.


        printf("\n\n\t\tINGRESO CORRECTAMENTE AL SISTEMA.\n\n");
    }
    else
    {
        printf("\n\nNO INGRESO AL SISTEMA.");
    }

*/
/*
    char nombre[TAMANIO];
    char apellido [TAMANIO];
    char localidad [TAMANIO];
    //int tamanio;
*/
 /*   tamanio=sizeof(nombre);
    printf("\n\n\tEl tamanio antes es: %d.\n\n", tamanio);
    scanf("%s", nombre);
    printf("\n\n\tEl nombre ingresado es: %s.\n\n", nombre);
    printf("\n\n\tEl tamanio despues es: %d.\n\n", tamanio);
    //printf("\n\nEl nombre ingresado es: %p.", nombre); - Hexadecimal
    //printf("\n\nEl nombre ingresado es: %d.", nombre); - Entero

    printf("El nombre ingresado es: %s  y usted es...", nombre);
 */
/*
    fgets(nombre, TAMANIO, stdin);
    __fpurge(stdin);
    fgets(apellido, TAMANIO, stdin);
    __fpurge(stdin);
    fgets(localidad, TAMANIO, stdin);
    __fpurge(stdin);
    printf("\n\nEl nombre ingresado es: %s \nEl apellido ingresado es: %s \nLa localidad ingresada es %s\n\n", nombre, apellido, localidad);

*/
    return 0;
}

/*char validarPalabraSinCararcteresEspeciales(char* palabra[], char auxPalabra[])
{
    int retorno=0;
    int i;
    for (i=0; i < strlen(auxPalabra[i]); i ++)
    {
        if((auxPalabra[i]>='0' && auxPalabra[i]<='9') || (auxPalabra[i] = ''))
        {
            printf("Ingreso una palabra correcta");
            retorno=1;
        }
        else
        {
            printf("Este nombre posee caracteres no aceptables");
        }

    }
    return retorno;
}
*/

/*int getOnlyLetters (char* palabra)
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

*/
