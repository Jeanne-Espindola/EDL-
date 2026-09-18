#include <stdio.h>
#include <stdlib.h>

//fazer a versao quadrado do ultimo exercicio

struct quadrado{
    float lado;
    float area;
    float perimetro;
};

typedef struct quadrado Quadrado; 

//Precisa criar, acessar, alterar e destruir - CRUD - por isso faz essas funções


*Quadrado criar_quadrado(float lado){ //aqui nos passamos o endereco do nosso quadrado, cria so uma vez e deixa ele la. 

    *Quadrado q = malloc(sizeof(Quadrado)); //reserva uma memoria que caiba a struct quadrado - Criar - Faz isso pra nao ficar precisando criar outro quadrado na main
    if(q == NULL){
        return NULL; // caso nao tenha espaço e retornar null, retorne null...
    }

    q->lado = lado; //q é o ponteiro de uma struct por isso vai usar a seta
    q->area = q->lado * q->lado;
    q->perimetro = 4 * q->lado;

    return q; //ai aqui q vai ser guardado as variaveis. 
}

float acessar(*Quadrado q, char var){
   if(var == 'L'){
    return q->lado;
   }
   if(var == 'A'){
    return q->area;
   }
   if(var == 'P'){
    return p->perimetro;
   }
   return -1;
}

int alterar(*Quadrado p, float lado){
    if(lado <= 0){
        return -1;
    }
    else{
    q->lado = lado;
    q->area = q->lado * q->lado;
    q->perimetro = 4 * q->lado;
    return 1;
}
}

void destruir(*Quadrado q){
if(q != NULL){
    free(q);
}
}


int main(){
    float lado = 4;
    criar_quadrado(lado);

    printf("\nLado do quadrado: %.2f", acessar(q, 'L'));
    printf("\nArea do quadrado: %.2f", acessar(q, 'A'));
    printf("\nPerimetro do quadrado: %.2f", acessar(q, 'P'));

    destruir(q);



    return 0;
}