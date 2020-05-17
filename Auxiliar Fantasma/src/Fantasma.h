#ifndef FANTASMA_H_
#define FANTASMA_H_

#define LONG_LEN 50
#define SHORT_LEN 20

typedef struct
{
	char campoChar50[LONG_LEN];
	char campoChar20[SHORT_LEN];
	float campoFloat;
	int isEmpty;
	int id;
}Fantasma;

int fan_imprimir(Fantasma* auxProducto);
int fan_inicializarArray(Fantasma* array,int limite);
int fan_altaArray(Fantasma* array,int limite, int indice, int* id);
int fan_getEmptyIndex(Fantasma* array,int limite);
int fan_imprimirArray(Fantasma* array,int limite);
int fan_buscarId(Fantasma array[], int limite, int valorBuscado);
int fan_modificarArray(Fantasma* array,int limite, int indice);
int fan_bajaArray(Fantasma* array,int limite, int indice);
int fan_ordenarPorNombre(Fantasma* array,int limite);

#endif /* FANTASMA_H_ */
