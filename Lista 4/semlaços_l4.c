#include <stdio.h>
#include <stdlib.h>

int encontraIndice(int *v, int n, int indice){
    int menor;
    int menorIndice = 0;

    if(indice >= n){
        printf("O menor elemento é: %d.\n", menor);
        printf("O indice dele é: %d.\n", menorIndice);
        return menorIndice;
    }

    if(v[indice] < menor){
        menor = v[indice];
        menorIndice = indice;
    }
    
    encontraIndice(v, n, indice + 1);
    
}

int main(){
    int *vetor = malloc(1001 * sizeof(int));  
    int num, i=0;

    while (scanf("%d", &num) != EOF){
        vetor[i] = num;
        i++;
    }

    int tam = i;

    printf("%d\n", tam);

    encontraIndice(vetor, tam, 1);

    /*for(int j=1; j < i; j++){
        printf("%d", vetor[j]);
        if(j < i-1){
            printf(" ");
        }
    }

    printf("\n");*/

    return 0;
}