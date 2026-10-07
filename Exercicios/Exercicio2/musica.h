typedef struct musica* Musica;

Musica criar_musica(char *titulo, char *artista, int duracao);
char* consultar_titulo(Musica m);
char* consultar_artista(Musica m);
int consultar_duracao(Musica m);
int imprimir_dados(Musica m);
void liberar_musica(Musica m);