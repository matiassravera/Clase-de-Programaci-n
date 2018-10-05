#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utnBiblioteca.h"
#include "Clientes.h"
#define CANTIDAD_CLIENTES 5
int main()
{

    int elegirOpcion;
    int salidaDelMenu = 0;
    int cantidadDeClientes = 0;
    sClientes clientes[CANTIDAD_CLIENTES];
    initCliente(clientes, CANTIDAD_CLIENTES);
    while(salidaDelMenu == 0)
        {
            system("clear");
            printf("1. Alta cliente\n"
                   "2. Modificar cliente\n"
                   "3. Baja cliente\n"
                   "4. Venta de afiches\n"
                   "5. Editar venta\n"
                   "6. Cobrar venta\n"
                   "7. Imprimir clientes\n"
                   "8. Salir\n");
            elegirOpcion = 0;
            utn_getEntero(&elegirOpcion, 5, "Seleccione...\n", "", 0);
            switch(elegirOpcion)
            {
                case 1:
                    if(!addCliente(clientes, CANTIDAD_CLIENTES))
                    {
                        cantidadDeClientes++;
                    }
                    else
                    {
                        printf("No se pudo dar de alta el cliente\n");
                    }
                    break;
                case 2:

                    break;
                case 3:


                    break;
                case 4:

                    break;
                case 5:

                    break;
                case 6:

                    break;
                case 7:

                    break;
                case 8:
                    salidaDelMenu = 1;
                    break;
                default:
                    printf("Opcion Incorrecta\n");
                    break;
            }
            printf("Pulse Enter para continuar\n");
            __fpurge(stdin);
            getchar();
        }
}
