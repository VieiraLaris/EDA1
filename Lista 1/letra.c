#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;
    int i = 0, salva=0;

    char vetor[1001];
    fgets(vetor, 1001, stdin);
    
    while(vetor[i] != '\n')
    {
        if(vetor[i] == letra){
            salva++;
        }
    }

    printf("%d\n", salva);
         
    return 0;
}