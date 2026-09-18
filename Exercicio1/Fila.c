#include <stdio.h>
#include <stdlib.h>


int removerProximaVenda(Venda v, Fila f){
    if(f != NULL && f->qtd > 0){
        f->v[f->final]--;
        f->final--;
        f->qtd--;
        return 1;
    }
    return -1;
}




















int main(){






    return 0;
}