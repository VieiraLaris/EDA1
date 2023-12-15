#include <stdio.h>
#include <stdlib.h>

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

void em_ordem (no *raiz){
    if(raiz != NULL){
        em_ordem(raiz->esq);

        printf("%d ", raiz->dado); 

        em_ordem(raiz->dir);
    }
}