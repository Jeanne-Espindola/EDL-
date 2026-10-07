#include <stdio.h>
#include <stdlib.h>
#include "musica.h"
#include "Lista.h"

struct elem{ 

    Musica musica;
    struct elem* prox;

};

struct lista{ 

    int qtd;
    Elem* inicio;

};


Lista criar_lista(){

    Lista li = malloc(sizeof(struct lista));

    if(li != NULL){
        li->qtd = 0;
        li->inicio = NULL;
    }

    return li;
}


int inserir_inicio(Lista li, Musica musica){

    Elem* no = malloc(sizeof(struct elem));

    if(li == NULL){
        return 0;
    }

    if(no != NULL){

        no->musica = musica; 
        no->prox = li->inicio; 
        li->inicio = no; 
        li->qtd++;

        return 1;
    }

    return 0;
}


int inserir_final(Lista li, Musica musica){

    if(li == NULL){
        return 0;
    }

    Elem* no = malloc(sizeof(struct elem));

    if(no == NULL){
        return 0;
    }

    no->musica = musica;
    no->prox = NULL;

    if(li->inicio == NULL){ 

        li->inicio = no;
        li->qtd++;

        return 1;
    }

    Elem* aux = li->inicio; 

    while(aux->prox != NULL){ 

        aux = aux->prox;
    }

    aux->prox = no; 
    li->qtd++;

    return 1;
}


int inserirPorPosicao(Lista li, int posicao, Musica musica){

    if(li == NULL || posicao > li->qtd || posicao < 0){
        return 0;
    }

    if(posicao == li->qtd){
        return inserir_final(li, musica);
    }

    if(posicao == 0){
        return inserir_inicio(li, musica);
    }

    Elem* no = malloc(sizeof(struct elem));

    if(no == NULL){
        return 0;
    }

    no->musica = musica;

    Elem* aux = li->inicio;

    for(int i = 0; i < posicao - 1; i++){

        aux = aux->prox;
    }

    no->prox = aux->prox;
    aux->prox = no; 

    li->qtd++;

    return 1;
}


int remover_primeira(Lista li){

    if(li == NULL || li->inicio == NULL){
        return 0;
    }

    Elem* aux = li->inicio;

    li->inicio = aux->prox;

    free(aux);

    li->qtd--;

    return 1;
}


int remover_ultima(Lista li){

    if(li == NULL || li->inicio == NULL){
        return 0;
    }

    Elem* aux = li->inicio;
    Elem* ant = NULL;

    while(aux->prox != NULL){

        ant = aux;
        aux = aux->prox;
    }

    if(ant == NULL){ 

        li->inicio = NULL;

    } else {

        ant->prox = NULL;
    }

    free(aux);

    li->qtd--;

    return 1;
}


int removerPorPosicao(Lista li, int posicao){

    if(li == NULL || li->inicio == NULL){
        return 0;
    }

    if(posicao >= li->qtd || posicao < 0){
        return 0;
    }

    Elem* aux = li->inicio;
    Elem* ant = NULL;

    for(int i = 0; i < posicao; i++){

        ant = aux;
        aux = aux->prox;
    }

    if(ant == NULL){ 

        li->inicio = aux->prox; 
    } else {

        ant->prox = aux->prox;
    }

    free(aux);

    li->qtd--;

    return 1;
}


Elem* consultar_primeira(Lista li){

    if(li == NULL || li->inicio == NULL){
        return NULL;
    }

    return li->inicio;
}


Elem* consultarPorPosicao(Lista li, int posicao){

    if(li == NULL || li->inicio == NULL){
        return NULL;
    }

    if(posicao < 0 || posicao >= li->qtd){
        return NULL;
    }

    Elem* aux = li->inicio;

    for(int i = 0; i < posicao; i++){

        aux = aux->prox;
    }

    return aux;
}


int consultarQtdDeMusica(Lista li){

    if(li == NULL){
        return 0;
    }

    return li->qtd;
}


void liberar_lista(Lista li){

    if(li == NULL){
        return;
    }

    Elem* aux;

    while(li->inicio != NULL){

        aux = li->inicio;
        li->inicio = li->inicio->prox;

        free(aux);
    }

    free(li);
}