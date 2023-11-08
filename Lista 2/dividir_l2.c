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

void divide_lista (celula *l, celula *l1, celula *l2){
    if(l->prox == NULL){
        l1->prox = NULL;
        l2->prox = NULL;
    }

    else{
        if(l->prox->dado%2 == 0){
            l2->prox = l->prox;
            divide_lista(l->prox, l1, l2->prox);
        }
        else{
            l1->prox = l->prox;
            divide_lista(l->prox, l1->prox, l2);
        }
    }
}

/*int main(void)
{
    celula *l = malloc(sizeof(celula));
    celula *l1 = malloc(sizeof(celula));
    celula *l2 = malloc(sizeof(celula));

    l->prox = NULL;
    l->dado = 0;

    for (int i = 1; i <= 10; i++){
        cria_no(l, i);
    }

    mostra(l);
    divide_lista(l, l1, l2);

    mostra(l1);
    mostra(l2);
    mostra(l);
    return 0;
}*/