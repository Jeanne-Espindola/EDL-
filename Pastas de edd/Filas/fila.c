#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila {
    int dados[MAX];
    int inicio;
    int final;
    int qtd;
};

Fila criar() {
    Fila f = (Fila) malloc(sizeof(struct fila));
    if (f != NULL) {
        f->inicio = 0;
        f->final = 0;
        f->qtd = 0;
    }
    return f;
}

int enfileirar(Fila f, int valor) {
    if (f == NULL || f->qtd == MAX) return 0;
    
    f->dados[f->final] = valor;
    f->final = (f->final + 1) % MAX; // Incrementa o final com lógica circular
    f->qtd++;
    return 1;
}

int desinfileirar(Fila f) {
    if (f == NULL || f->qtd == 0) return 0;

    f->inicio = (f->inicio + 1) % MAX; // Incrementa o inicio com lógica circular
    f->qtd--;
    return 1;
}

int acessar_inicio(Fila f) {
    if (f == NULL || f->qtd == 0){
        return -1;
    }
    return f->dados[f->inicio];
}

void destruir(Fila f) {
    if (f != NULL) {
        free(f);
    }
}
