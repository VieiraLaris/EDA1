#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_elementos, i, j, num, salva=0;

    scanf("%d", &qtd_elementos);

    int v[qtd_elementos];

    for(i=0; i<qtd_elementos; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &num);

    for(j=0; j<qtd_elementos; j++){
        if(v[j] == num){
            salva++;
        }
        else{
            salva = salva;
        }
    }

    if(salva > 0){
        printf("pertence\n");
    }
    else if(salva == 0){
        printf("nao pertence\n");
    }
          
    return 0;
}