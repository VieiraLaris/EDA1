#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_rodadas, aldo, beto, i, j, pontos_beto=0, pontos_aldo=0;

    for(j = 0; scanf("%d\n", &qtd_rodadas) > 0; j++){
                   
        for(i = 0; i < qtd_rodadas; i++){

            scanf("%d %d", &aldo, &beto);

            pontos_aldo = pontos_aldo + aldo;
            pontos_beto = pontos_beto + beto;                
        }

        /*printf("\nAldo: %d\n", pontos_aldo);
        printf("Beto: %d\n", pontos_beto);*/

        if(pontos_aldo > pontos_beto){
            printf("\nTeste %d\nAldo\n", j+1);
        }
        else if(pontos_beto > pontos_aldo){
            printf("\nTeste %d\nBeto\n", j+1);
        }

        aldo = beto = pontos_aldo = pontos_beto = 0;      
    }
   
    return 0;
}