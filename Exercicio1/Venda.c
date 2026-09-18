#include <stdio.h>
#include <stdlib.h>


struct Venda{
    int codigoDoProduto; //codigo de um produto
    float valor; //valor de um produto
    int qtd; //quantidade vendida de um produto


};

typedef struct Venda* venda;


venda Criar_Venda(int codigoDoProduto, float valor, int qtd){
    venda v = (venda) malloc(sizeof(struct Venda));
    if(v != NULL){
        v->codigoDoProduto = codigoDoProduto;
        v->valor = valor;
        v->qtd = qtd;
        
    }
    return v;
}

int consulta_codigo(venda v){
    if(v != NULL){
        return v->codigoDoProduto;
    }

    return -1;
}

float consulta_valor(venda v){
    if(v != NULL){
        return v->valor;
    }
    return;
}

int consulta_qtd(venda v){
    if(v != NULL){
        return v->qtd;
    }
    return -1;
}

void Imprimir_dados(venda v){
    if(v != NULL){
        printf("\n---CONSULTA DADOS---\n");
        printf("\nCODIGO DO PRODUTO: %d", v->codigoDoProduto);
        printf("\nVALOR DO PRODUTO: %.2f", v->valor);
        printf("\nQUANTIDADE DO PRODUTO: %d", v->qtd);
    }
    else{
        return;    }
}


void liberar_venda(venda v){
    if(v != NULL){
        free(v);
    }
}
