#include <stdio.h>
#include <string.h>

void trocaXporY(char *str, int tam, int indice) {
    
    if (indice == tam) {
        str[indice] = '\0';
        return; 
    }

    if (str[indice] == 'x') {
        str[indice] = 'y';
    }

    trocaXporY(str, tam, indice+1);
}

int main() {
    char palavra1[101]; 
    char palavra2[101];
    int num; 

    scanf("%s", palavra1);

    num = strlen(palavra1);

    trocaXporY(palavra1, num, 0);

    strcpy(palavra2, palavra1);

    printf("%s\n", palavra2);

    return 0;
}