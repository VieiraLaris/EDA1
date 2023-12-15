#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

celula *enfileira (celula *f, int x){
    celula *salva = malloc(sizeof(celula));

    if(salva == NULL){
        return NULL;
    }

    if(f == NULL){
        return NULL; 
    }

    /*salva->dado = x;*/

    salva->prox = f->prox;
    f->prox = salva;
    f->dado = x;
    f = salva;

    return f;

}