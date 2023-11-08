#include <stdio.h>
#include <string.h>

void movex(char *palavra, int tam, int indice) {
    
    if (indice == tam) {
        return;
    }

    if (palavra[indice] != 'x') {
        printf("%c", palavra[indice]);
    }

    movex(palavra, tam, indice+1);

    if (palavra[indice] == 'x') {
        printf("x");
    }
}

int main() {
    char palavra[1001];
    scanf("%s", palavra);

    int tam = strlen(palavra);
    movex(palavra, tam, 0);

    return 0;
}