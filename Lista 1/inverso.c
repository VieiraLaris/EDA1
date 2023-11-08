#include <stdio.h>
#include <stdlib.h>

int main(){

    char vetor[1001];
    int i = 0, tamanho=0, j, final, salva;

    scanf("%s", vetor);
    
    while(vetor[i] != '\0')
    {
        i++;
        tamanho ++;
    }

    final = tamanho - 1;

    for(j = 0; j < tamanho/2; j++){
        salva = vetor[j];
        vetor[j] = vetor[final];
        vetor[final] = salva;
        final--;
    }

    printf("%s\n", vetor);
         
    return 0;
}