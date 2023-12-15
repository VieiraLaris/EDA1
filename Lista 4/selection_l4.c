#include <stdio.h>
#include <stdlib.h>

void selection(int *v, int l, int r){
    int menor;
    int temp;
    for(int i = l; i < r; i ++){
        menor = i ;

        for(int j = i+1; j <= r; j++)
            if(v[j] < v[menor])
            menor = j;

        if(i != menor){
            temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
        }
    }
}

int main(){
    int *vetor = malloc(1001 * sizeof(int));  
    int num, i=0;

    while (scanf("%d", &num) != EOF){
        vetor[i] = num;
        i++;
    }

    selection(vetor, 0, i++);

    for(int j=1; j < i; j++){
        printf("%d", vetor[j]);
        if(j < i-1){
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}