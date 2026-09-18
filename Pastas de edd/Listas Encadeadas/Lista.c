#include <stdio.h>
#include <stdlib.h>

//As listas - unicamente encadeadas: todo o elemento aponta pro proximo elemento
//O ultimo elemento nao aponta pra ninguem. Ela é dinamica pois conforme eu insiro ou removo do vetor ele libera espaço, ou seja,
//o vetor nao tem um tamnho DEFINIDO.

//vao ser dois tads (um pro head que seria o tad lista: int qtd) e TAD elemen (elemento ou node)
//O TAD ELEM: int valor (o valor que estamos armazenando) e o ponteiro pro proximo elemento
//No tad elem vai ter tb Struct elem* prox; //aponta pra outra struct elemento
//O tad lista vai ter qtd e struct elem* inicio; (vai guardar o inicio)
//a lista vai guardar o endereco dos elementos e os elementos guardam o endereço do proximo elemento

/* Funções: Inserir inicio, inserir final, remover inicio, remover final, buscar por posicao, buscar por valor, criar, destruir
    pode querer ordenar, remover de forma ordenada, imrpimir lista etc. */

    struct elem{
        int valor;
        struct elem* prox                   //ponteiro pra outro elem ou Elem* prox;
    };

    typedef struct elem* Elem;





    struct lista{
        int qtd; //quantos elementos tem na nossa lista, quantos nós
        Elem* inicio; //apontando pra nossa outra struct ou strcu elem*
    }

    typedef struct lista* Lista;

    Lista criar(){
        Lista li = malloc(sizeof(struct lista));
        if(li != NULL){
            li->qtd = 0;
            li->inicio = NULL; //pra dizer que nao tem nenhum elemento no endereco

        }
        return li;
    }



    /*Esse no->prox = li->inicio serve para guardar o valor que estava no inicio. Ou seja quando ele escreve li->inicio = no, o valor que anterioemente
    estava no inicio nao se perde.*/

    int inserirElementoNoInicio(Lista l, int valor_inserir){
        Elem* no = malloc(sizeof(struct Elem));
        if(no != NULL){
            no->valor = valor_inserir; //a proxima linha é onde fato é feito a inserção
            no->prox = li->inicio //aqui eu ja digo q o proximo é igual a null, da mesma forma q li->inicio tb é null. Serve pra guardar o endereço do inicio
            li->inicio = no; //atualizando elemento do inicio
            li->qtd += 1;

            return 1;
        }


        return 0;
    }

    int inserir_final(Lista li, int valor_inserir){
        Elem* no = malloc(sizeof(Elem));
        if(no != NULL){ //se a lista tiver 
            no->valor = valor_inserir;
            no->prox = NULL; //pois depois do ultimo valor nao existe mais nenhum
            Elem* aux = li->inicio; //serve pra percorrer posteriormente sem perder o endereço do inicio 
            while(aux->prox != NULL){ 
                aux = aux->prox; //aqui serve pra apontar pra o proximo endereço da nossa lista.
            }
            aux->prox = no; //se aux->prox == null, vai ser igual a no ja q dps n tem mais nenhum valor. É aqui que é inserido no final. 
            li->qtd++; 
            return 1;
        }

    }

    int remover_inicio(Lista li){
        //nao precisa criar o no pois ele ja existe, ou seja, vc n precisa criar outro pra guardar esse remover. Voce so esta removendo um item q ja existe
        if(li == NULL || li->inicio == NULL){
                return 0;
        }
            Elem* no_remover = li->inicio; //tem q ser do tipo elem pois a struct lista guarda todos os pedidos e o inicio e a struct elem fala sobre um elemento especifico
            //aqui encima voce guarda o valor do inicio q vc vai remover
            li->inicio = no_remover->prox; //atualiza o inicio pro proximo valor do numero q vai ser removido
            free(no_remover);
            li->qtd--;
            return 1;
        }
    


    int remover_final(Lista li){
        if(li == NULL || li->inicio == NULL){
      //nao entendi
    }


    



    //fazer em casa, inserir inicio, inserir final, começar a pensar em remover inicio, remover final, acessar inicio , acessar final, buscar por favlor, buscar por posição e destruir
    //liberar todos os nos, primeiro vai ter q percorrer a lista, chegar no ultimo no se tiver null...
    











int main(){










    return 0;
}