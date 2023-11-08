#include <stdio.h>
#include <string.h>

int pares(char *nome, int tam, int atual) {
    if (atual >= tam-2) {
        return 0; 
    }

    if (nome[atual] == nome[atual+2]) {
        return pares(nome, tam, atual+1)+1; 
    } else {
        return pares(nome, tam, atual+1); 
    }
}

int main() {
    char nome[2001]; 
    scanf("%s", nome);
    int tam = strlen(nome);
    printf("%d\n", pares(nome, tam, 0));
    return 0;
}
