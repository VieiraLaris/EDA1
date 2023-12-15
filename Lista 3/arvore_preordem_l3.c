#include <stdio.h>
#include <stdlib.h>

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

void pre_ordem (no *raiz){
    if(raiz != NULL){
        printf("%d ", raiz->dado);

        pre_ordem(raiz->esq);
        
        pre_ordem(raiz->dir);
    }
}