#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char letra;
    int i = 0, salva=0;

    scanf("%c", &letra);

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