#include <stdio.h>
#include <stdlib.h>
#include "musica.h"
#include "lista.h"

int proxima_posicao = 1;

void adiciona_musica(Lista li, Musica musica) {
    inserir_final(li, musica);
}

void adiciona_musica_posicao(Lista li, int posicao, Musica musica) {
    inserirPorPosicao(li, posicao, musica);
}

void remove_musica(Lista li, int posicao) {
    removerPorPosicao(li, posicao);
}





int tempo_restante(Lista li) {
    int soma_tempo = 0;
    int duracoes[] = {354, 431, 454, 410, 406, 720, 537, 353, 413, 204};
    int qtd = consultarQtdDeMusica(li);
    
    for (int i = proxima_posicao; i <= qtd; i++) {
        if (i >= 1 && i <= 10) {
            soma_tempo += duracoes[i - 1];
        }
    }
    return soma_tempo;
}





void play(Lista li) {
    int qtd = consultarQtdDeMusica(li);
    if (proxima_posicao <= qtd) {
        printf("\nreproduzindo posicao %d\n", proxima_posicao);
        consultarPorPosicao(li, proxima_posicao);
        proxima_posicao++;
    } else {
        printf("\nA playlist terminou\n");
    }
}





int musicas_reproduzidas() {
    return proxima_posicao - 1;
}

int main() {
    Lista playlist = criar_lista();

    Musica m1  = criar_musica("Bohemian Rhapsody", "Queen", 354);
    Musica m2  = criar_musica("Hey Jude", "Beatles", 431);
    Musica m3  = criar_musica("Imperfeito", "Rhayssa", 454);
    Musica m4  = criar_musica("Vampiro", "Matue", 410);
    Musica m5  = criar_musica("Que se chama amor", "So pra contrariar", 406);
    Musica m6  = criar_musica("Capricorniana", "Poesia Acustica", 720);
    Musica m7  = criar_musica("Quem teve la?", "Costa Gold", 537);
    Musica m8  = criar_musica("Palpite", "Vanessa Rangel", 353);
    Musica m9  = criar_musica("Tudo vai dar certo", "Nativuts", 413);
    Musica m10 = criar_musica("Sozinho", "Caetano Veloso", 204);

    adiciona_musica(playlist, m1);
    adiciona_musica(playlist, m2);
    adiciona_musica(playlist, m3);
    adiciona_musica(playlist, m4);
    adiciona_musica(playlist, m5);
    adiciona_musica(playlist, m6);
    adiciona_musica(playlist, m7);
    adiciona_musica(playlist, m8);
    adiciona_musica(playlist, m9);
    adiciona_musica(playlist, m10);

    play(playlist);
    play(playlist);

    printf("\nTempo restante na playlist: %d segundos\n", tempo_restante(playlist));
    printf("Musicas ja reproduzidas: %d\n", musicas_reproduzidas());

    play(playlist);

    printf("\nQuantidade de musicas da playlist: %d\n", consultarQtdDeMusica(playlist));
    printf("Posicao da proxima musica a ser reproduzida: %d\n", proxima_posicao);

    liberar_lista(playlist);

    return 0;
}