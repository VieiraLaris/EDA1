#include <stdio.h>
#include <stdlib.h>

int buscar(int *v, int tam, int item)
{
    for (int i = 0; i < tam; i++) {

        if (v[i] == item) {
            return i;
        }
    }

    return -1;
}

int main(){
    int qtd_itens, qtd_busca;
    int salva=0, indice;

    scanf("%d %d", &qtd_itens, &qtd_busca);

    int *vetor = malloc(qtd_itens * sizeof(int));

    int item, busca;

    for(int i = 0; i<qtd_itens; i++){
        scanf("%d", &item);
        vetor[i] = item;
    }

    for(int j = 0; j<qtd_busca; j++){
        scanf("%d", &busca);
        int result = buscar(vetor, qtd_itens, busca);

        printf("%d\n", result);

    }

    return 0;
}