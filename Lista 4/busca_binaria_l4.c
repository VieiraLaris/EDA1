#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, num, busca, i=0;

    scanf("%d %d", &m, &n);

    int vetor[n];

    while(i < n){
        scanf("%d", &num);
        vetor[i] = num;
        i++;
    }

    for(int i=0; i<m; i++){
        scanf("%d", &busca);

        for(int j=0; j<n; j++){
            if(vetor[j] == busca){
                printf("\n%d\n", j);
            }
        }
    }
}