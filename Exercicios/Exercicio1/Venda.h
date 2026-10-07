#include <stdio.h>
#include <stdlib.h>


typedef struct Venda* venda;

venda Criar_Venda(int codigoDoProduto, float valor, int qtd);
int consulta_codigo(venda v);
float consulta_valor(venda v);
int consulta_qtd(venda v);
void Imprimir_dados(venda v);
void liberar_venda(venda v);

