#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_elementos, i, j, k;

    scanf("%d", &qtd_elementos);

    int v[qtd_elementos];

    for(i=0; i<qtd_elementos; i++){
        scanf("%d", &v[i]);
    }

    for(k=0; k<qtd_elementos; k++){
        if(v[k]%2 == 0){
            printf("%d ", k);
        }
    }

    printf("\n");
    
    for(j=0; j<qtd_elementos; j++){
        if(v[j]%2 != 0){
            printf("%d ", j);
        }
    }

    printf("\n");
          
    return 0;
}