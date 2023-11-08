#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_elementos, i, j, menor_elemento=0, indice;

    scanf("%d", &qtd_elementos);

    int v[qtd_elementos];

    for(i=0; i<qtd_elementos; i++){
        scanf("%d", &v[i]);
    }

    for(j=0; j<qtd_elementos; j++){
        if(v[j] < menor_elemento){
            menor_elemento = v[j];
            indice = j;
        }
    }

    printf("%d\n", indice);
    
      
    return 0;
}