#include <stdio.h>
#include <string.h>

void inverte(char *str, int tam, int final, int indice) {

    int salva;
    
    if (indice == tam) {
        str[indice] = '\0';
        return; 
    }

    if (indice < (tam/2)) {
        salva = str[indice];
        str[indice] = str[final];
        str[final] = salva;
    }

    inverte(str, tam, --final, ++indice);
}

int main() {
    char palavra1[501]; 
    char palavra2[501];
    int num, final; 

    scanf("%s", palavra1);

    num = strlen(palavra1);
    final = num-1;

    inverte(palavra1, num, final, 0);

    strcpy(palavra2, palavra1);

    printf("%s\n", palavra2);

    return 0;
}