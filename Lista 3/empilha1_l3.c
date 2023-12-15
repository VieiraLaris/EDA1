#include <stdio.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int empilha(celula *p, int x){
    celula *salva = malloc(sizeof(celula));

    if(salva == 0){
        return 0;
    }

    salva->dado = x;
    salva->prox = p->prox;
    p->prox = salva;
    return 1;
}