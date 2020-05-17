#ifndef PUBLICACION_H_
#define PUBLICACION_H_

#define TEXTO_LEN 64

#define ESTADO_PAUSADO	0
#define ESTADO_ACTIVO	1


typedef struct
{
	char texto[TEXTO_LEN];
	int isEmpty;
	int idPub;
	int idCliente;
	int rubro;
	int estado;
}Publicacion;

int pub_imprimir(Publicacion* auxAviso);
int pub_inicializarArray(Publicacion* array,int limite);
int pub_altaArray(Publicacion* array,int limite, int indice, int* idPub, int idCliente);
int pub_getEmptyIndex(Publicacion* array,int limite);
int pub_imprimirArray(Publicacion* array,int limite);
int pub_buscarId(Publicacion array[], int limite, int valorBuscado);
int pub_modificarArray(Publicacion* array,int limite, int indice);
int pub_bajaArray(Publicacion* array,int limite, int indice);
int pub_ordenarPorNombre(Publicacion* array,int limite);

int pub_altaForzadaArray(Publicacion* array,int limite, int indice, int* idPub, int* idCliente,char* texto,int* rubro,int* estado);

#endif /* PUBLICACION_H_ */
