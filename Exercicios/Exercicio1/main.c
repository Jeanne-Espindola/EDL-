#include <stdio.h>
#include <stdlib.h>
#include "Venda.h"

int main(){

    venda v = Criar_venda();
    consulta_codigo(v);
    consulta_valor(v);
    consulta_qtd(v);
    imprimir_dados(v);
    liberar_venda(v);






    return 0;
}