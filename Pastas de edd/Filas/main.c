#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila f = criar();

    enfileirar(f, 20);
    enfileirar(f, 40);
    enfileirar(f, 60);
    enfileirar(f, 80);

    printf("Inicio da fila: %d\n", acessar_inicio(f));
    
    desinfileirar(f);
    printf("Inicio da fila apos remover: %d\n", acessar_inicio(f));

    if (enfileirar(f, 50)) {
        printf("\nEnfileirou\n");
    } else {
        printf("\nNao enfileirou\n");
    }

    destruir(f);
    return 0;
}