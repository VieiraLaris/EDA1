#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

int enfileira (fila *f, int x){
    if (f->u == f->N) {
        int tam_atualizado = (f->N)*2;

        int *dados_atualizado = realloc(f->dados, tam_atualizado*sizeof(int));

        if (dados_atualizado == NULL) {

            return 0;
        }

        f->dados = dados_atualizado;
        f->N = tam_atualizado;
    }

    f->dados[f->u] = x;
    f->u++;

    return 1;
}