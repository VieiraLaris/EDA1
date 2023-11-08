#include <stdio.h>
#include <stdlib.h>

int main(){

    char vetor[1001];
    int i = 0, tamanho=0;

    scanf("%s", vetor);
    
    while(vetor[i] != '\0')
    {
        i++;
        tamanho ++;
    }

    printf("%d\n", tamanho);
         
    return 0;
}