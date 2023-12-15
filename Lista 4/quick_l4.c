#include <stdio.h>
#include <stdlib.h>

void quickSort(int *v, int l, int r) {
    int aux, aux2;     
    int inicio = l;
    int fim = r;

    aux = v[(l+r)/2];
     
    while(inicio <= fim) {
        while(v[inicio] < aux && inicio < r) {
            inicio++;
        }
        while(v[fim] > aux && fim > l) {
            fim--;
        }
        if(inicio <= fim) {
            aux2 = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux2;
            inicio++;
            fim--;
        }
    }
     
    if(fim > l) {
        quickSort(v, l, fim);
    }
    if(inicio < r) {
        quickSort(v, inicio, r);
    }
}

int main(){
    int tam;
    scanf("%d", &tam);

    int *vetor = malloc((tam+1) * sizeof(int));  
    int num, i=1;

    while (i <= tam){
        scanf("%d", &num);
        vetor[i] = num;
        i++;
    }

    quickSort(vetor, 0, tam);

    printf("%d", vetor[1]);

    for(int j=2; j < i; j++){
        printf(" %d", vetor[j]);
    }

    printf("\n");

    return 0;
}