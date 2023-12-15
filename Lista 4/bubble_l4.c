#include <stdio.h>
#include <stdlib.h>

void bubble(int *v, int l, int r){
    for(; r > l; r--){
        for(int j = l; j < r; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main(){
    int *vetor = malloc(2000 * sizeof(int));  
    int num, i=0;

    while (scanf("%d", &num) != EOF){
        vetor[i] = num;
        i++;
    }

    bubble(vetor, 0, i++);

    printf("%d", vetor[1]);

    for(int j=2; vetor[j] != '\0'; j++){
        printf(" %d", vetor[j]);
    }

    printf("\n");

    return 0;
}

