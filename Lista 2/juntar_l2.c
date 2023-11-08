#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

/*void cria_no(celula *lista,int x)
{
    celula *no = malloc(sizeof(celula));

    while(lista->prox != NULL){
        lista = lista->prox;
    }
                
    lista->prox = no;
    no->dado = x;
    no->prox = NULL;
}

void mostra(celula *lista)
{
    if (lista->prox != NULL) {
        printf("%d -> ", lista->dado);
        mostra(lista->prox);
    }
    else{
        printf("%d\n", lista->dado);
    }
}*/

void mescla_listas (celula *l1, celula *l2, celula *l3){

    while(l1->prox != NULL && l2->prox != NULL){
        if(l1->prox->dado < l2->prox->dado){
            l3->prox = l1->prox;
            l1->prox = l1->prox->prox;
        }
        else{
            l3->prox = l2->prox;
            l2->prox = l2->prox->prox;
        }

        l3 = l3->prox;
    }

    if (l1->prox != NULL) {
        l3->prox = l1->prox;
    } else {
        l3->prox = l2->prox;;
    }
}

/*int main(void)
{
    celula *l1 = malloc(sizeof(celula));
    celula *l2 = malloc(sizeof(celula));
    celula *l3 = malloc(sizeof(celula));

    l1->prox = NULL;
    l1->dado = 0;

    l2->prox = NULL;
    l2->dado = 0;

    cria_no(l1, 1);
    cria_no(l1, 7);
    cria_no(l1, 9);
    cria_no(l1, 10);
    cria_no(l2, 2);
    cria_no(l2, 3);
    cria_no(l2, 8);
    

    mostra(l1);
    mostra(l2);
    mescla_listas(l1, l2, l3);

    mostra(l3);

    return 0;
}*/