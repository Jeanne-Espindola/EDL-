//Exercicio
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct planoCartesiano {
    float x;
    float y;
};

typedef struct planoCartesiano Plano;


Plano* criar(float x, float y) {
    Plano *p = (Plano*) malloc(sizeof(Plano));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}


float acessar(Plano *p, char var) {
    if (p == NULL) return -1;

    if (var == 'x' || var == 'X') return p->x;
    if (var == 'y' || var == 'Y') return p->y;

    return -1;
}


int alterar(Plano *p, float x, float y) {
    if (p == NULL) return 0;
    
    p->x = x;
    p->y = y;
    return 1;
}


float distancia(Plano *p, float x2, float y2) {
    if (p == NULL) return -1;

   
    float x1 = acessar(p, 'x');
    float y1 = acessar(p, 'y');

    float dx = x2 - x1;
    float dy = y2 - y1;

    
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

void destruir(Plano *p) {
    if (p != NULL) {
        free(p);
    }
}

