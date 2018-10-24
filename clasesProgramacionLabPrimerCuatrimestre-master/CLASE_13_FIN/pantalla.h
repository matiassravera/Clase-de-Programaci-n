#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
typedef struct
{
    char nombre[50];
    char direccion[50];
    float precio;
    int tipo;
    //------------
    int idPantalla;
    int isEmpty;
}Pantalla;
#endif // PANTALLA_H_INCLUDED

Pantalla* pantalla_getById (Pantalla* array, int len, int id);
int pantalla_init(Pantalla* array,int limite);
int pantalla_mostrar(Pantalla* array,int limite);
int pantalla_mostrarDebug(Pantalla* array,int limite);
int pantalla_alta(Pantalla* array,int limite);
int pantalla_baja(Pantalla* array,int limite, int id);
int pantalla_modificacion(Pantalla* array,int limite, int id);
int pantalla_ordenar(Pantalla* array,int limite, int orden);
int pantalla_buscarPorId(Pantalla* array,int limite, int id);
int pantalla_altaForzada(Pantalla* array,int limite,char* nombre,char* direccion, float precio, int tipo);
int pantalla_promedioPrecio(float *promedioPrecio, Pantalla *array, int len);
//int buscarLugarLibre(Pantalla* array,int limite);
//int proximoId();
//int pantalla_buscarPorId(Pantalla* array,int limite, int id);

