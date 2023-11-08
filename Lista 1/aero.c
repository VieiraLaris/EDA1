#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_aeroportos, num_voos, saida, chegada, i, j, k, soma=0;

    for(j = 0; scanf("%d %d\n", &num_aeroportos, &num_voos) > 0; j++){
                   
        for(i = 0; i < num_voos; i++){

            scanf("%d %d", &saida, &chegada); 

            for(k = 0; k < num_aeroportos; k++){
                if(saida == k || chegada == k){
                    soma++;
                }
            }

            printf("O Aeroporto %d teve %d voos.\n", k, soma);           
        }
    }

    return 0;
}