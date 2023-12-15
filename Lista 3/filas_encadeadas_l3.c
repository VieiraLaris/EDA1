#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void enfileira (celula **f, int x){
    celula *salva = malloc(sizeof(celula));

    salva->prox = (*f)->prox;

    (*f)->dado = x,
    (*f)->prox = salva;
    (*f) = salva;
    
}

int desenfileira (celula *f, int *y) {
    celula *salva = f->prox;
    *y = salva->dado;

    if (f->prox == f){
        return 0;
    }        
    
    f->prox = salva->prox;
    return 1;
    
}