#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Clientes.h"
#include "utnBiblioteca.h"

#define CANT_MAX_DE_LETRAS 51

int findFreeSpace(sClientes arrayDeCLientes[], int limite);

/** \brief Crea una variable permanente que se incrementa cada vez que se la llama y nos devuelve el proximo ID.
 * \return devuelve el siguiente ID.
 */

int utn_getNextId()
{
    static int idEmpleados = 0;
    idEmpleados++;
    return idEmpleados;
}

/**
* \brief Funcion para obtener el primer lugar libre de un array de tipo cliente, recorriendo el array hasta encontrar un isEmpty en 1.
* \param arrayDeClientes: Es el array que se recorre.
* \param limite: Limite de clientes que puede guardar el array.
* \return retorna el indice de la posicion libre, sino el return es -1.
*/

int findFreeSpace(sClientes arrayDeClientes[], int limite)
{
    int retorno = -1;
    int i;
    if(arrayDeClientes != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            if(arrayDeClientes[i].isEmpty)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

/**
* \brief Funcion para inicializar un array de tipo cliente, recorriendo el array y poniendo cada isEmpty en 1.
* \param arrayDeClientes: Es el array que se recorre.
* \param limite: Es el limite de clientes que puede guardar el array.
* \return retorna 0 si se realizo de manera correcta, si no retorna es -1.
*/

int initCliente(sClientes arrayDeClientes[], int limite)
{
    int retorno = -1;
    int i;
    if(arrayDeClientes != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            arrayDeClientes[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;
}

/**
* \brief Funcion para dar de alta un cliente generando un id
*        de manera automatica y el usuario introduce el resto de datos,
*        si se realiza todo correctamente se guardan los datos y se coloca el isEmpty en 0
* \param arrayDeClientes Es el array que se recorre
* \param limite: Es el limite de empleados que puede guardar el array
* \return retorna es 0 si se realizo de manera correcta, si no el retorno es -1.
*/

int addCliente(sClientes arrayDeClientes[], int limite)
{
    int retorno = -1;
    int indice;
    char nombre[CANT_MAX_DE_LETRAS];
    char apellido[CANT_MAX_DE_LETRAS];
    char cuit [28];
    indice = findFreeSpace(arrayDeClientes,limite);
    if( arrayDeClientes != NULL && limite > 0 && indice >= 0 &&
        indice < limite && arrayDeClientes[indice].isEmpty &&
        !utn_getNombre( nombre, CANT_MAX_DE_LETRAS,"Nombre del cliente: \n",
                        "nombre no valido\nDebe empezar por mayuscula y el resto minusculas\n",2) &&
        !utn_getNombre( apellido, CANT_MAX_DE_LETRAS,"Apellido del cliente: \n",
                        "apellido no valido\nDebe empezar por mayuscula y el resto minusculas\n",2) &&
        !isValidCuilOrCuit(cuit, 28))
    {
        strncpy(arrayDeClientes[indice].nombre, nombre, CANT_MAX_DE_LETRAS);
        strncpy(arrayDeClientes[indice].apellido, apellido, CANT_MAX_DE_LETRAS );
        arrayDeClientes[indice].cuit = cuit;
        arrayDeClientes[indice].isEmpty = 0;
        arrayDeClientes[indice].ID = utn_getNextId();
        retorno = 0;
    }
    return retorno;
}


/**
* \brief Funcion para mostrar todos los datos de los
*        clientes del array (nombre, apellidos, cuit, id)
* \param arrayDeClientes: Es el array que se recorre
* \param limite: Es el limite de empleados que puede guardar el array
* \return retorna 0 si se mostraron los datos, si no retorna -1.
*/
int printClientes(sClientes arrayDeClientes[], int limite)
{
    int retorno = -1;
    int i;
    if(arrayDeClientes != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            if(!arrayDeClientes[i].isEmpty)
            {
                printf("\nNombre: %s\nApellido: %s\nCUIT: %d\nID: %d\n\n", arrayDeClientes[i].nombre, arrayDeClientes[i].apellido, arrayDeClientes[i].cuit, arrayDeClientes[i].ID);
            }
        }
        retorno = 0;
    }
    return retorno;
}

/**
* \brief Funcion para encontrar un cleinte a través de un id,
*        recorriendo el array y comparando los id (donde el isEmpty es 0)
* \param arrayDeClientes Es el array que se recorre
* \param limite: Es el limite de empleados que puede guardar el array
* \param id: ID con el que se compara cada id del array
* \return   retorna la direccion de la struct del cliente donde se encontro el id,
*           si no el retorno es NULL.
*/
Clientes* cliente_getById(sCliente arrayDeCLientes[], int limite, int id)
{
    sClientes* retorno = NULL;
    int i;
    if(arrayDeClientes != NULL && len > 0)
    {
        for(i=0;i<limite;i++)
        {
            if(!arrayDeClintes[i].isEmpty && arrayDeClientes[i].idEmpleado == id)
            {
                retorno = &arrayDeClientes[i];
                break;
            }
        }
    }
    return retorno;
}


/**
* \brief    Se utiliza esta funcion para modificar un empleado,
*           el usuario elige a traves de un menu
*           que dato modificar o modificarlos todos
* \param array Es el array que se recorre
* \param len Es el limite de empleados que puede guardar el array
* \param reintentos Veces que el usuario podra volver a introducir el id
* \return El retorno es 0 si se realizo de manera correcta, si no el retorno es -1.
*/

int modificateClientes (sClientes arrayDeClientes[i], int limite, int reintentos)
{
    int retorno = -1;
    sCliente clienteModificado[] = NULL;
    int elegirOpcion = 0;
    int id;
    int i;
    char nombre[CANT_MAX_DE_LETRAS];
    char apellido[CANT_MAX_DE_LETRAS];
    char cuit[28];
    if(arrayDeClientes != NULL && limite > 0 && reintentos >= 0)
    {
        printClientes(arrayDeCLientes, limite);
        for(i=0; i <= reintentos; i++)
        {
            if( !utn_getEntero(&id, limite, "Introduzca el Id que desea modificar\n", "", 0) &&
                cliente_getById(arrayDeClientes, limite, id) != NULL)
            {
                clienteModificado = cliente_getById(arrayDeClientes, limite, id);
                break;
            }
            else
            {
                printf("Id erroneo\n");
            }
        }
    }
    if(clienteModificado != NULL)
    {
        printf("1. Modificar nombre\n"
               "2. Modificar apellido\n"
               "3. Modificar cuit\n"
               "4. Modificar todos los campos\n");
        utn_getEnteroSoloNumeros(&elegirOpcion, 5, "Seleccione...\n", "", 0);
        switch(elegirOpcion)
        {
            case 1:
                if( !utn_getNombre(nombre, CANT_MAX_DE_LETRAS,"Nombre del cliente: \n",
                    "nombre no valido\nDebe empezar por mayuscula y el resto minusculas\n",2))
                {
                    strncpy(clienteModificado->nombre, nombre, CANT_MAX_DE_LETRAS);
                    retorno = 0;
                }
                break;
            case 2:
                if( !utn_getNombre( apellido, CANT_MAX_DE_LETRAS,"Apellido empleado?\n",
                    "apellido no valido\nDebe empezar por mayuscula y el resto minusculas\n",2))
                {
                    strncpy(clienteModificado->apellido, apellido, CANT_MAX_DE_LETRAS);
                    retorno = 0;
                }
                break;
            case 3:
                if(!isValidCuilOrCuit(cuit, 28))
                {
                    clienteModificado->cuit = cuit;
                    retorno = 0;
                }
                break;
            case 4:
                if( arrayDeClientes != NULL && limite > 0 && indice >= 0 &&
                    indice < limite && arrayDeClientes[indice].isEmpty &&
                    !utn_getNombre( nombre, CANT_MAX_DE_LETRAS,"Nombre del cliente: \n",
                        "nombre no valido\nDebe empezar por mayuscula y el resto minusculas\n",2) &&
                    !utn_getNombre( apellido, CANT_MAX_DE_LETRAS,"Apellido del cliente: \n",
                        "apellido no valido\nDebe empezar por mayuscula y el resto minusculas\n",2) &&
                    !isValidCuilOrCuit(cuit, 28))
                {
                    strncpy(clienteModificado->nombre, nombre, CANT_MAX_DE_LETRAS);
                    strncpy(clienteModificado->apellido, apellido, CANT_MAX_DE_LETRAS);
                    clienteModificado->cuit = cuit;
                    retorno = 0;
                }
                break;
            default:
                printf("Opcion Incorrecta\n");
                break;
        }
    }
    return retorno;
}



