#include <stdio.h>
#include <stdlib.h>
//#include "TDAlista.h"

/*------------- estructura de datos -------------*/
// TDA cola de números enteros
//dato sería el número de la carga
typedef struct nodoCola{
    int dato;
    struct nodoCola *siguiente;
    }nodoCola;


typedef struct{
	int size;
	nodoCola *n_frente;
	nodoCola *n_final;
	}cola;


/*------------- operaciones -------------*/

// crea_cola_vacia() retorna una cola vacía 
// orden de complejidad: O(1)
cola* crea_cola_vacia(void);


// verifica si la cola c está vacía o no retorna 0 o 1.
int es_cola_vacia(cola *c);


// agrega a la cola c un nuevo dato.
void encolar(cola* c, int dato);


// eliminna de la cola c un dato
void descolar(cola *c);


// Devuelve un puntero al primer nodo de la cola c.
nodoCola* frente(cola *c);


// Libera la memoria la memoria del acola c.
void liberar_cola(cola *c);

void imprime_cola(cola *c);