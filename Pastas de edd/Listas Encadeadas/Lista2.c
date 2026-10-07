#include<stdlib.h>
#include <stdio.h>

struct elem{
    int valor; //aqui vai ser o que vai ser armazenado na nossa lista, pode ser uma struct, um vetor etc
    struct elem* prox;
};
typedef struct elem Elem;

struct lista{
    int qtd;
    Elem* inicio;
};
typedef struct lista* Lista;

Lista criar_lista(){
    Lista li = malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
        li->inicio = NULL;
    }
    return li;
}

int inserir_inicio(Lista li, int valor_inserir){
    Elem* no = malloc(sizeof(Elem));
    if(no != NULL){
        no->valor = valor_inserir;
        no->prox = li->inicio;
        li->inicio = no;
        li->qtd++;
        return 1;
    } 
    return 0;
}

int inserir_final(Lista li, int valor_inserir){
    Elem* no = malloc(sizeof(Elem));
    if(no != NULL){ 
        no->valor = valor_inserir;
        no->prox = NULL;
        if(li->inicio == NULL){ //se a lista tiver vazia
            li->inicio = no;
            li->qtd++;
            return 1;
        }
        Elem* aux = li->inicio; //primeiro elemento do nosso no da lista
        while(aux->prox != NULL){ //forçando ate chegar no final 
            aux = aux->prox; //guarda o valor de aux prox, quando aux prox for igual a null ele vai 
            //guardar nosso valor
        }
        aux->prox = no;
        li->qtd++;
        return 1;
    }
    return 0;
}

// remover_inicio

int remover_inicio(Lista li){
    if(li == NULL || li->qtd <= 0){
        return 0;
    }
    Elem* no_remover = li->inicio;
    li->inicio = no_remover->prox; //atualiza o inicio pro proximo valor dps do q a gente removeu
    free(no_remover);
    li->qtd--;
    return 1;
}


int remover_final(Lista li){
    if(li == NULL || li->qtd <= 0){
        return 0;
    }
    Elem* no_remover = li->inicio;
    Elem* ant = NULL; //estou criando esse ponteiro pra quando o proximo for null, a gente poder
    //guardar o valor penultimo. 

    if(no_remover->prox = NULL){ //ou seja se so existir um elemento
        free(ant);
        li->inicio = NULL;
        li->qtd--;
        return 1;
    }

    while(no_remover->prox != NULL){
        ant = no_remover; //aqui a gente guarda o penultimo antes de atualizar ele
        no_remover = no_remover->prox; //aqui estamos atualizando nosso no ate da null. 
    }

    //no_remover vai guardar o ultimo valor. 
    free(no_remover);

    
    
}

int acessar_inicio(Lista li){
    if(li->qtd == 0){
        return 0;
    }
    return li->inicio->valor; //retornando o valor de inicio
}


int acessar_final(Lista li){
    if(li->qtd == 0){
        return 0;
    }
    
}

int destruir(Lista li){ //pode remover do final pro inicio ou do inicio pro final, mas se for do inicio pro final vai ter q guardar 
    if(li == NULL){ //para q n tente destruir duas vezes
        return;
    }
    Elem* aux = li->inicio;
    while(aux->prox != NULL){
        Elem* ant = aux; //pra n perder a referencia do anterior.
        aux = aux->prox;
        free(ant);
    }
    free(aux);
    free(li);
}

int quantidadeDaLista(Lista li){
    if(li == NULL){
        return 0;
    }
    return li->qtd;
}



int buscar_por_posicao(Lista li, int posicao){
    if(li == NULL){
        return 0;
    }
   if(posicao > li->qtd || posicao <= 0){
        return 0;
   }
   Elem* aux = li->inicio; //guarda o valor do inicio
   for(int i = 0; i < posicao; i++){
        aux = aux->prox;
   }
   return aux->valor;
}

int busca_por_valor(Lista li, int valorBuscado){
    if(li == NULL){
        return 0;
    }
    Elem* aux = li->inicio;
    for(int i = 0; i < li->qtd; i++){
        if(aux->valor == valorBuscado){
            return aux->valor;
        }
        aux = aux->prox;
    }}
    return 0;
}

//falta esses dois abaixo (prof vai da posteriormente)
// buscar_por_valor
// buscar_por_posicao


int main(){
    Lista li = criar_lista();
    inserir_final(li, 10);
    inserir_final(li, 50);
    inserir_final(li, 15);
    inserir_inicio(li, 40);
    inserir_inicio(li, 70);
    inserir_inicio(li, 100);

    int inicio = acessar_inicio(li);
    printf("\nInicio da lista: %d", inicio);

    void imprimir_lista(Lista li){
        if(li->qtd == 0){
            return;
        }
        Elem* aux = li->inicio; //guarda o endereco do inicio
         //o inicio recebe o proximo valor
        for(int i = 0; i < li->qtd; i++){
            printf("\n[%d]", aux->valor);
            aux = aux->prox;
        }
        printf("NULL\n");
    }



    imprimir_lista(li);

    void imprimir_lista(Lista li){ //apenas utilizando as funções ja existentes.
        int qtd = quantidadeDaLista(li);
        if(qtd == 0){
            return;
        }
        Elem* aux = acessar_inicio(li); //anterior
        for(int i = 0; i < qtd; i++){
            printf("\n[%d]", consulta_por_pos(li, i));
        }
    }








    return 0;
}