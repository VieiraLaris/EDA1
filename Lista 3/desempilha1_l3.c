#include <stdio.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int desempilha (celula *p, int *y){

    if(p->prox == NULL){
        return 0;
    }

    celula *salva = p->prox;
    *y = salva->dado;

    p->prox = salva->prox;
    free(salva);

    return 1;

}