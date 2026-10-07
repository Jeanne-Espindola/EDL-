
typedef struct elem Elem;
typedef struct lista* Lista;


Lista criar_lista();
int inserir_inicio(Lista li, Musica musica);
int inserir_final(Lista li, Musica musica);
int inserirPorPosicao(Lista li, int posicao, Musica musica);
int remover_primeira(Lista li);
int remover_ultima(Lista li);
int removerPorPosicao(Lista li, int posicao);
Elem* consultar_primeira(Lista li);
Elem* consultarPorPosicao(Lista li, int posicao);
int consultarQtdDeMusica(Lista li);
void liberar_lista(Lista li);