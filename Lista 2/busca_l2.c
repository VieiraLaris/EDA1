#include <stdio.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

celula *busca (celula *le, int x){
    celula *salva = le;

    while (salva != NULL){
        if (salva->dado == x){
            return salva;
        }
        else{
            salva = salva->prox;
        }
    }

    return NULL;
}

celula *busca_rec (celula *le, int x){

    if(le == NULL){
        return NULL;
    }

    if(le->dado == x){
        return le;
    }
    else{
        return busca_rec(le->prox, x);
    }
}