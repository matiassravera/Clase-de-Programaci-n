#ifndef UTNBIBLIOTECA_H_INCLUDED
#define UTNBIBLIOTECA_H_INCLUDED

int utn_getNombre(char *pNombre, int limite, char *mensaje,
                  char *mensajeError, int reintentos);

int utn_getEnteroSoloNumeros(int *pEntero, int limite, char *mensaje,
                            char *mensajeError, int reintentos);

int isValidCuilOrCuit(char *pBuffer, int limite);


#endif // UTNBIBLIOTECA_H_INCLUDED
