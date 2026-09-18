#include <stdio.h>
#include <stdlib.h>

#define MAX 4

typedef struct fila* Fila;

Fila criar();
int enfileirar(Fila f, int valor);
int desinfileirar(Fila f);
int acessar_inicio(Fila f);
void destruir(Fila f);