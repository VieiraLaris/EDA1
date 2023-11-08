#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void cria_no(celula *lista,int x)
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
}

/*int remove_depois (celula *p){


    no->dado = x;
    no->prox = le->prox;
    le->prox = no;
            
}*/

void remove_elemento (celula *le, int x){

    if (le->prox->dado == x) {
        le->prox = le->prox->prox;
    }

}

void remove_todos_elementos (celula *le, int x){

    if (le->prox != NULL && le->prox->dado == x) {
        le->prox = le->prox->prox;
    }

    remove_todos_elementos(le->prox, x);

}

int main(void)
{
    celula *le = malloc(sizeof(celula));
    //celula *l1 = malloc(sizeof(celula));
    //celula *l2 = malloc(sizeof(celula));

    le->prox = NULL;
    le->dado = 0;

    /*for (int i = 1; i <= 10; i++){
        cria_no(le, i);
    }*/

    cria_no(le, 1);
    cria_no(le, 2);
    cria_no(le, 3);
    cria_no(le, 4);
    cria_no(le, 3);
    cria_no(le, 6);
    cria_no(le, 7);
    cria_no(le, 8);

    mostra(le);
    remove_todos_elementos(le, 3);
    //insere_inicio(le, 77);

    mostra(le);
    //mostra(l2);
    //mostra(l);
    return 0;
}