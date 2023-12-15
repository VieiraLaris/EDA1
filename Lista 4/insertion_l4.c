#include <stdio.h>
#include <stdlib.h>

void insertion(int *v, int l, int r){
    int elem, i, j;
    for(i = l+1; i <= r; i ++){
        elem = v[i];
        for(j = i; j > l && elem < v[j-1]; j--)
            v[j] = v[j-1]; 

        v[j] = elem; 
    }
}

int main(){
    int *vetor = malloc(50001 * sizeof(int));  
    int num, i=0;

    while (scanf("%d", &num) != EOF){
        vetor[i] = num;
        i++;
    }

    insertion(vetor, 0, i++);

    for(int j=1; j < i; j++){
        printf("%d", vetor[j]);
        if(j < i-1){
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}