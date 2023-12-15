#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;

int empilha(pilha *p, int x){
  
    if(p->topo == p->N){
      int tam_atualizado = (p->N)*2;
      int *dados_atualizado = realloc(p->dados, tam_atualizado*sizeof(int));

      if (dados_atualizado == NULL) {
        return 0;
      }

      p->dados = dados_atualizado;
      p->N = tam_atualizado;
    }

    p->dados[p->topo] = x;
    p->topo++;
    return 1;
}