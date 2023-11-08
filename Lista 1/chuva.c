#include <stdio.h>
#include <stdlib.h>

int main(){

    int dim;

    scanf("%d", &dim);

    int mapa1[dim][dim], mapa2[dim][dim], total[dim][dim];
   
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            scanf("%d", &mapa1[i][j]);
        }
    }

    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            scanf("%d", &mapa2[i][j]);
        }
    }  
    
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            total[i][j] = mapa1[i][j] + mapa2[i][j];
            printf("%d ", total[i][j]);
        }

        printf("\n");
    }

    return 0;
}