#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
     float x1 = 2, y1 = 5;
    float x2 = 4, y2 = 8;

    
    Plano *p = criar(x1, y1);

    if (p != NULL) {
        printf("Ponto 1 -> x: %.2f, y: %.2f\n", acessar(p, 'x'), acessar(p, 'y'));
        printf("Ponto 2 -> x: %.2f, y: %.2f\n", x2, y2);

        float dist = distancia(p, x2, y2);
        printf("-- A distancia entre os pontos e: %.2f --\n", dist);

        destruir(p);
    }

    return 0;




    return 0;
}