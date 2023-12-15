#include <stdio.h>
#include <stdlib.h>

int joga_fora(int num){
    int fila[num];

    for(int i=1; i<=num; i++){
        fila[i] = i;
    }

    for(int j=num; j>=0; j--){
        
        for(int i=1; i<num; i++){
            fila[i] = fila[i+1];
        }


    }

    
}