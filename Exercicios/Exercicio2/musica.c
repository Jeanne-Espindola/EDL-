#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musica.h"

struct musica{ 
    char titulo[100];
    char artista[100];
    int duracao;
};


Musica criar_musica(char *titulo, char *artista, int duracao){ 
    Musica m = malloc(sizeof(struct musica));
    if(m != NULL){
       strcpy(m->titulo, titulo); 
       strcpy(m->artista, artista);
       m->duracao = duracao;
        return m;
    }
    return NULL;
}

char* consultar_titulo(Musica m){
    if(m == NULL){
        return NULL;
    }
    return m->titulo;
}


char* consultar_artista(Musica m){
    if(m == NULL){
        return NULL;
    }
    return m->artista;
}

int consultar_duracao(Musica m){
    if(m == NULL){
        return 0;
    }
    return m->duracao;
}

int imprimir_dados(Musica m){
    if(m == NULL){
        return 0;
    }
    printf("\nTitulo da musica: %s", m->titulo);
    printf("\nArtista da musica: %s", m->artista);
    printf("\nDuracao da musica: %d", m->duracao);
    return 1;
}

void liberar_musica(Musica m){
    if(m != NULL){
        free(m);
    }
}
