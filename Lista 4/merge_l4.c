#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int l, int meio, int r) {
    int salva1 = l;
    int salva2 = meio + 1; 
    int aux = 0; 
    int vetor[r-l+1];

    while(salva1 <= meio && salva2 <= r){
        if(v[salva1] <= v[salva2]){
            vetor[aux] = v[salva1];
            salva1++;
        }
        else{
            vetor[aux] = v[salva2];
            salva2++; 
        }
        
        aux++; 
    }

    while(salva1 <= meio){ 
        vetor[aux] = v[salva1];
        aux++;
        salva1++; 
    }

    while(salva2 <= r){ 
        vetor[aux] = v[salva2];
        aux++;
        salva2++; 
    }

    for(aux=l; aux<=r; aux++){ 
        v[aux] = vetor[aux - l];
    }
}

void merge_sort(int *v, int l, int r){
    if (l < r) {
        int meio = (l+r)/2;
        merge_sort(v, l, meio);
        merge_sort(v, meio+1, r);
        merge(v, l, meio, r);
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

    merge_sort(vetor, 0, tam);

    printf("%d", vetor[1]);

    for(int j=2; j < i; j++){
        printf(" %d", vetor[j]);
    }

    printf("\n");

    return 0;
}