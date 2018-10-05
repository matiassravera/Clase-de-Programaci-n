#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

#define CANT_MAX_DE_LETRAS 51

typedef struct sClientes
{
    int ID;
    char nombre[CANT_MAX_DE_LETRAS];
    char apellido[CANT_MAX_DE_LETRAS];
    int cuit;
    int isEmpty;
}sClientes;



#endif // CLIENTES_H_INCLUDED
