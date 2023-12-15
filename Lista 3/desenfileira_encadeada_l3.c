#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int desenfileira (celula *f, int *y) {
    if (f->prox == NULL){
        return 0;
    }

    celula *salva = f->prox;

    *y = salva->dado;
    f->prox = salva->prox;

    return 1;
}