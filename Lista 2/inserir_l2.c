#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

/*void cria_no(celula *lista,int x)
{
    celula *no = malloc(sizeof(celula));

    while(lista->prox != NULL){
        lista = lista->prox;
    }
                
    lista->prox = no;
    no->dado = x;
    no->prox = NULL;
}

void mostra(celula *lista)
{
    if (lista->prox != NULL) {
        printf("%d -> ", lista->dado);
        mostra(lista->prox);
    }
    else{
        printf("%d\n", lista->dado);
    }
}*/

void insere_inicio (celula *le, int x){

    celula *no = malloc(sizeof(celula));

    no->dado = x;
    no->prox = le->prox;
    le->prox = no;
            
}

void insere_antes (celula *le, int x, int y){

    celula *salva1 = le;
    celula *salva2 = le->prox;
    celula *no = malloc(sizeof(celula));
    no->dado = x;

    while (salva2 != NULL && salva2->dado != y) {
        salva1 = salva2;
        salva2 = salva2->prox;
    }

    no->prox = salva2;
    salva1->prox = no;

}

/*int main(void)
{
    celula *le = malloc(sizeof(celula));
    //celula *l1 = malloc(sizeof(celula));
    //celula *l2 = malloc(sizeof(celula));

    le->prox = NULL;
    le->dado = 0;

    for (int i = 1; i <= 10; i++){
        cria_no(le, i);
    }

    mostra(le);
    insere_antes(le, 80, 4);
    //insere_inicio(le, 77);

    mostra(le);
    //mostra(l2);
    //mostra(l);
    return 0;
}*/