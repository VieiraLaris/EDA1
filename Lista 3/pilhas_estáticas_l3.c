#include <stdio.h>
#include <stdlib.h>

typedef struct {
int *v; 
int N; 
int topo; 
} pilha;

void empilha(pilha *p, int x){

    if(p->topo == p->N){
        int tam_novo = p->N*2;
        int *dados_novos = realloc(p->v, tam_novo * sizeof(int));

        if (dados_novos == NULL) {
            return;
        }

        p->v = dados_novos;
        p->N = tam_novo;
    }

    p->v[p->topo] = x;
    p->topo++;
}

int desempilha (pilha *p, int *y){
    if(p->topo == 0){
        return 0;
    }

    p->topo--;
    *y = p->v[p->topo];
    return 1;
}