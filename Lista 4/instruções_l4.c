#include <stdio.h>
#include <stdlib.h>

int buscar(int *v, int tam, int item)
{
    for (int i = 0; i < tam; i++) {

        if (v[i] == item) {
            return 1;
        }
    }

    return -1;
}

int main(){
    int qtd_itens, j=0;
    int salva=0, indice;

    scanf("%d", &qtd_itens);

    int *vetor = malloc(qtd_itens * sizeof(int));

    int item, busca;

    for(int i = 0; i<qtd_itens; i++){
        scanf("%d", &item);
        vetor[i] = item;
    }

    while(scanf("%d", &busca) != EOF){

        int result = buscar(vetor, qtd_itens, busca);

        if(result == 1){
            printf("sim\n");
        }
        else if(result == -1){
            printf("nao\n");
        }

    }

    return 0;
}