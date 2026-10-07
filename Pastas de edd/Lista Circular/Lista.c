#include <stdio.h>
#include <stdlib.h>


struct elem{ //aqui fala sobre um elemento especifico
    int valor;
    struct elem* prox;
};

typedef struct elem Elem;

struct lista{ //aq fala sobre uma lista toda
    int qtd;
    Elem* final;
};

typedef struct lista* Lista;

Lista criar_lista(){
    Lista li = malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
        Elem* final = NULL;
    }
    return li;
}

int inserir_inicio(Lista li, int valor){
    if(li = NULL || valor <= 0){

    }
    Elem* no = malloc(sizeof(struct lista));

    no->valor = valor; //valor q vamos inserir vai ser igual ao elemento que vamos colocar. 
    Elem* aux = malloc(sizeof(struct lista));

    aux = li->final->prox; //guarda o endereço do inicio

    li->final->prox = no->prox; // o inicio = o proximo dps do no q vamos inserir

    no = li->final->prox // inicio 








}














int acessar_inicio(Lista li){
    if(li == NULL){
        return 0;
    }
    return li->final->prox;
}

int acessar_final(Lista li)[
    if(li == NULL){
        return 0;
    }

    return li->final;

]