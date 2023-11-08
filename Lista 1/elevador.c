#include <stdio.h>
#include <stdlib.h>

int main(){

    int capacidade, num_leituras, qtd_saiu, qtd_entrou, i, qtd_dentro = 0, controle=0;

    scanf("%d %d", &num_leituras, &capacidade);
    
    for(i = 0; i < num_leituras; i++){
        scanf("%d %d", &qtd_saiu, &qtd_entrou);

        qtd_dentro = qtd_dentro + qtd_entrou - qtd_saiu;

        if(qtd_dentro > capacidade){
            controle++;
        }
    }

    if(controle > 0){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}